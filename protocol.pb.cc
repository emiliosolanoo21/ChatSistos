

#include "protocol.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace chat {
PROTOBUF_CONSTEXPR UserRegistration::UserRegistration(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.username_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.ip_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct UserRegistrationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserRegistrationDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserRegistrationDefaultTypeInternal() {}
  union {
    UserRegistration _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserRegistrationDefaultTypeInternal _UserRegistration_default_instance_;
PROTOBUF_CONSTEXPR UserInfo::UserInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.username_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.status_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.ip_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct UserInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserInfoDefaultTypeInternal() {}
  union {
    UserInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserInfoDefaultTypeInternal _UserInfo_default_instance_;
PROTOBUF_CONSTEXPR UserRequest::UserRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.user_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct UserRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserRequestDefaultTypeInternal() {}
  union {
    UserRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserRequestDefaultTypeInternal _UserRequest_default_instance_;
PROTOBUF_CONSTEXPR ConnectedUsersResponse::ConnectedUsersResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.connectedusers_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ConnectedUsersResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ConnectedUsersResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ConnectedUsersResponseDefaultTypeInternal() {}
  union {
    ConnectedUsersResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ConnectedUsersResponseDefaultTypeInternal _ConnectedUsersResponse_default_instance_;
PROTOBUF_CONSTEXPR ChangeStatus::ChangeStatus(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.username_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.status_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct ChangeStatusDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChangeStatusDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChangeStatusDefaultTypeInternal() {}
  union {
    ChangeStatus _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChangeStatusDefaultTypeInternal _ChangeStatus_default_instance_;
PROTOBUF_CONSTEXPR MessageCommunication::MessageCommunication(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.message_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.recipient_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.sender_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct MessageCommunicationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageCommunicationDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageCommunicationDefaultTypeInternal() {}
  union {
    MessageCommunication _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageCommunicationDefaultTypeInternal _MessageCommunication_default_instance_;
PROTOBUF_CONSTEXPR ClientPetition::ClientPetition(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.registration_)*/nullptr
  , /*decltype(_impl_.users_)*/nullptr
  , /*decltype(_impl_.change_)*/nullptr
  , /*decltype(_impl_.messagecommunication_)*/nullptr
  , /*decltype(_impl_.option_)*/0} {}
struct ClientPetitionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ClientPetitionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ClientPetitionDefaultTypeInternal() {}
  union {
    ClientPetition _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ClientPetitionDefaultTypeInternal _ClientPetition_default_instance_;
PROTOBUF_CONSTEXPR ServerResponse::ServerResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.servermessage_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.connectedusers_)*/nullptr
  , /*decltype(_impl_.messagecommunication_)*/nullptr
  , /*decltype(_impl_.userinforesponse_)*/nullptr
  , /*decltype(_impl_.change_)*/nullptr
  , /*decltype(_impl_.option_)*/0
  , /*decltype(_impl_.code_)*/0} {}
struct ServerResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ServerResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ServerResponseDefaultTypeInternal() {}
  union {
    ServerResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ServerResponseDefaultTypeInternal _ServerResponse_default_instance_;
}  
static ::_pb::Metadata file_level_metadata_protocol_2eproto[8];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_protocol_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_protocol_2eproto = nullptr;

const uint32_t TableStruct_protocol_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::chat::UserRegistration, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::UserRegistration, _internal_metadata_),
  ~0u, 
  ~0u, 
  ~0u, 
  ~0u,  
  PROTOBUF_FIELD_OFFSET(::chat::UserRegistration, _impl_.username_),
  PROTOBUF_FIELD_OFFSET(::chat::UserRegistration, _impl_.ip_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::chat::UserInfo, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::UserInfo, _internal_metadata_),
  ~0u,  
  ~0u,  
  ~0u,  
  ~0u,  
  PROTOBUF_FIELD_OFFSET(::chat::UserInfo, _impl_.username_),
  PROTOBUF_FIELD_OFFSET(::chat::UserInfo, _impl_.status_),
  PROTOBUF_FIELD_OFFSET(::chat::UserInfo, _impl_.ip_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::chat::UserRequest, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::UserRequest, _internal_metadata_),
  ~0u,  
  ~0u,  
  ~0u,  
  ~0u,  
  PROTOBUF_FIELD_OFFSET(::chat::UserRequest, _impl_.user_),
  0,
  ~0u,  
  PROTOBUF_FIELD_OFFSET(::chat::ConnectedUsersResponse, _internal_metadata_),
  ~0u,  
  ~0u,  
  ~0u,  
  ~0u,  
  PROTOBUF_FIELD_OFFSET(::chat::ConnectedUsersResponse, _impl_.connectedusers_),
  PROTOBUF_FIELD_OFFSET(::chat::ChangeStatus, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::ChangeStatus, _internal_metadata_),
  ~0u,  
  ~0u,  
  ~0u,  
  ~0u,  
  PROTOBUF_FIELD_OFFSET(::chat::ChangeStatus, _impl_.username_),
  PROTOBUF_FIELD_OFFSET(::chat::ChangeStatus, _impl_.status_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::chat::MessageCommunication, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::MessageCommunication, _internal_metadata_),
  ~0u,  
  ~0u,  
  ~0u,  
  ~0u,  
  PROTOBUF_FIELD_OFFSET(::chat::MessageCommunication, _impl_.message_),
  PROTOBUF_FIELD_OFFSET(::chat::MessageCommunication, _impl_.recipient_),
  PROTOBUF_FIELD_OFFSET(::chat::MessageCommunication, _impl_.sender_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::chat::ClientPetition, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::ClientPetition, _internal_metadata_),
  ~0u,  
  ~0u,  
  ~0u,  
  ~0u,  
  PROTOBUF_FIELD_OFFSET(::chat::ClientPetition, _impl_.option_),
  PROTOBUF_FIELD_OFFSET(::chat::ClientPetition, _impl_.registration_),
  PROTOBUF_FIELD_OFFSET(::chat::ClientPetition, _impl_.users_),
  PROTOBUF_FIELD_OFFSET(::chat::ClientPetition, _impl_.change_),
  PROTOBUF_FIELD_OFFSET(::chat::ClientPetition, _impl_.messagecommunication_),
  4,
  0,
  1,
  2,
  3,
  PROTOBUF_FIELD_OFFSET(::chat::ServerResponse, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::ServerResponse, _internal_metadata_),
  ~0u,  
  ~0u,  
  ~0u,  
  ~0u,  
  PROTOBUF_FIELD_OFFSET(::chat::ServerResponse, _impl_.option_),
  PROTOBUF_FIELD_OFFSET(::chat::ServerResponse, _impl_.code_),
  PROTOBUF_FIELD_OFFSET(::chat::ServerResponse, _impl_.servermessage_),
  PROTOBUF_FIELD_OFFSET(::chat::ServerResponse, _impl_.connectedusers_),
  PROTOBUF_FIELD_OFFSET(::chat::ServerResponse, _impl_.messagecommunication_),
  PROTOBUF_FIELD_OFFSET(::chat::ServerResponse, _impl_.userinforesponse_),
  PROTOBUF_FIELD_OFFSET(::chat::ServerResponse, _impl_.change_),
  5,
  6,
  0,
  1,
  2,
  3,
  4,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::chat::UserRegistration)},
  { 10, 19, -1, sizeof(::chat::UserInfo)},
  { 22, 29, -1, sizeof(::chat::UserRequest)},
  { 30, -1, -1, sizeof(::chat::ConnectedUsersResponse)},
  { 37, 45, -1, sizeof(::chat::ChangeStatus)},
  { 47, 56, -1, sizeof(::chat::MessageCommunication)},
  { 59, 70, -1, sizeof(::chat::ClientPetition)},
  { 75, 88, -1, sizeof(::chat::ServerResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::chat::_UserRegistration_default_instance_._instance,
  &::chat::_UserInfo_default_instance_._instance,
  &::chat::_UserRequest_default_instance_._instance,
  &::chat::_ConnectedUsersResponse_default_instance_._instance,
  &::chat::_ChangeStatus_default_instance_._instance,
  &::chat::_MessageCommunication_default_instance_._instance,
  &::chat::_ClientPetition_default_instance_._instance,
  &::chat::_ServerResponse_default_instance_._instance,
};

const char descriptor_table_protodef_protocol_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016protocol.proto\022\004chat\"N\n\020UserRegistrati"
  "on\022\025\n\010username\030\001 \001(\tH\000\210\001\001\022\017\n\002ip\030\002 \001(\tH\001\210"
  "\001\001B\013\n\t_usernameB\005\n\003_ip\"f\n\010UserInfo\022\025\n\010us"
  "ername\030\001 \001(\tH\000\210\001\001\022\023\n\006status\030\002 \001(\tH\001\210\001\001\022\017"
  "\n\002ip\030\003 \001(\tH\002\210\001\001B\013\n\t_usernameB\t\n\007_statusB"
  "\005\n\003_ip\")\n\013UserRequest\022\021\n\004user\030\001 \001(\tH\000\210\001\001"
  "B\007\n\005_user\"@\n\026ConnectedUsersResponse\022&\n\016c"
  "onnectedUsers\030\001 \003(\0132\016.chat.UserInfo\"R\n\014C"
  "hangeStatus\022\025\n\010username\030\001 \001(\tH\000\210\001\001\022\023\n\006st"
  "atus\030\002 \001(\tH\001\210\001\001B\013\n\t_usernameB\t\n\007_status\""
  "~\n\024MessageCommunication\022\024\n\007message\030\001 \001(\t"
  "H\000\210\001\001\022\026\n\trecipient\030\002 \001(\tH\001\210\001\001\022\023\n\006sender\030"
  "\003 \001(\tH\002\210\001\001B\n\n\010_messageB\014\n\n_recipientB\t\n\007"
  "_sender\"\261\002\n\016ClientPetition\022\023\n\006option\030\001 \001"
  "(\005H\000\210\001\001\0221\n\014registration\030\002 \001(\0132\026.chat.Use"
  "rRegistrationH\001\210\001\001\022%\n\005users\030\003 \001(\0132\021.chat"
  ".UserRequestH\002\210\001\001\022\'\n\006change\030\004 \001(\0132\022.chat"
  ".ChangeStatusH\003\210\001\001\022=\n\024messageCommunicati"
  "on\030\005 \001(\0132\032.chat.MessageCommunicationH\004\210\001"
  "\001B\t\n\007_optionB\017\n\r_registrationB\010\n\006_usersB"
  "\t\n\007_changeB\027\n\025_messageCommunication\"\230\003\n\016"
  "ServerResponse\022\023\n\006option\030\001 \001(\005H\000\210\001\001\022\021\n\004c"
  "ode\030\002 \001(\005H\001\210\001\001\022\032\n\rserverMessage\030\003 \001(\tH\002\210"
  "\001\001\0229\n\016connectedUsers\030\004 \001(\0132\034.chat.Connec"
  "tedUsersResponseH\003\210\001\001\022=\n\024messageCommunic"
  "ation\030\005 \001(\0132\032.chat.MessageCommunicationH"
  "\004\210\001\001\022-\n\020userInfoResponse\030\006 \001(\0132\016.chat.Us"
  "erInfoH\005\210\001\001\022\'\n\006change\030\007 \001(\0132\022.chat.Chang"
  "eStatusH\006\210\001\001B\t\n\007_optionB\007\n\005_codeB\020\n\016_ser"
  "verMessageB\021\n\017_connectedUsersB\027\n\025_messag"
  "eCommunicationB\023\n\021_userInfoResponseB\t\n\007_"
  "changeb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_protocol_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protocol_2eproto = {
    false, false, 1254, descriptor_table_protodef_protocol_2eproto,
    "protocol.proto",
    &descriptor_table_protocol_2eproto_once, nullptr, 0, 8,
    schemas, file_default_instances, TableStruct_protocol_2eproto::offsets,
    file_level_metadata_protocol_2eproto, file_level_enum_descriptors_protocol_2eproto,
    file_level_service_descriptors_protocol_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protocol_2eproto_getter() {
  return &descriptor_table_protocol_2eproto;
}


PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protocol_2eproto(&descriptor_table_protocol_2eproto);
namespace chat {

// ===================================================================

class UserRegistration::_Internal {
 public:
  using HasBits = decltype(std::declval<UserRegistration>()._impl_._has_bits_);
  static void set_has_username(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_ip(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

UserRegistration::UserRegistration(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  
}
UserRegistration::UserRegistration(const UserRegistration& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UserRegistration* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.username_){}
    , decltype(_impl_.ip_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.username_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.username_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_username()) {
    _this->_impl_.username_.Set(from._internal_username(), 
      _this->GetArenaForAllocation());
  }
  _impl_.ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ip_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_ip()) {
    _this->_impl_.ip_.Set(from._internal_ip(), 
      _this->GetArenaForAllocation());
  }
 
}

inline void UserRegistration::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.username_){}
    , decltype(_impl_.ip_){}
  };
  _impl_.username_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.username_.Set("", GetArenaForAllocation());
  #endif 
  _impl_.ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ip_.Set("", GetArenaForAllocation());
  #endif 
}

UserRegistration::~UserRegistration() {
  
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UserRegistration::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.username_.Destroy();
  _impl_.ip_.Destroy();
}

void UserRegistration::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UserRegistration::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.UserRegistration)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.username_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.ip_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserRegistration::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string username = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_username();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.UserRegistration.username"));
        } else
          goto handle_unusual;
        continue;
      // optional string ip = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_ip();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.UserRegistration.ip"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* UserRegistration::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.UserRegistration)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string username = 1;
  if (_internal_has_username()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_username().data(), static_cast<int>(this->_internal_username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.UserRegistration.username");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_username(), target);
  }

  // optional string ip = 2;
  if (_internal_has_ip()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ip().data(), static_cast<int>(this->_internal_ip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.UserRegistration.ip");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_ip(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.UserRegistration)
  return target;
}

size_t UserRegistration::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.UserRegistration)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string username = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_username());
    }

    // optional string ip = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_ip());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UserRegistration::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UserRegistration::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UserRegistration::GetClassData() const { return &_class_data_; }


void UserRegistration::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UserRegistration*>(&to_msg);
  auto& from = static_cast<const UserRegistration&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:chat.UserRegistration)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_username(from._internal_username());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_ip(from._internal_ip());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UserRegistration::CopyFrom(const UserRegistration& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.UserRegistration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserRegistration::IsInitialized() const {
  return true;
}

void UserRegistration::InternalSwap(UserRegistration* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.username_, lhs_arena,
      &other->_impl_.username_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.ip_, lhs_arena,
      &other->_impl_.ip_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata UserRegistration::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protocol_2eproto_getter, &descriptor_table_protocol_2eproto_once,
      file_level_metadata_protocol_2eproto[0]);
}

