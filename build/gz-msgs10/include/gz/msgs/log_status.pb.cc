// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/log_status.proto

#include "gz/msgs/log_status.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
#include "gz/msgs/Factory.hh"
GZ_REGISTER_STATIC_MSG("gz_msgs.LogStatus", LogStatus)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2flog_5fstatus_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2flog_5fstatus_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_LogStatus_LogFile;
}  // namespace protobuf_gz_2fmsgs_2flog_5fstatus_2eproto
namespace protobuf_gz_2fmsgs_2ftime_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2ftime_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Time;
}  // namespace protobuf_gz_2fmsgs_2ftime_2eproto
namespace gz {
namespace msgs {
class LogStatus_LogFileDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LogStatus_LogFile>
      _instance;
} _LogStatus_LogFile_default_instance_;
class LogStatusDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LogStatus>
      _instance;
} _LogStatus_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2flog_5fstatus_2eproto {
static void InitDefaultsLogStatus_LogFile() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_LogStatus_LogFile_default_instance_;
    new (ptr) ::gz::msgs::LogStatus_LogFile();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::LogStatus_LogFile::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<0> scc_info_LogStatus_LogFile =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLogStatus_LogFile}, {}};

static void InitDefaultsLogStatus() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_LogStatus_default_instance_;
    new (ptr) ::gz::msgs::LogStatus();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::LogStatus::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<3> scc_info_LogStatus =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsLogStatus}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2ftime_2eproto::scc_info_Time.base,
      &protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::scc_info_LogStatus_LogFile.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LogStatus_LogFile.base);
  ::google::protobuf::internal::InitSCC(&scc_info_LogStatus.base);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus_LogFile, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus_LogFile, uri_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus_LogFile, base_path_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus_LogFile, full_path_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus_LogFile, size_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus_LogFile, size_units_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus_LogFile, record_resources_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus, sim_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::LogStatus, log_file_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::LogStatus_LogFile)},
  { 11, -1, sizeof(::gz::msgs::LogStatus)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_LogStatus_LogFile_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_LogStatus_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/log_status.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\030gz/msgs/log_status.proto\022\007gz.msgs\032\022gz/"
      "msgs/time.proto\032\024gz/msgs/header.proto\"\323\002"
      "\n\tLogStatus\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.He"
      "ader\022\037\n\010sim_time\030\002 \001(\0132\r.gz.msgs.Time\022,\n"
      "\010log_file\030\003 \001(\0132\032.gz.msgs.LogStatus.LogF"
      "ile\032\325\001\n\007LogFile\022\013\n\003uri\030\001 \001(\t\022\021\n\tbase_pat"
      "h\030\002 \001(\t\022\021\n\tfull_path\030\003 \001(\t\022\014\n\004size\030\004 \001(\002"
      "\0224\n\nsize_units\030\005 \001(\0162 .gz.msgs.LogStatus"
      ".LogFile.Units\022\030\n\020record_resources\030\006 \001(\010"
      "\"9\n\005Units\022\t\n\005BYTES\020\000\022\013\n\007K_BYTES\020\001\022\013\n\007M_B"
      "YTES\020\002\022\013\n\007G_BYTES\020\003B\036\n\013com.gz.msgsB\017LogS"
      "tatusProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 459);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/log_status.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2ftime_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_gz_2fmsgs_2flog_5fstatus_2eproto
namespace gz {
namespace msgs {
const ::google::protobuf::EnumDescriptor* LogStatus_LogFile_Units_descriptor() {
  protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::file_level_enum_descriptors[0];
}
bool LogStatus_LogFile_Units_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const LogStatus_LogFile_Units LogStatus_LogFile::BYTES;
const LogStatus_LogFile_Units LogStatus_LogFile::K_BYTES;
const LogStatus_LogFile_Units LogStatus_LogFile::M_BYTES;
const LogStatus_LogFile_Units LogStatus_LogFile::G_BYTES;
const LogStatus_LogFile_Units LogStatus_LogFile::Units_MIN;
const LogStatus_LogFile_Units LogStatus_LogFile::Units_MAX;
const int LogStatus_LogFile::Units_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void LogStatus_LogFile::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LogStatus_LogFile::kUriFieldNumber;
const int LogStatus_LogFile::kBasePathFieldNumber;
const int LogStatus_LogFile::kFullPathFieldNumber;
const int LogStatus_LogFile::kSizeFieldNumber;
const int LogStatus_LogFile::kSizeUnitsFieldNumber;
const int LogStatus_LogFile::kRecordResourcesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LogStatus_LogFile::LogStatus_LogFile()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::scc_info_LogStatus_LogFile.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.LogStatus.LogFile)
}
LogStatus_LogFile::LogStatus_LogFile(const LogStatus_LogFile& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  uri_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uri().size() > 0) {
    uri_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uri_);
  }
  base_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.base_path().size() > 0) {
    base_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.base_path_);
  }
  full_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.full_path().size() > 0) {
    full_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.full_path_);
  }
  ::memcpy(&size_, &from.size_,
    static_cast<size_t>(reinterpret_cast<char*>(&record_resources_) -
    reinterpret_cast<char*>(&size_)) + sizeof(record_resources_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.LogStatus.LogFile)
}

