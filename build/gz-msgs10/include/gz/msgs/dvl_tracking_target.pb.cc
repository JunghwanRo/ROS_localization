// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/dvl_tracking_target.proto

#include "gz/msgs/dvl_tracking_target.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.DVLTrackingTarget", DVLTrackingTarget)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_DVLKinematicEstimate;
}  // namespace protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto
namespace protobuf_gz_2fmsgs_2fdvl_5frange_5festimate_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fdvl_5frange_5festimate_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_DVLRangeEstimate;
}  // namespace protobuf_gz_2fmsgs_2fdvl_5frange_5festimate_2eproto
namespace gz {
namespace msgs {
class DVLTrackingTargetDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DVLTrackingTarget>
      _instance;
} _DVLTrackingTarget_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto {
static void InitDefaultsDVLTrackingTarget() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_DVLTrackingTarget_default_instance_;
    new (ptr) ::gz::msgs::DVLTrackingTarget();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::DVLTrackingTarget::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_DVLTrackingTarget =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsDVLTrackingTarget}, {
      &protobuf_gz_2fmsgs_2fdvl_5frange_5festimate_2eproto::scc_info_DVLRangeEstimate.base,
      &protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto::scc_info_DVLKinematicEstimate.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_DVLTrackingTarget.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLTrackingTarget, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLTrackingTarget, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLTrackingTarget, range_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::DVLTrackingTarget, position_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::DVLTrackingTarget)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_DVLTrackingTarget_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/dvl_tracking_target.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n!gz/msgs/dvl_tracking_target.proto\022\007gz."
      "msgs\032$gz/msgs/dvl_kinematic_estimate.pro"
      "to\032 gz/msgs/dvl_range_estimate.proto\"\377\001\n"
      "\021DVLTrackingTarget\0223\n\004type\030\001 \001(\0162%.gz.ms"
      "gs.DVLTrackingTarget.TargetType\022(\n\005range"
      "\030\002 \001(\0132\031.gz.msgs.DVLRangeEstimate\022/\n\010pos"
      "ition\030\003 \001(\0132\035.gz.msgs.DVLKinematicEstima"
      "te\"Z\n\nTargetType\022\032\n\026DVL_TARGET_UNSPECIFI"
      "ED\020\000\022\025\n\021DVL_TARGET_BOTTOM\020\001\022\031\n\025DVL_TARGE"
      "T_WATER_MASS\020\002B&\n\013com.gz.msgsB\027DVLTracki"
      "ngTargetProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 422);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/dvl_tracking_target.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fdvl_5fkinematic_5festimate_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fdvl_5frange_5festimate_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto
namespace gz {
namespace msgs {
const ::google::protobuf::EnumDescriptor* DVLTrackingTarget_TargetType_descriptor() {
  protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::file_level_enum_descriptors[0];
}
bool DVLTrackingTarget_TargetType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const DVLTrackingTarget_TargetType DVLTrackingTarget::DVL_TARGET_UNSPECIFIED;
const DVLTrackingTarget_TargetType DVLTrackingTarget::DVL_TARGET_BOTTOM;
const DVLTrackingTarget_TargetType DVLTrackingTarget::DVL_TARGET_WATER_MASS;
const DVLTrackingTarget_TargetType DVLTrackingTarget::TargetType_MIN;
const DVLTrackingTarget_TargetType DVLTrackingTarget::TargetType_MAX;
const int DVLTrackingTarget::TargetType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void DVLTrackingTarget::InitAsDefaultInstance() {
  ::gz::msgs::_DVLTrackingTarget_default_instance_._instance.get_mutable()->range_ = const_cast< ::gz::msgs::DVLRangeEstimate*>(
      ::gz::msgs::DVLRangeEstimate::internal_default_instance());
  ::gz::msgs::_DVLTrackingTarget_default_instance_._instance.get_mutable()->position_ = const_cast< ::gz::msgs::DVLKinematicEstimate*>(
      ::gz::msgs::DVLKinematicEstimate::internal_default_instance());
}
void DVLTrackingTarget::clear_range() {
  if (GetArenaNoVirtual() == NULL && range_ != NULL) {
    delete range_;
  }
  range_ = NULL;
}
void DVLTrackingTarget::clear_position() {
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DVLTrackingTarget::kTypeFieldNumber;
const int DVLTrackingTarget::kRangeFieldNumber;
const int DVLTrackingTarget::kPositionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DVLTrackingTarget::DVLTrackingTarget()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::scc_info_DVLTrackingTarget.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.DVLTrackingTarget)
}
DVLTrackingTarget::DVLTrackingTarget(const DVLTrackingTarget& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_range()) {
    range_ = new ::gz::msgs::DVLRangeEstimate(*from.range_);
  } else {
    range_ = NULL;
  }
  if (from.has_position()) {
    position_ = new ::gz::msgs::DVLKinematicEstimate(*from.position_);
  } else {
    position_ = NULL;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:gz.msgs.DVLTrackingTarget)
}

void DVLTrackingTarget::SharedCtor() {
  ::memset(&range_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&range_)) + sizeof(type_));
}