// ===================================================================

class UserInfo::_Internal {
 public:
  using HasBits = decltype(std::declval<UserInfo>()._impl_._has_bits_);
  static void set_has_username(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_ip(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

UserInfo::UserInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:chat.UserInfo)
}
UserInfo::UserInfo(const UserInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UserInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.username_){}
    , decltype(_impl_.status_){}
    , decltype(_impl_.ip_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.username_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.username_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_username()) {
    _this->_impl_.username_.Set(from._internal_username(), 
      _this->GetArenaForAllocation());
  }
  _impl_.status_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.status_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_status()) {
    _this->_impl_.status_.Set(from._internal_status(), 
      _this->GetArenaForAllocation());
  }
  _impl_.ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ip_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_ip()) {
    _this->_impl_.ip_.Set(from._internal_ip(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:chat.UserInfo)
}

inline void UserInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.username_){}
    , decltype(_impl_.status_){}
    , decltype(_impl_.ip_){}
  };
  _impl_.username_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.username_.Set("", GetArenaForAllocation());
  #endif 
  _impl_.status_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.status_.Set("", GetArenaForAllocation());
  #endif 
  _impl_.ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ip_.Set("", GetArenaForAllocation());
  #endif 
}

UserInfo::~UserInfo() {
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UserInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.username_.Destroy();
  _impl_.status_.Destroy();
  _impl_.ip_.Destroy();
}

void UserInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UserInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.UserInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.username_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.status_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.ip_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string username = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_username();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.UserInfo.username"));
        } else
          goto handle_unusual;
        continue;
      // optional string status = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_status();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.UserInfo.status"));
        } else
          goto handle_unusual;
        continue;
      // optional string ip = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_ip();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.UserInfo.ip"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* UserInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.UserInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string username = 1;
  if (_internal_has_username()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_username().data(), static_cast<int>(this->_internal_username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.UserInfo.username");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_username(), target);
  }

  // optional string status = 2;
  if (_internal_has_status()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_status().data(), static_cast<int>(this->_internal_status().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.UserInfo.status");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_status(), target);
  }

  // optional string ip = 3;
  if (_internal_has_ip()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ip().data(), static_cast<int>(this->_internal_ip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.UserInfo.ip");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_ip(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.UserInfo)
  return target;
}

size_t UserInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.UserInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string username = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_username());
    }

    // optional string status = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_status());
    }

    // optional string ip = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_ip());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UserInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UserInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UserInfo::GetClassData() const { return &_class_data_; }


void UserInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UserInfo*>(&to_msg);
  auto& from = static_cast<const UserInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:chat.UserInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_username(from._internal_username());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_status(from._internal_status());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_ip(from._internal_ip());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UserInfo::CopyFrom(const UserInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.UserInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserInfo::IsInitialized() const {
  return true;
}

void UserInfo::InternalSwap(UserInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.username_, lhs_arena,
      &other->_impl_.username_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.status_, lhs_arena,
      &other->_impl_.status_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.ip_, lhs_arena,
      &other->_impl_.ip_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata UserInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protocol_2eproto_getter, &descriptor_table_protocol_2eproto_once,
      file_level_metadata_protocol_2eproto[1]);
}