void LogStatus_LogFile::SharedCtor() {
  uri_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  base_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  full_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&record_resources_) -
      reinterpret_cast<char*>(&size_)) + sizeof(record_resources_));
}

LogStatus_LogFile::~LogStatus_LogFile() {
  // @@protoc_insertion_point(destructor:gz.msgs.LogStatus.LogFile)
  SharedDtor();
}

void LogStatus_LogFile::SharedDtor() {
  uri_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  base_path_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  full_path_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LogStatus_LogFile::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LogStatus_LogFile::descriptor() {
  ::protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LogStatus_LogFile& LogStatus_LogFile::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::scc_info_LogStatus_LogFile.base);
  return *internal_default_instance();
}


void LogStatus_LogFile::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.LogStatus.LogFile)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  base_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  full_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&record_resources_) -
      reinterpret_cast<char*>(&size_)) + sizeof(record_resources_));
  _internal_metadata_.Clear();
}

bool LogStatus_LogFile::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.LogStatus.LogFile)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string uri = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uri()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->uri().data(), static_cast<int>(this->uri().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.LogStatus.LogFile.uri"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string base_path = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_base_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->base_path().data(), static_cast<int>(this->base_path().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.LogStatus.LogFile.base_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string full_path = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_full_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->full_path().data(), static_cast<int>(this->full_path().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.LogStatus.LogFile.full_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float size = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.LogStatus.LogFile.Units size_units = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_size_units(static_cast< ::gz::msgs::LogStatus_LogFile_Units >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool record_resources = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &record_resources_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gz.msgs.LogStatus.LogFile)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.LogStatus.LogFile)
  return false;
#undef DO_
}

void LogStatus_LogFile::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.LogStatus.LogFile)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string uri = 1;
  if (this->uri().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uri().data(), static_cast<int>(this->uri().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.LogStatus.LogFile.uri");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->uri(), output);
  }

  // string base_path = 2;
  if (this->base_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->base_path().data(), static_cast<int>(this->base_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.LogStatus.LogFile.base_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->base_path(), output);
  }

  // string full_path = 3;
  if (this->full_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->full_path().data(), static_cast<int>(this->full_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.LogStatus.LogFile.full_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->full_path(), output);
  }

  // float size = 4;
  if (this->size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->size(), output);
  }

  // .gz.msgs.LogStatus.LogFile.Units size_units = 5;
  if (this->size_units() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->size_units(), output);
  }

  // bool record_resources = 6;
  if (this->record_resources() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->record_resources(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.LogStatus.LogFile)
}

::google::protobuf::uint8* LogStatus_LogFile::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.LogStatus.LogFile)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string uri = 1;
  if (this->uri().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uri().data(), static_cast<int>(this->uri().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.LogStatus.LogFile.uri");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->uri(), target);
  }

  // string base_path = 2;
  if (this->base_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->base_path().data(), static_cast<int>(this->base_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.LogStatus.LogFile.base_path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->base_path(), target);
  }

  // string full_path = 3;
  if (this->full_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->full_path().data(), static_cast<int>(this->full_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.LogStatus.LogFile.full_path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->full_path(), target);
  }

  // float size = 4;
  if (this->size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->size(), target);
  }

  // .gz.msgs.LogStatus.LogFile.Units size_units = 5;
  if (this->size_units() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->size_units(), target);
  }

  // bool record_resources = 6;
  if (this->record_resources() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->record_resources(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.LogStatus.LogFile)
  return target;
}

size_t LogStatus_LogFile::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.LogStatus.LogFile)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string uri = 1;
  if (this->uri().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uri());
  }

  // string base_path = 2;
  if (this->base_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->base_path());
  }

  // string full_path = 3;
  if (this->full_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->full_path());
  }

  // float size = 4;
  if (this->size() != 0) {
    total_size += 1 + 4;
  }

  // .gz.msgs.LogStatus.LogFile.Units size_units = 5;
  if (this->size_units() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->size_units());
  }

  // bool record_resources = 6;
  if (this->record_resources() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogStatus_LogFile::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.LogStatus.LogFile)
  GOOGLE_DCHECK_NE(&from, this);
  const LogStatus_LogFile* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LogStatus_LogFile>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.LogStatus.LogFile)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.LogStatus.LogFile)
    MergeFrom(*source);
  }
}

void LogStatus_LogFile::MergeFrom(const LogStatus_LogFile& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.LogStatus.LogFile)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.uri().size() > 0) {

    uri_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uri_);
  }
  if (from.base_path().size() > 0) {

    base_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.base_path_);
  }
  if (from.full_path().size() > 0) {

    full_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.full_path_);
  }
  if (from.size() != 0) {
    set_size(from.size());
  }
  if (from.size_units() != 0) {
    set_size_units(from.size_units());
  }
  if (from.record_resources() != 0) {
    set_record_resources(from.record_resources());
  }
}

