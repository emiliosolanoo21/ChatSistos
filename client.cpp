#include <iostream>
#include <string>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <thread>
#include "protocol.pb.h"

using namespace std;

void sendMessage(int socketFd, const string& message, const string& sender = "", const string& recipient = "everyone") {
    chat::ClientPetition request;
    chat::MessageCommunication messageCommunication;
    messageCommunication.set_message(message);
    messageCommunication.set_recipient(recipient);
    messageCommunication.set_sender(sender);
    request.set_option(4);
    request.set_allocated_messagecommunication(&messageCommunication);
    string serializedRequest;
    if (!request.SerializeToString(&serializedRequest)) {
        cerr << "Failed to serialize the message." << endl;
        return;
    }
    char buffer[8192];
    strcpy(buffer, serializedRequest.c_str());
    if (!send(socketFd, buffer, serializedRequest.size() + 1, 0)) {
        perror("send failed");
    }
}

void receiveMessages(int socketFd) {
    while (true) {
        char buffer[8192];
        int bytesReceived = recv(socketFd, buffer, 8192, 0);
        if (bytesReceived == -1) {
            perror("recv failed");
            break;
        } else if (bytesReceived == 0) {
            cout << "Server disconnected." << endl;
            break;
        } else {
            chat::ServerResponse response;
            if (!response.ParseFromArray(buffer, bytesReceived)) {
                cerr << "Failed to parse the response." << endl;
                continue; // Continue with the next iteration of the loop
            }
            
            if (response.option() == 2) {
                cout << "Retrieved Users:" << endl;
                for (int i = 0; i < response.connectedusers().connectedusers_size(); ++i) {
                    auto user = response.connectedusers().connectedusers(i);
                    cout << "User: " << user.username() << endl;
                }
                cout << "-----------------------------------------------" << endl;
            } else if (response.option() == 3) {
                cout << "Status Change:" << endl;
                cout << response.servermessage() << endl;
                cout << "-----------------------------------------------" << endl;
            } else if (response.option() == 4) {
                if (!response.messagecommunication().has_recipient() || response.messagecommunication().recipient() == "everyone") {
                    cout << "Incoming Global Transmission:" << endl;
                    cout << "Mensaje del servidor: " << response.servermessage() << endl;
                    cout << response.messagecommunication().sender() << ":\n" << response.messagecommunication().message() << endl;
                    cout << "------------------- END OF TRANSMISSION -------------------" << endl;
                } else {
                    cout << "Incoming Private Transmission:" << endl;
                    cout << "Mensaje del servidor: " << response.servermessage() << endl;
                    cout << response.messagecommunication().sender() << ":\n" << response.messagecommunication().message() << endl;
                    cout << "------------------- END OF TRANSMISSION -------------------" << endl;
                }
            } else if (response.option() == 5) {
                cout << "User Info Retrieved:" << endl;
                cout << "USER: " << response.userinforesponse().username() << endl;
                cout << "STATUS: " << response.userinforesponse().status() << endl;
                cout << "IP: " << response.userinforesponse().ip() << endl;
                cout << "------------------- END OF RETRIEVED -------------------" << endl;
            } else {
                cout << "Received unknown response from server." << endl;
            }
        }
    }
}

void chatMenu(int socketFd, const string& username) {
    while (true) {
        cout << "Select an option:" << endl;
        cout << "1. Send message" << endl;
        cout << "2. Private chat" << endl;
        cout << "3. Change status" << endl;
        cout << "4. Exit" << endl;
        string option;
        cin >> option;
        if (option == "1") {
            string message;
            cout << "Enter your message:" << endl;
            cin >> message;
            sendMessage(socketFd, message, username);
        } else if (option == "2") {
            string recipient;
            cout << "Enter username to send message:" << endl;
            cin >> recipient;
            string message;
            cout << "Enter your message:" << endl;
            cin >> message;
            sendMessage(socketFd, message, username, recipient);
        } else if (option == "3") {
            string status;
            cout << "Select a status (ACTIVE, BUSY, INACTIVE):" << endl;
            cin >> status;
          
        } else if (option == "4") {
            break;
        } else {
            cout << "Invalid option." << endl;
        }
    }
}
int main(int argc, char const *argv[]) {
    if (argc != 4) {
        cerr << "Usage: " << argv[0] << " <username> <serverip> <serverport>" << endl;
        return 1;
    }

    string username = argv[1];
    string serverIp = argv[2];
    int serverPort = stoi(argv[3]);

    int socketFd = socket(AF_INET, SOCK_STREAM, 0);
    if (socketFd == -1) {
        perror("socket failed");
        return 1;
    }

    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(serverPort);
    inet_pton(AF_INET, serverIp.c_str(), &serverAddr.sin_addr);

    if (connect(socketFd, (sockaddr*)&serverAddr, sizeof(serverAddr)) == -1) {
        perror("connect failed");
        return 1;
    }

    chat::UserRegistration newUser;
    newUser.set_ip("10.0.2.15");
    newUser.set_username(username);
    chat::ClientPetition request;
    request.set_option(1);
    request.set_allocated_registration(&newUser);
    string serializedRequest;
    if (!request.SerializeToString(&serializedRequest)) {
        cerr << "Failed to serialize the registration request." << endl;
        return 1;
    }
    char buffer[8192];
    strcpy(buffer, serializedRequest.c_str());
    send(socketFd, buffer, serializedRequest.size() + 1, 0);
    recv(socketFd, buffer, 8192, 0);

    chat::ServerResponse response;
    response.ParseFromString(buffer);

    if (response.code() != 200) {
        cout << response.servermessage() << endl;
        return 0;
    }

    cout << "SERVER: " << response.servermessage() << endl;
    cout << "Connected to the server." << endl;

    thread receiveThread(receiveMessages, socketFd);
    receiveThread.detach();

    chatMenu(socketFd, username);

    close(socketFd);

    return 0;
}