DVLTrackingTarget::~DVLTrackingTarget() {
  // @@protoc_insertion_point(destructor:gz.msgs.DVLTrackingTarget)
  SharedDtor();
}

void DVLTrackingTarget::SharedDtor() {
  if (this != internal_default_instance()) delete range_;
  if (this != internal_default_instance()) delete position_;
}

void DVLTrackingTarget::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* DVLTrackingTarget::descriptor() {
  ::protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DVLTrackingTarget& DVLTrackingTarget::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::scc_info_DVLTrackingTarget.base);
  return *internal_default_instance();
}


void DVLTrackingTarget::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.DVLTrackingTarget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && range_ != NULL) {
    delete range_;
  }
  range_ = NULL;
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
  type_ = 0;
  _internal_metadata_.Clear();
}

bool DVLTrackingTarget::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.DVLTrackingTarget)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.DVLTrackingTarget.TargetType type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::gz::msgs::DVLTrackingTarget_TargetType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.DVLRangeEstimate range = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_range()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.DVLKinematicEstimate position = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_position()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.DVLTrackingTarget)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.DVLTrackingTarget)
  return false;
#undef DO_
}

void DVLTrackingTarget::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.DVLTrackingTarget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.DVLTrackingTarget.TargetType type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // .gz.msgs.DVLRangeEstimate range = 2;
  if (this->has_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_range(), output);
  }

  // .gz.msgs.DVLKinematicEstimate position = 3;
  if (this->has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_position(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.DVLTrackingTarget)
}

::google::protobuf::uint8* DVLTrackingTarget::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.DVLTrackingTarget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.DVLTrackingTarget.TargetType type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // .gz.msgs.DVLRangeEstimate range = 2;
  if (this->has_range()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_range(), deterministic, target);
  }

  // .gz.msgs.DVLKinematicEstimate position = 3;
  if (this->has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_position(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.DVLTrackingTarget)
  return target;
}

size_t DVLTrackingTarget::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.DVLTrackingTarget)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .gz.msgs.DVLRangeEstimate range = 2;
  if (this->has_range()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *range_);
  }

  // .gz.msgs.DVLKinematicEstimate position = 3;
  if (this->has_position()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *position_);
  }

  // .gz.msgs.DVLTrackingTarget.TargetType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DVLTrackingTarget::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.DVLTrackingTarget)
  GOOGLE_DCHECK_NE(&from, this);
  const DVLTrackingTarget* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DVLTrackingTarget>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.DVLTrackingTarget)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.DVLTrackingTarget)
    MergeFrom(*source);
  }
}

void DVLTrackingTarget::MergeFrom(const DVLTrackingTarget& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.DVLTrackingTarget)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_range()) {
    mutable_range()->::gz::msgs::DVLRangeEstimate::MergeFrom(from.range());
  }
  if (from.has_position()) {
    mutable_position()->::gz::msgs::DVLKinematicEstimate::MergeFrom(from.position());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void DVLTrackingTarget::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.DVLTrackingTarget)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DVLTrackingTarget::CopyFrom(const DVLTrackingTarget& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.DVLTrackingTarget)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DVLTrackingTarget::IsInitialized() const {
  return true;
}

void DVLTrackingTarget::Swap(DVLTrackingTarget* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DVLTrackingTarget::InternalSwap(DVLTrackingTarget* other) {
  using std::swap;
  swap(range_, other->range_);
  swap(position_, other->position_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata DVLTrackingTarget::GetMetadata() const {
  protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fdvl_5ftracking_5ftarget_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::DVLTrackingTarget* Arena::CreateMaybeMessage< ::gz::msgs::DVLTrackingTarget >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::DVLTrackingTarget >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)