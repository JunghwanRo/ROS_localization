// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/joint_trajectory.proto

#include "gz/msgs/joint_trajectory.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.JointTrajectory", JointTrajectory)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_JointTrajectoryPoint;
}  // namespace protobuf_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto
namespace gz {
namespace msgs {
class JointTrajectoryDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<JointTrajectory>
      _instance;
} _JointTrajectory_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fjoint_5ftrajectory_2eproto {
static void InitDefaultsJointTrajectory() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_JointTrajectory_default_instance_;
    new (ptr) ::gz::msgs::JointTrajectory();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::JointTrajectory::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_JointTrajectory =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsJointTrajectory}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto::scc_info_JointTrajectoryPoint.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_JointTrajectory.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::JointTrajectory, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::JointTrajectory, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::JointTrajectory, joint_names_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::JointTrajectory, points_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::JointTrajectory)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_JointTrajectory_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/joint_trajectory.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\036gz/msgs/joint_trajectory.proto\022\007gz.msg"
      "s\032\024gz/msgs/header.proto\032$gz/msgs/joint_t"
      "rajectory_point.proto\"v\n\017JointTrajectory"
      "\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.Header\022\023\n\013joi"
      "nt_names\030\002 \003(\t\022-\n\006points\030\003 \003(\0132\035.gz.msgs"
      ".JointTrajectoryPointB$\n\013com.gz.msgsB\025Jo"
      "intTrajectoryProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 267);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/joint_trajectory.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fjoint_5ftrajectory_5fpoint_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fjoint_5ftrajectory_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void JointTrajectory::InitAsDefaultInstance() {
  ::gz::msgs::_JointTrajectory_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void JointTrajectory::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void JointTrajectory::clear_points() {
  points_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int JointTrajectory::kHeaderFieldNumber;
const int JointTrajectory::kJointNamesFieldNumber;
const int JointTrajectory::kPointsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

JointTrajectory::JointTrajectory()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fjoint_5ftrajectory_2eproto::scc_info_JointTrajectory.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.JointTrajectory)
}
JointTrajectory::JointTrajectory(const JointTrajectory& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      joint_names_(from.joint_names_),
      points_(from.points_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.JointTrajectory)
}

void JointTrajectory::SharedCtor() {
  header_ = NULL;
}

JointTrajectory::~JointTrajectory() {
  // @@protoc_insertion_point(destructor:gz.msgs.JointTrajectory)
  SharedDtor();
}

void JointTrajectory::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void JointTrajectory::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* JointTrajectory::descriptor() {
  ::protobuf_gz_2fmsgs_2fjoint_5ftrajectory_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fjoint_5ftrajectory_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const JointTrajectory& JointTrajectory::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fjoint_5ftrajectory_2eproto::scc_info_JointTrajectory.base);
  return *internal_default_instance();
}


void JointTrajectory::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.JointTrajectory)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  joint_names_.Clear();
  points_.Clear();
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  _internal_metadata_.Clear();
}

bool JointTrajectory::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.JointTrajectory)
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

      // repeated string joint_names = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_joint_names()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->joint_names(this->joint_names_size() - 1).data(),
            static_cast<int>(this->joint_names(this->joint_names_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.JointTrajectory.joint_names"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.JointTrajectoryPoint points = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_points()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.JointTrajectory)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.JointTrajectory)
  return false;
#undef DO_
}

void JointTrajectory::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.JointTrajectory)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // repeated string joint_names = 2;
  for (int i = 0, n = this->joint_names_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->joint_names(i).data(), static_cast<int>(this->joint_names(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.JointTrajectory.joint_names");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->joint_names(i), output);
  }

  // repeated .gz.msgs.JointTrajectoryPoint points = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->points_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->points(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.JointTrajectory)
}

::google::protobuf::uint8* JointTrajectory::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.JointTrajectory)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // repeated string joint_names = 2;
  for (int i = 0, n = this->joint_names_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->joint_names(i).data(), static_cast<int>(this->joint_names(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.JointTrajectory.joint_names");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->joint_names(i), target);
  }

  // repeated .gz.msgs.JointTrajectoryPoint points = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->points_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->points(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.JointTrajectory)
  return target;
}

size_t JointTrajectory::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.JointTrajectory)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string joint_names = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->joint_names_size());
  for (int i = 0, n = this->joint_names_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->joint_names(i));
  }

  // repeated .gz.msgs.JointTrajectoryPoint points = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->points_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->points(static_cast<int>(i)));
    }
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void JointTrajectory::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.JointTrajectory)
  GOOGLE_DCHECK_NE(&from, this);
  const JointTrajectory* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const JointTrajectory>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.JointTrajectory)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.JointTrajectory)
    MergeFrom(*source);
  }
}

void JointTrajectory::MergeFrom(const JointTrajectory& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.JointTrajectory)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  joint_names_.MergeFrom(from.joint_names_);
  points_.MergeFrom(from.points_);
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
}

void JointTrajectory::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.JointTrajectory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JointTrajectory::CopyFrom(const JointTrajectory& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.JointTrajectory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool JointTrajectory::IsInitialized() const {
  return true;
}

void JointTrajectory::Swap(JointTrajectory* other) {
  if (other == this) return;
  InternalSwap(other);
}
void JointTrajectory::InternalSwap(JointTrajectory* other) {
  using std::swap;
  joint_names_.InternalSwap(CastToBase(&other->joint_names_));
  CastToBase(&points_)->InternalSwap(CastToBase(&other->points_));
  swap(header_, other->header_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata JointTrajectory::GetMetadata() const {
  protobuf_gz_2fmsgs_2fjoint_5ftrajectory_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fjoint_5ftrajectory_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::JointTrajectory* Arena::CreateMaybeMessage< ::gz::msgs::JointTrajectory >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::JointTrajectory >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)