// ===================================================================

class UserRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<UserRequest>()._impl_._has_bits_);
  static void set_has_user(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

UserRequest::UserRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:chat.UserRequest)
}
UserRequest::UserRequest(const UserRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UserRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.user_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.user_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.user_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_user()) {
    _this->_impl_.user_.Set(from._internal_user(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:chat.UserRequest)
}

inline void UserRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.user_){}
  };
  _impl_.user_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.user_.Set("", GetArenaForAllocation());
  #endif 
}

UserRequest::~UserRequest() {
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UserRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.user_.Destroy();
}

void UserRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UserRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.UserRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.user_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string user = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_user();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.UserRequest.user"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* UserRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.UserRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string user = 1;
  if (_internal_has_user()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_user().data(), static_cast<int>(this->_internal_user().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.UserRequest.user");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_user(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.UserRequest)
  return target;
}

size_t UserRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.UserRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string user = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_user());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UserRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UserRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UserRequest::GetClassData() const { return &_class_data_; }


void UserRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UserRequest*>(&to_msg);
  auto& from = static_cast<const UserRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:chat.UserRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_user()) {
    _this->_internal_set_user(from._internal_user());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UserRequest::CopyFrom(const UserRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.UserRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserRequest::IsInitialized() const {
  return true;
}

void UserRequest::InternalSwap(UserRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.user_, lhs_arena,
      &other->_impl_.user_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata UserRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protocol_2eproto_getter, &descriptor_table_protocol_2eproto_once,
      file_level_metadata_protocol_2eproto[2]);
}

// ===================================================================

class ConnectedUsersResponse::_Internal {
 public:
};

ConnectedUsersResponse::ConnectedUsersResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:chat.ConnectedUsersResponse)
}
ConnectedUsersResponse::ConnectedUsersResponse(const ConnectedUsersResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ConnectedUsersResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.connectedusers_){from._impl_.connectedusers_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);

}

inline void ConnectedUsersResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.connectedusers_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ConnectedUsersResponse::~ConnectedUsersResponse() {

  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ConnectedUsersResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.connectedusers_.~RepeatedPtrField();
}

void ConnectedUsersResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ConnectedUsersResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.ConnectedUsersResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.connectedusers_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ConnectedUsersResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .chat.UserInfo connectedUsers = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_connectedusers(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ConnectedUsersResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.ConnectedUsersResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .chat.UserInfo connectedUsers = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_connectedusers_size()); i < n; i++) {
    const auto& repfield = this->_internal_connectedusers(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.ConnectedUsersResponse)
  return target;
}

size_t ConnectedUsersResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.ConnectedUsersResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .chat.UserInfo connectedUsers = 1;
  total_size += 1UL * this->_internal_connectedusers_size();
  for (const auto& msg : this->_impl_.connectedusers_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ConnectedUsersResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ConnectedUsersResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ConnectedUsersResponse::GetClassData() const { return &_class_data_; }


void ConnectedUsersResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ConnectedUsersResponse*>(&to_msg);
  auto& from = static_cast<const ConnectedUsersResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:chat.ConnectedUsersResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.connectedusers_.MergeFrom(from._impl_.connectedusers_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ConnectedUsersResponse::CopyFrom(const ConnectedUsersResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.ConnectedUsersResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConnectedUsersResponse::IsInitialized() const {
  return true;
}

void ConnectedUsersResponse::InternalSwap(ConnectedUsersResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.connectedusers_.InternalSwap(&other->_impl_.connectedusers_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ConnectedUsersResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protocol_2eproto_getter, &descriptor_table_protocol_2eproto_once,
      file_level_metadata_protocol_2eproto[3]);
}

// ===================================================================

class ChangeStatus::_Internal {
 public:
  using HasBits = decltype(std::declval<ChangeStatus>()._impl_._has_bits_);
  static void set_has_username(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

ChangeStatus::ChangeStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:chat.ChangeStatus)
}
ChangeStatus::ChangeStatus(const ChangeStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ChangeStatus* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.username_){}
    , decltype(_impl_.status_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.username_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.username_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_username()) {
    _this->_impl_.username_.Set(from._internal_username(), 
      _this->GetArenaForAllocation());
  }
  _impl_.status_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.status_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_status()) {
    _this->_impl_.status_.Set(from._internal_status(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:chat.ChangeStatus)
}

inline void ChangeStatus::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.username_){}
    , decltype(_impl_.status_){}
  };
  _impl_.username_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.username_.Set("", GetArenaForAllocation());
  #endif 
  _impl_.status_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.status_.Set("", GetArenaForAllocation());
  #endif 
}

