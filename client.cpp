#include <iostream>
#include <string>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <thread>
#include <memory>
#include <unordered_map>
#include "protocol.pb.h"

using namespace std;

unordered_map<string, thread> privateChats;

void listenPrivateMessages(int sockfd, const string& username) {
    while (true) {
        char buffer[8192];
        int bytesReceived = recv(sockfd, buffer, sizeof(buffer), 0);
        if (bytesReceived <= 0) {
            if (bytesReceived == 0) {
                cout << "Server closed the connection." << endl;
            } else {
                perror("recv failed");
            }
            break;
        }
        
        chat::ServerResponse response;
        if (!response.ParseFromArray(buffer, bytesReceived)) {
            cerr << "Failed to parse response.\nAborting" << endl;
            break;
        }

        if (response.option() == 4 && response.messagecommunication().sender() == username) {
            cout << "-------------------PRIVATE TRANSMISSION-------------------" << endl;
            cout << "Server message: " << response.servermessage() << endl;
            cout << response.messagecommunication().sender() << ":\n" << response.messagecommunication().message() << endl;
            cout << "------------------- END OF TRANSMISSION -------------------" << endl;
        }
    }
}

void listenResponses(int sockfd) {
    while (true) {
        char buffer[8192];
        int bytesReceived = recv(sockfd, buffer, sizeof(buffer), 0);
        if (bytesReceived <= 0) {
            if (bytesReceived == 0) {
                cout << "The server has disconnected." << endl;
            } else {
                perror("recv failed");
            }
            break;
        }
        
        chat::ServerResponse response;
        if (!response.ParseFromArray(buffer, bytesReceived)) {
            cerr << "Failed to parse response.\nAborting" << endl;
            break;
        }

        switch (response.option()) {
            // Remaining code for handling different response types
        }
    }
}

void sendMessage(int sockfd, const string& message, const string& sender = "", const string& recipient = "everyone") {
    chat::ClientPetition request;
    chat::MessageCommunication *messageCommunication = request.mutable_messagecommunication();
    messageCommunication->set_message(message);
    messageCommunication->set_recipient(recipient);
    messageCommunication->set_sender(sender);
    request.set_option(4);

    string serializedMessage;
    if (!request.SerializeToString(&serializedMessage)) {
        cerr << "Failed to serialize message." << endl;
        return;
    }

    send(sockfd, serializedMessage.c_str(), serializedMessage.size(), 0);
}

void privateChat(int sockfd, const string& recipient, const string& sender, const string& message) {
    sendMessage(sockfd, message, sender, recipient);
    privateChats[recipient] = thread(listenPrivateMessages, sockfd, recipient);
}

void changeStatus(int sockfd, const string& username, const string& status) {
    chat::ClientPetition request;
    chat::ChangeStatus *statusChange = request.mutable_change();
    statusChange->set_username(username);
    statusChange->set_status(status);
    request.set_option(3);

    string serializedStatusChange;
    if (!request.SerializeToString(&serializedStatusChange)) {
        cerr << "Failed to serialize status change." << endl;
        return;
    }

    send(sockfd, serializedStatusChange.c_str(), serializedStatusChange.size(), 0);
}

void listUsers(int sockfd) {
    chat::ClientPetition request;
    request.set_option(2); // Option to list connected users

    string serializedRequest;
    if (!request.SerializeToString(&serializedRequest)) {
        cerr << "Failed to serialize user list request." << endl;
        return;
    }

    send(sockfd, serializedRequest.c_str(), serializedRequest.size(), 0);
}

void getUserInfo(int sockfd, const string& username) {
    chat::ClientPetition request;
    chat::UserRequest *userRequest = request.mutable_users();
    userRequest->set_user(username);
    request.set_option(5); // Option to get user info

    string serializedRequest;
    if (!request.SerializeToString(&serializedRequest)) {
        cerr << "Failed to serialize user info request." << endl;
        return;
    }

    send(sockfd, serializedRequest.c_str(), serializedRequest.size(), 0);
}

int main(int argc, char const *argv[]) {
    if (argc != 4) {
        cerr << "Usage: " << argv[0] << " <username> <serverIP> <serverPort>" << endl;
        return 1;
    }

    string username = argv[1];
    string serverIP = argv[2];
    int serverPort = stoi(argv[3]);

    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("socket failed");
        return 1;
    }

    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(serverPort);
    inet_pton(AF_INET, serverIP.c_str(), &serverAddr.sin_addr);

    if (connect(sockfd, reinterpret_cast<sockaddr*>(&serverAddr), sizeof(serverAddr)) == -1) {
        perror("connect failed");
        return 1;
    }

    chat::ClientPetition request;
    chat::UserRegistration *newUser = request.mutable_registration();
    newUser->set_ip("10.0.2.15");
    newUser->set_username(username);
    request.set_option(1);

    string serializedMessage;
    if (!request.SerializeToString(&serializedMessage)) {
        cerr << "Failed to serialize message." << endl;
        return 1;
    }

    send(sockfd, serializedMessage.c_str(), serializedMessage.size(), 0);

    char buffer[8192];
    int bytesReceived = recv(sockfd, buffer, sizeof(buffer), 0);
    if (bytesReceived <= 0) {
        if (bytesReceived == 0) {
            cout << "Server closed the connection." << endl;
        } else {
            perror("recv failed");
        }
        return 1;
    }

    chat::ServerResponse response;
    if (!response.ParseFromArray(buffer, bytesReceived)) {
        cerr << "Failed to parse response.\nAborting" << endl;
        return 1;
    }

    if (response.code() != 200) {
        cout << response.servermessage() << endl;
        return 1;
    }

    cout << "SERVER: " << response.servermessage() << endl;
    cout << "Connected to the server." << endl;

    thread receiveThread(listenResponses, sockfd);
    receiveThread.detach();

    string option;
    while (true) {
        cout << "Select an option:" << endl;
        cout << "1. Send message" << endl;
        cout << "2. Private chat" << endl;
        cout << "3. Change status" << endl;
        cout << "4. List connected users" << endl;
        cout << "5. Get user information" << endl;
        cout << "6. Help" << endl;
        cout << "7. Exit" << endl;
        cin >> option;

        if (option == "1") {
            string message;
            cout << "Enter your message:" << endl;
            cin >> message;
            sendMessage(sockfd, message, username);
        } else if (option == "2") {
            string recipient;
            cout << "Enter username to send message:" << endl;
            cin >> recipient;
            string message;
            cout << "Enter your message:" << endl;
            cin >> message;
            privateChat(sockfd, recipient, username, message);
        } else if (option == "3") {
            cout << "Select a status (ACTIVE, BUSY, INACTIVE): ";
            string status;
            cin >> status;
            changeStatus(sockfd, username, status);
        } else if (option == "4") {
            listUsers(sockfd);
        } else if (option == "5") {
            cout << "Enter the username: ";
            string targetUsername;
            cin >> targetUsername;
            getUserInfo(sockfd, targetUsername);
        } else if (option == "6") {
            // Display help message
            cout << "Welcome to the chat system." << endl;
            // Provide help message
        } else if (option == "7") {
            // Exit the application
            break;
        } else {
            cout << "Invalid option." << endl;
        }
    }

    close(sockfd);

    return 0;
}
