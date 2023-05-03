// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/versioned_name.proto

#include "gz/msgs/versioned_name.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.VersionedName", VersionedName)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fversion_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fversion_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Version;
}  // namespace protobuf_gz_2fmsgs_2fversion_2eproto
namespace gz {
namespace msgs {
class VersionedNameDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VersionedName>
      _instance;
} _VersionedName_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fversioned_5fname_2eproto {
static void InitDefaultsVersionedName() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_VersionedName_default_instance_;
    new (ptr) ::gz::msgs::VersionedName();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::VersionedName::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_VersionedName =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsVersionedName}, {
      &protobuf_gz_2fmsgs_2fversion_2eproto::scc_info_Version.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_VersionedName.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::VersionedName, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::VersionedName, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::VersionedName, name_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::VersionedName)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_VersionedName_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/versioned_name.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034gz/msgs/versioned_name.proto\022\007gz.msgs\032"
      "\025gz/msgs/version.proto\"@\n\rVersionedName\022"
      "!\n\007version\030\001 \001(\0132\020.gz.msgs.Version\022\014\n\004na"
      "me\030\002 \001(\tB\034\n\013com.gz.msgsB\rVersionedNameb\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 166);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/versioned_name.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fversion_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fversioned_5fname_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void VersionedName::InitAsDefaultInstance() {
  ::gz::msgs::_VersionedName_default_instance_._instance.get_mutable()->version_ = const_cast< ::gz::msgs::Version*>(
      ::gz::msgs::Version::internal_default_instance());
}
void VersionedName::clear_version() {
  if (GetArenaNoVirtual() == NULL && version_ != NULL) {
    delete version_;
  }
  version_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VersionedName::kVersionFieldNumber;
const int VersionedName::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VersionedName::VersionedName()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fversioned_5fname_2eproto::scc_info_VersionedName.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.VersionedName)
}
VersionedName::VersionedName(const VersionedName& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_version()) {
    version_ = new ::gz::msgs::Version(*from.version_);
  } else {
    version_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.VersionedName)
}

void VersionedName::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = NULL;
}

VersionedName::~VersionedName() {
  // @@protoc_insertion_point(destructor:gz.msgs.VersionedName)
  SharedDtor();
}

void VersionedName::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete version_;
}

void VersionedName::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* VersionedName::descriptor() {
  ::protobuf_gz_2fmsgs_2fversioned_5fname_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fversioned_5fname_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VersionedName& VersionedName::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fversioned_5fname_2eproto::scc_info_VersionedName.base);
  return *internal_default_instance();
}


void VersionedName::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.VersionedName)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && version_ != NULL) {
    delete version_;
  }
  version_ = NULL;
  _internal_metadata_.Clear();
}

bool VersionedName::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.VersionedName)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.Version version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_version()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.VersionedName.name"));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.VersionedName)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.VersionedName)
  return false;
#undef DO_
}

void VersionedName::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.VersionedName)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Version version = 1;
  if (this->has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_version(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.VersionedName.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.VersionedName)
}

::google::protobuf::uint8* VersionedName::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.VersionedName)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Version version = 1;
  if (this->has_version()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_version(), deterministic, target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.VersionedName.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.VersionedName)
  return target;
}

size_t VersionedName::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.VersionedName)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // .gz.msgs.Version version = 1;
  if (this->has_version()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *version_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VersionedName::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.VersionedName)
  GOOGLE_DCHECK_NE(&from, this);
  const VersionedName* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VersionedName>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.VersionedName)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.VersionedName)
    MergeFrom(*source);
  }
}

void VersionedName::MergeFrom(const VersionedName& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.VersionedName)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_version()) {
    mutable_version()->::gz::msgs::Version::MergeFrom(from.version());
  }
}

void VersionedName::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.VersionedName)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VersionedName::CopyFrom(const VersionedName& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.VersionedName)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VersionedName::IsInitialized() const {
  return true;
}

void VersionedName::Swap(VersionedName* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VersionedName::InternalSwap(VersionedName* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(version_, other->version_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata VersionedName::GetMetadata() const {
  protobuf_gz_2fmsgs_2fversioned_5fname_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fversioned_5fname_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::VersionedName* Arena::CreateMaybeMessage< ::gz::msgs::VersionedName >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::VersionedName >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