ChangeStatus::~ChangeStatus() {

  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChangeStatus::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.username_.Destroy();
  _impl_.status_.Destroy();
}

void ChangeStatus::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChangeStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.ChangeStatus)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.username_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.status_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChangeStatus::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string username = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_username();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.ChangeStatus.username"));
        } else
          goto handle_unusual;
        continue;
      // optional string status = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_status();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.ChangeStatus.status"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ChangeStatus::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.ChangeStatus)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string username = 1;
  if (_internal_has_username()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_username().data(), static_cast<int>(this->_internal_username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.ChangeStatus.username");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_username(), target);
  }

  // optional string status = 2;
  if (_internal_has_status()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_status().data(), static_cast<int>(this->_internal_status().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.ChangeStatus.status");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.ChangeStatus)
  return target;
}

size_t ChangeStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.ChangeStatus)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string username = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_username());
    }

    // optional string status = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_status());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ChangeStatus::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ChangeStatus::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ChangeStatus::GetClassData() const { return &_class_data_; }


void ChangeStatus::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ChangeStatus*>(&to_msg);
  auto& from = static_cast<const ChangeStatus&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:chat.ChangeStatus)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_username(from._internal_username());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_status(from._internal_status());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ChangeStatus::CopyFrom(const ChangeStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.ChangeStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChangeStatus::IsInitialized() const {
  return true;
}

void ChangeStatus::InternalSwap(ChangeStatus* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.username_, lhs_arena,
      &other->_impl_.username_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.status_, lhs_arena,
      &other->_impl_.status_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ChangeStatus::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protocol_2eproto_getter, &descriptor_table_protocol_2eproto_once,
      file_level_metadata_protocol_2eproto[4]);
}

// ===================================================================

class MessageCommunication::_Internal {
 public:
  using HasBits = decltype(std::declval<MessageCommunication>()._impl_._has_bits_);
  static void set_has_message(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_recipient(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_sender(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

MessageCommunication::MessageCommunication(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:chat.MessageCommunication)
}
MessageCommunication::MessageCommunication(const MessageCommunication& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MessageCommunication* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.message_){}
    , decltype(_impl_.recipient_){}
    , decltype(_impl_.sender_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.message_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_message()) {
    _this->_impl_.message_.Set(from._internal_message(), 
      _this->GetArenaForAllocation());
  }
  _impl_.recipient_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.recipient_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_recipient()) {
    _this->_impl_.recipient_.Set(from._internal_recipient(), 
      _this->GetArenaForAllocation());
  }
  _impl_.sender_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sender_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_sender()) {
    _this->_impl_.sender_.Set(from._internal_sender(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:chat.MessageCommunication)
}

inline void MessageCommunication::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.message_){}
    , decltype(_impl_.recipient_){}
    , decltype(_impl_.sender_){}
  };
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.message_.Set("", GetArenaForAllocation());
  #endif 
  _impl_.recipient_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.recipient_.Set("", GetArenaForAllocation());
  #endif 
  _impl_.sender_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sender_.Set("", GetArenaForAllocation());
  #endif 
}

MessageCommunication::~MessageCommunication() {

  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MessageCommunication::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.message_.Destroy();
  _impl_.recipient_.Destroy();
  _impl_.sender_.Destroy();
}

void MessageCommunication::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MessageCommunication::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.MessageCommunication)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.message_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.recipient_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.sender_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageCommunication::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.MessageCommunication.message"));
        } else
          goto handle_unusual;
        continue;
      // optional string recipient = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_recipient();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.MessageCommunication.recipient"));
        } else
          goto handle_unusual;
        continue;
      // optional string sender = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_sender();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.MessageCommunication.sender"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MessageCommunication::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.MessageCommunication)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string message = 1;
  if (_internal_has_message()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.MessageCommunication.message");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_message(), target);
  }

  // optional string recipient = 2;
  if (_internal_has_recipient()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_recipient().data(), static_cast<int>(this->_internal_recipient().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.MessageCommunication.recipient");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_recipient(), target);
  }

  // optional string sender = 3;
  if (_internal_has_sender()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sender().data(), static_cast<int>(this->_internal_sender().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.MessageCommunication.sender");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_sender(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.MessageCommunication)
  return target;
}

size_t MessageCommunication::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.MessageCommunication)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string message = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_message());
    }

    // optional string recipient = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_recipient());
    }

    // optional string sender = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_sender());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageCommunication::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MessageCommunication::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageCommunication::GetClassData() const { return &_class_data_; }


