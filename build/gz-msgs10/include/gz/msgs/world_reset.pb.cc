// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/world_reset.proto

#include "gz/msgs/world_reset.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.WorldReset", WorldReset)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class WorldResetDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<WorldReset>
      _instance;
} _WorldReset_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fworld_5freset_2eproto {
static void InitDefaultsWorldReset() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_WorldReset_default_instance_;
    new (ptr) ::gz::msgs::WorldReset();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::WorldReset::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_WorldReset =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsWorldReset}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_WorldReset.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldReset, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldReset, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldReset, all_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldReset, time_only_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldReset, model_only_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::WorldReset)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_WorldReset_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/world_reset.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\031gz/msgs/world_reset.proto\022\007gz.msgs\032\024gz"
      "/msgs/header.proto\"a\n\nWorldReset\022\037\n\006head"
      "er\030\001 \001(\0132\017.gz.msgs.Header\022\013\n\003all\030\002 \001(\010\022\021"
      "\n\ttime_only\030\003 \001(\010\022\022\n\nmodel_only\030\004 \001(\010B\037\n"
      "\013com.gz.msgsB\020WorldResetProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 198);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/world_reset.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fworld_5freset_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void WorldReset::InitAsDefaultInstance() {
  ::gz::msgs::_WorldReset_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void WorldReset::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WorldReset::kHeaderFieldNumber;
const int WorldReset::kAllFieldNumber;
const int WorldReset::kTimeOnlyFieldNumber;
const int WorldReset::kModelOnlyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WorldReset::WorldReset()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fworld_5freset_2eproto::scc_info_WorldReset.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.WorldReset)
}
WorldReset::WorldReset(const WorldReset& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&all_, &from.all_,
    static_cast<size_t>(reinterpret_cast<char*>(&model_only_) -
    reinterpret_cast<char*>(&all_)) + sizeof(model_only_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.WorldReset)
}

void WorldReset::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&model_only_) -
      reinterpret_cast<char*>(&header_)) + sizeof(model_only_));
}

WorldReset::~WorldReset() {
  // @@protoc_insertion_point(destructor:gz.msgs.WorldReset)
  SharedDtor();
}

void WorldReset::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void WorldReset::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* WorldReset::descriptor() {
  ::protobuf_gz_2fmsgs_2fworld_5freset_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fworld_5freset_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const WorldReset& WorldReset::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fworld_5freset_2eproto::scc_info_WorldReset.base);
  return *internal_default_instance();
}


void WorldReset::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.WorldReset)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&all_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&model_only_) -
      reinterpret_cast<char*>(&all_)) + sizeof(model_only_));
  _internal_metadata_.Clear();
}

bool WorldReset::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.WorldReset)
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

      // bool all = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &all_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool time_only = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &time_only_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool model_only = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &model_only_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.WorldReset)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.WorldReset)
  return false;
#undef DO_
}

void WorldReset::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.WorldReset)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // bool all = 2;
  if (this->all() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->all(), output);
  }

  // bool time_only = 3;
  if (this->time_only() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->time_only(), output);
  }

  // bool model_only = 4;
  if (this->model_only() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->model_only(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.WorldReset)
}

::google::protobuf::uint8* WorldReset::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.WorldReset)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // bool all = 2;
  if (this->all() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->all(), target);
  }

  // bool time_only = 3;
  if (this->time_only() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->time_only(), target);
  }

  // bool model_only = 4;
  if (this->model_only() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->model_only(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.WorldReset)
  return target;
}

size_t WorldReset::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.WorldReset)
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

  // bool all = 2;
  if (this->all() != 0) {
    total_size += 1 + 1;
  }

  // bool time_only = 3;
  if (this->time_only() != 0) {
    total_size += 1 + 1;
  }

  // bool model_only = 4;
  if (this->model_only() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WorldReset::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.WorldReset)
  GOOGLE_DCHECK_NE(&from, this);
  const WorldReset* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const WorldReset>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.WorldReset)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.WorldReset)
    MergeFrom(*source);
  }
}

void WorldReset::MergeFrom(const WorldReset& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.WorldReset)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.all() != 0) {
    set_all(from.all());
  }
  if (from.time_only() != 0) {
    set_time_only(from.time_only());
  }
  if (from.model_only() != 0) {
    set_model_only(from.model_only());
  }
}

void WorldReset::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.WorldReset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorldReset::CopyFrom(const WorldReset& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.WorldReset)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldReset::IsInitialized() const {
  return true;
}

void WorldReset::Swap(WorldReset* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WorldReset::InternalSwap(WorldReset* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(all_, other->all_);
  swap(time_only_, other->time_only_);
  swap(model_only_, other->model_only_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata WorldReset::GetMetadata() const {
  protobuf_gz_2fmsgs_2fworld_5freset_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fworld_5freset_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::WorldReset* Arena::CreateMaybeMessage< ::gz::msgs::WorldReset >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::WorldReset >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