void LogStatus_LogFile::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.LogStatus.LogFile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogStatus_LogFile::CopyFrom(const LogStatus_LogFile& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.LogStatus.LogFile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogStatus_LogFile::IsInitialized() const {
  return true;
}

void LogStatus_LogFile::Swap(LogStatus_LogFile* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LogStatus_LogFile::InternalSwap(LogStatus_LogFile* other) {
  using std::swap;
  uri_.Swap(&other->uri_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  base_path_.Swap(&other->base_path_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  full_path_.Swap(&other->full_path_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(size_, other->size_);
  swap(size_units_, other->size_units_);
  swap(record_resources_, other->record_resources_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LogStatus_LogFile::GetMetadata() const {
  protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void LogStatus::InitAsDefaultInstance() {
  ::gz::msgs::_LogStatus_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_LogStatus_default_instance_._instance.get_mutable()->sim_time_ = const_cast< ::gz::msgs::Time*>(
      ::gz::msgs::Time::internal_default_instance());
  ::gz::msgs::_LogStatus_default_instance_._instance.get_mutable()->log_file_ = const_cast< ::gz::msgs::LogStatus_LogFile*>(
      ::gz::msgs::LogStatus_LogFile::internal_default_instance());
}
void LogStatus::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void LogStatus::clear_sim_time() {
  if (GetArenaNoVirtual() == NULL && sim_time_ != NULL) {
    delete sim_time_;
  }
  sim_time_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LogStatus::kHeaderFieldNumber;
const int LogStatus::kSimTimeFieldNumber;
const int LogStatus::kLogFileFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LogStatus::LogStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::scc_info_LogStatus.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.LogStatus)
}
LogStatus::LogStatus(const LogStatus& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_sim_time()) {
    sim_time_ = new ::gz::msgs::Time(*from.sim_time_);
  } else {
    sim_time_ = NULL;
  }
  if (from.has_log_file()) {
    log_file_ = new ::gz::msgs::LogStatus_LogFile(*from.log_file_);
  } else {
    log_file_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.LogStatus)
}

void LogStatus::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&log_file_) -
      reinterpret_cast<char*>(&header_)) + sizeof(log_file_));
}

LogStatus::~LogStatus() {
  // @@protoc_insertion_point(destructor:gz.msgs.LogStatus)
  SharedDtor();
}

void LogStatus::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete sim_time_;
  if (this != internal_default_instance()) delete log_file_;
}

void LogStatus::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LogStatus::descriptor() {
  ::protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LogStatus& LogStatus::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::scc_info_LogStatus.base);
  return *internal_default_instance();
}


void LogStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.LogStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && sim_time_ != NULL) {
    delete sim_time_;
  }
  sim_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && log_file_ != NULL) {
    delete log_file_;
  }
  log_file_ = NULL;
  _internal_metadata_.Clear();
}

bool LogStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.LogStatus)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Time sim_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_sim_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.LogStatus.LogFile log_file = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_log_file()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gz.msgs.LogStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.LogStatus)
  return false;
#undef DO_
}

void LogStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.LogStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.Time sim_time = 2;
  if (this->has_sim_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_sim_time(), output);
  }

  // .gz.msgs.LogStatus.LogFile log_file = 3;
  if (this->has_log_file()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_log_file(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.LogStatus)
}

::google::protobuf::uint8* LogStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.LogStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.Time sim_time = 2;
  if (this->has_sim_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_sim_time(), deterministic, target);
  }

  // .gz.msgs.LogStatus.LogFile log_file = 3;
  if (this->has_log_file()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_log_file(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.LogStatus)
  return target;
}

size_t LogStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.LogStatus)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.Time sim_time = 2;
  if (this->has_sim_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *sim_time_);
  }

  // .gz.msgs.LogStatus.LogFile log_file = 3;
  if (this->has_log_file()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *log_file_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.LogStatus)
  GOOGLE_DCHECK_NE(&from, this);
  const LogStatus* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LogStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.LogStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.LogStatus)
    MergeFrom(*source);
  }
}

void LogStatus::MergeFrom(const LogStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.LogStatus)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_sim_time()) {
    mutable_sim_time()->::gz::msgs::Time::MergeFrom(from.sim_time());
  }
  if (from.has_log_file()) {
    mutable_log_file()->::gz::msgs::LogStatus_LogFile::MergeFrom(from.log_file());
  }
}

void LogStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.LogStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogStatus::CopyFrom(const LogStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.LogStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogStatus::IsInitialized() const {
  return true;
}

void LogStatus::Swap(LogStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LogStatus::InternalSwap(LogStatus* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(sim_time_, other->sim_time_);
  swap(log_file_, other->log_file_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LogStatus::GetMetadata() const {
  protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2flog_5fstatus_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::LogStatus_LogFile* Arena::CreateMaybeMessage< ::gz::msgs::LogStatus_LogFile >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::LogStatus_LogFile >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::LogStatus* Arena::CreateMaybeMessage< ::gz::msgs::LogStatus >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::LogStatus >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