void MessageCommunication::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MessageCommunication*>(&to_msg);
  auto& from = static_cast<const MessageCommunication&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:chat.MessageCommunication)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_message(from._internal_message());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_recipient(from._internal_recipient());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_sender(from._internal_sender());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageCommunication::CopyFrom(const MessageCommunication& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.MessageCommunication)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageCommunication::IsInitialized() const {
  return true;
}

void MessageCommunication::InternalSwap(MessageCommunication* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.message_, lhs_arena,
      &other->_impl_.message_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.recipient_, lhs_arena,
      &other->_impl_.recipient_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.sender_, lhs_arena,
      &other->_impl_.sender_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageCommunication::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protocol_2eproto_getter, &descriptor_table_protocol_2eproto_once,
      file_level_metadata_protocol_2eproto[5]);
}

// ===================================================================

class ClientPetition::_Internal {
 public:
  using HasBits = decltype(std::declval<ClientPetition>()._impl_._has_bits_);
  static void set_has_option(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::chat::UserRegistration& registration(const ClientPetition* msg);
  static void set_has_registration(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::chat::UserRequest& users(const ClientPetition* msg);
  static void set_has_users(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::chat::ChangeStatus& change(const ClientPetition* msg);
  static void set_has_change(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::chat::MessageCommunication& messagecommunication(const ClientPetition* msg);
  static void set_has_messagecommunication(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::chat::UserRegistration&
ClientPetition::_Internal::registration(const ClientPetition* msg) {
  return *msg->_impl_.registration_;
}
const ::chat::UserRequest&
ClientPetition::_Internal::users(const ClientPetition* msg) {
  return *msg->_impl_.users_;
}
const ::chat::ChangeStatus&
ClientPetition::_Internal::change(const ClientPetition* msg) {
  return *msg->_impl_.change_;
}
const ::chat::MessageCommunication&
ClientPetition::_Internal::messagecommunication(const ClientPetition* msg) {
  return *msg->_impl_.messagecommunication_;
}
ClientPetition::ClientPetition(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:chat.ClientPetition)
}
ClientPetition::ClientPetition(const ClientPetition& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ClientPetition* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.registration_){nullptr}
    , decltype(_impl_.users_){nullptr}
    , decltype(_impl_.change_){nullptr}
    , decltype(_impl_.messagecommunication_){nullptr}
    , decltype(_impl_.option_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_registration()) {
    _this->_impl_.registration_ = new ::chat::UserRegistration(*from._impl_.registration_);
  }
  if (from._internal_has_users()) {
    _this->_impl_.users_ = new ::chat::UserRequest(*from._impl_.users_);
  }
  if (from._internal_has_change()) {
    _this->_impl_.change_ = new ::chat::ChangeStatus(*from._impl_.change_);
  }
  if (from._internal_has_messagecommunication()) {
    _this->_impl_.messagecommunication_ = new ::chat::MessageCommunication(*from._impl_.messagecommunication_);
  }
  _this->_impl_.option_ = from._impl_.option_;
  // @@protoc_insertion_point(copy_constructor:chat.ClientPetition)
}

inline void ClientPetition::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.registration_){nullptr}
    , decltype(_impl_.users_){nullptr}
    , decltype(_impl_.change_){nullptr}
    , decltype(_impl_.messagecommunication_){nullptr}
    , decltype(_impl_.option_){0}
  };
}

ClientPetition::~ClientPetition() {
  // @@protoc_insertion_point(destructor:chat.ClientPetition)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ClientPetition::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.registration_;
  if (this != internal_default_instance()) delete _impl_.users_;
  if (this != internal_default_instance()) delete _impl_.change_;
  if (this != internal_default_instance()) delete _impl_.messagecommunication_;
}

void ClientPetition::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ClientPetition::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.ClientPetition)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(_impl_.registration_ != nullptr);
      _impl_.registration_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.users_ != nullptr);
      _impl_.users_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(_impl_.change_ != nullptr);
      _impl_.change_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(_impl_.messagecommunication_ != nullptr);
      _impl_.messagecommunication_->Clear();
    }
  }
  _impl_.option_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ClientPetition::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 option = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_option(&has_bits);
          _impl_.option_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .chat.UserRegistration registration = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_registration(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .chat.UserRequest users = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_users(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .chat.ChangeStatus change = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_change(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .chat.MessageCommunication messageCommunication = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_messagecommunication(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ClientPetition::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.ClientPetition)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 option = 1;
  if (_internal_has_option()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_option(), target);
  }

  // optional .chat.UserRegistration registration = 2;
  if (_internal_has_registration()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::registration(this),
        _Internal::registration(this).GetCachedSize(), target, stream);
  }

  // optional .chat.UserRequest users = 3;
  if (_internal_has_users()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::users(this),
        _Internal::users(this).GetCachedSize(), target, stream);
  }

  // optional .chat.ChangeStatus change = 4;
  if (_internal_has_change()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::change(this),
        _Internal::change(this).GetCachedSize(), target, stream);
  }

  // optional .chat.MessageCommunication messageCommunication = 5;
  if (_internal_has_messagecommunication()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::messagecommunication(this),
        _Internal::messagecommunication(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.ClientPetition)
  return target;
}

size_t ClientPetition::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.ClientPetition)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional .chat.UserRegistration registration = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.registration_);
    }

    // optional .chat.UserRequest users = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.users_);
    }

    // optional .chat.ChangeStatus change = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.change_);
    }

    // optional .chat.MessageCommunication messageCommunication = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.messagecommunication_);
    }

    // optional int32 option = 1;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_option());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ClientPetition::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ClientPetition::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ClientPetition::GetClassData() const { return &_class_data_; }


void ClientPetition::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ClientPetition*>(&to_msg);
  auto& from = static_cast<const ClientPetition&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:chat.ClientPetition)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_registration()->::chat::UserRegistration::MergeFrom(
          from._internal_registration());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_users()->::chat::UserRequest::MergeFrom(
          from._internal_users());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_change()->::chat::ChangeStatus::MergeFrom(
          from._internal_change());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_mutable_messagecommunication()->::chat::MessageCommunication::MergeFrom(
          from._internal_messagecommunication());
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.option_ = from._impl_.option_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ClientPetition::CopyFrom(const ClientPetition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.ClientPetition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientPetition::IsInitialized() const {
  return true;
}

void ClientPetition::InternalSwap(ClientPetition* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ClientPetition, _impl_.option_)
      + sizeof(ClientPetition::_impl_.option_)
      - PROTOBUF_FIELD_OFFSET(ClientPetition, _impl_.registration_)>(
          reinterpret_cast<char*>(&_impl_.registration_),
          reinterpret_cast<char*>(&other->_impl_.registration_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ClientPetition::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protocol_2eproto_getter, &descriptor_table_protocol_2eproto_once,
      file_level_metadata_protocol_2eproto[6]);
}

// ===================================================================

class ServerResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<ServerResponse>()._impl_._has_bits_);
  static void set_has_option(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_code(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_servermessage(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::chat::ConnectedUsersResponse& connectedusers(const ServerResponse* msg);
  static void set_has_connectedusers(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::chat::MessageCommunication& messagecommunication(const ServerResponse* msg);
  static void set_has_messagecommunication(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::chat::UserInfo& userinforesponse(const ServerResponse* msg);
  static void set_has_userinforesponse(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::chat::ChangeStatus& change(const ServerResponse* msg);
  static void set_has_change(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

const ::chat::ConnectedUsersResponse&
ServerResponse::_Internal::connectedusers(const ServerResponse* msg) {
  return *msg->_impl_.connectedusers_;
}
const ::chat::MessageCommunication&
ServerResponse::_Internal::messagecommunication(const ServerResponse* msg) {
  return *msg->_impl_.messagecommunication_;
}
const ::chat::UserInfo&
ServerResponse::_Internal::userinforesponse(const ServerResponse* msg) {
  return *msg->_impl_.userinforesponse_;
}
const ::chat::ChangeStatus&
ServerResponse::_Internal::change(const ServerResponse* msg) {
  return *msg->_impl_.change_;
}
ServerResponse::ServerResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:chat.ServerResponse)
}
ServerResponse::ServerResponse(const ServerResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ServerResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.servermessage_){}
    , decltype(_impl_.connectedusers_){nullptr}
    , decltype(_impl_.messagecommunication_){nullptr}
    , decltype(_impl_.userinforesponse_){nullptr}
    , decltype(_impl_.change_){nullptr}
    , decltype(_impl_.option_){}
    , decltype(_impl_.code_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.servermessage_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.servermessage_.Set("", GetArenaForAllocation());
  #endif 
  if (from._internal_has_servermessage()) {
    _this->_impl_.servermessage_.Set(from._internal_servermessage(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_connectedusers()) {
    _this->_impl_.connectedusers_ = new ::chat::ConnectedUsersResponse(*from._impl_.connectedusers_);
  }
  if (from._internal_has_messagecommunication()) {
    _this->_impl_.messagecommunication_ = new ::chat::MessageCommunication(*from._impl_.messagecommunication_);
  }
  if (from._internal_has_userinforesponse()) {
    _this->_impl_.userinforesponse_ = new ::chat::UserInfo(*from._impl_.userinforesponse_);
  }
  if (from._internal_has_change()) {
    _this->_impl_.change_ = new ::chat::ChangeStatus(*from._impl_.change_);
  }
  ::memcpy(&_impl_.option_, &from._impl_.option_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.code_) -
    reinterpret_cast<char*>(&_impl_.option_)) + sizeof(_impl_.code_));
  // @@protoc_insertion_point(copy_constructor:chat.ServerResponse)
}

inline void ServerResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.servermessage_){}
    , decltype(_impl_.connectedusers_){nullptr}
    , decltype(_impl_.messagecommunication_){nullptr}
    , decltype(_impl_.userinforesponse_){nullptr}
    , decltype(_impl_.change_){nullptr}
    , decltype(_impl_.option_){0}
    , decltype(_impl_.code_){0}
  };
  _impl_.servermessage_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.servermessage_.Set("", GetArenaForAllocation());
  #endif 
}

ServerResponse::~ServerResponse() {
  
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ServerResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.servermessage_.Destroy();
  if (this != internal_default_instance()) delete _impl_.connectedusers_;
  if (this != internal_default_instance()) delete _impl_.messagecommunication_;
  if (this != internal_default_instance()) delete _impl_.userinforesponse_;
  if (this != internal_default_instance()) delete _impl_.change_;
}

void ServerResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ServerResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.ServerResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.servermessage_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.connectedusers_ != nullptr);
      _impl_.connectedusers_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(_impl_.messagecommunication_ != nullptr);
      _impl_.messagecommunication_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(_impl_.userinforesponse_ != nullptr);
      _impl_.userinforesponse_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(_impl_.change_ != nullptr);
      _impl_.change_->Clear();
    }
  }
  if (cached_has_bits & 0x00000060u) {
    ::memset(&_impl_.option_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.code_) -
        reinterpret_cast<char*>(&_impl_.option_)) + sizeof(_impl_.code_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ServerResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 option = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_option(&has_bits);
          _impl_.option_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 code = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_code(&has_bits);
          _impl_.code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string serverMessage = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_servermessage();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "chat.ServerResponse.serverMessage"));
        } else
          goto handle_unusual;
        continue;
      // optional .chat.ConnectedUsersResponse connectedUsers = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_connectedusers(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .chat.MessageCommunication messageCommunication = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_messagecommunication(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .chat.UserInfo userInfoResponse = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_userinforesponse(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .chat.ChangeStatus change = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_change(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ServerResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.ServerResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 option = 1;
  if (_internal_has_option()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_option(), target);
  }

  // optional int32 code = 2;
  if (_internal_has_code()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_code(), target);
  }

  // optional string serverMessage = 3;
  if (_internal_has_servermessage()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_servermessage().data(), static_cast<int>(this->_internal_servermessage().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "chat.ServerResponse.serverMessage");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_servermessage(), target);
  }

  // optional .chat.ConnectedUsersResponse connectedUsers = 4;
  if (_internal_has_connectedusers()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::connectedusers(this),
        _Internal::connectedusers(this).GetCachedSize(), target, stream);
  }

  // optional .chat.MessageCommunication messageCommunication = 5;
  if (_internal_has_messagecommunication()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::messagecommunication(this),
        _Internal::messagecommunication(this).GetCachedSize(), target, stream);
  }

  // optional .chat.UserInfo userInfoResponse = 6;
  if (_internal_has_userinforesponse()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, _Internal::userinforesponse(this),
        _Internal::userinforesponse(this).GetCachedSize(), target, stream);
  }

  // optional .chat.ChangeStatus change = 7;
  if (_internal_has_change()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(7, _Internal::change(this),
        _Internal::change(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.ServerResponse)
  return target;
}

size_t ServerResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.ServerResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional string serverMessage = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_servermessage());
    }

    // optional .chat.ConnectedUsersResponse connectedUsers = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.connectedusers_);
    }

    // optional .chat.MessageCommunication messageCommunication = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.messagecommunication_);
    }

    // optional .chat.UserInfo userInfoResponse = 6;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.userinforesponse_);
    }

    // optional .chat.ChangeStatus change = 7;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.change_);
    }

    // optional int32 option = 1;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_option());
    }

    // optional int32 code = 2;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_code());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ServerResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ServerResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ServerResponse::GetClassData() const { return &_class_data_; }


void ServerResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ServerResponse*>(&to_msg);
  auto& from = static_cast<const ServerResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:chat.ServerResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_servermessage(from._internal_servermessage());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_connectedusers()->::chat::ConnectedUsersResponse::MergeFrom(
          from._internal_connectedusers());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_messagecommunication()->::chat::MessageCommunication::MergeFrom(
          from._internal_messagecommunication());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_mutable_userinforesponse()->::chat::UserInfo::MergeFrom(
          from._internal_userinforesponse());
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_internal_mutable_change()->::chat::ChangeStatus::MergeFrom(
          from._internal_change());
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.option_ = from._impl_.option_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.code_ = from._impl_.code_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ServerResponse::CopyFrom(const ServerResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.ServerResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerResponse::IsInitialized() const {
  return true;
}

void ServerResponse::InternalSwap(ServerResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.servermessage_, lhs_arena,
      &other->_impl_.servermessage_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ServerResponse, _impl_.code_)
      + sizeof(ServerResponse::_impl_.code_)
      - PROTOBUF_FIELD_OFFSET(ServerResponse, _impl_.connectedusers_)>(
          reinterpret_cast<char*>(&_impl_.connectedusers_),
          reinterpret_cast<char*>(&other->_impl_.connectedusers_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ServerResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protocol_2eproto_getter, &descriptor_table_protocol_2eproto_once,
      file_level_metadata_protocol_2eproto[7]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace chat
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::chat::UserRegistration*
Arena::CreateMaybeMessage< ::chat::UserRegistration >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chat::UserRegistration >(arena);
}
template<> PROTOBUF_NOINLINE ::chat::UserInfo*
Arena::CreateMaybeMessage< ::chat::UserInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chat::UserInfo >(arena);
}
template<> PROTOBUF_NOINLINE ::chat::UserRequest*
Arena::CreateMaybeMessage< ::chat::UserRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chat::UserRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::chat::ConnectedUsersResponse*
Arena::CreateMaybeMessage< ::chat::ConnectedUsersResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chat::ConnectedUsersResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::chat::ChangeStatus*
Arena::CreateMaybeMessage< ::chat::ChangeStatus >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chat::ChangeStatus >(arena);
}
template<> PROTOBUF_NOINLINE ::chat::MessageCommunication*
Arena::CreateMaybeMessage< ::chat::MessageCommunication >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chat::MessageCommunication >(arena);
}
template<> PROTOBUF_NOINLINE ::chat::ClientPetition*
Arena::CreateMaybeMessage< ::chat::ClientPetition >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chat::ClientPetition >(arena);
}
template<> PROTOBUF_NOINLINE ::chat::ServerResponse*
Arena::CreateMaybeMessage< ::chat::ServerResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::chat::ServerResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
