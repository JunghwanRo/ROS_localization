// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/imu.proto

#include "gz/msgs/imu.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.IMU", IMU)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fquaternion_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fquaternion_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Quaternion;
}  // namespace protobuf_gz_2fmsgs_2fquaternion_2eproto
namespace protobuf_gz_2fmsgs_2fvector3d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fvector3d_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Vector3d;
}  // namespace protobuf_gz_2fmsgs_2fvector3d_2eproto
namespace gz {
namespace msgs {
class IMUDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<IMU>
      _instance;
} _IMU_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fimu_2eproto {
static void InitDefaultsIMU() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_IMU_default_instance_;
    new (ptr) ::gz::msgs::IMU();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::IMU::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<3> scc_info_IMU =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsIMU}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fquaternion_2eproto::scc_info_Quaternion.base,
      &protobuf_gz_2fmsgs_2fvector3d_2eproto::scc_info_Vector3d.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_IMU.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::IMU, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::IMU, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::IMU, entity_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::IMU, orientation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::IMU, angular_velocity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::IMU, linear_acceleration_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::IMU)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_IMU_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/imu.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\021gz/msgs/imu.proto\022\007gz.msgs\032\024gz/msgs/he"
      "ader.proto\032\026gz/msgs/vector3d.proto\032\030gz/m"
      "sgs/quaternion.proto\"\302\001\n\003IMU\022\037\n\006header\030\001"
      " \001(\0132\017.gz.msgs.Header\022\023\n\013entity_name\030\002 \001"
      "(\t\022(\n\013orientation\030\003 \001(\0132\023.gz.msgs.Quater"
      "nion\022+\n\020angular_velocity\030\004 \001(\0132\021.gz.msgs"
      ".Vector3d\022.\n\023linear_acceleration\030\005 \001(\0132\021"
      ".gz.msgs.Vector3dB\030\n\013com.gz.msgsB\tIMUPro"
      "tosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 331);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/imu.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fvector3d_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fquaternion_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fimu_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void IMU::InitAsDefaultInstance() {
  ::gz::msgs::_IMU_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_IMU_default_instance_._instance.get_mutable()->orientation_ = const_cast< ::gz::msgs::Quaternion*>(
      ::gz::msgs::Quaternion::internal_default_instance());
  ::gz::msgs::_IMU_default_instance_._instance.get_mutable()->angular_velocity_ = const_cast< ::gz::msgs::Vector3d*>(
      ::gz::msgs::Vector3d::internal_default_instance());
  ::gz::msgs::_IMU_default_instance_._instance.get_mutable()->linear_acceleration_ = const_cast< ::gz::msgs::Vector3d*>(
      ::gz::msgs::Vector3d::internal_default_instance());
}
void IMU::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void IMU::clear_orientation() {
  if (GetArenaNoVirtual() == NULL && orientation_ != NULL) {
    delete orientation_;
  }
  orientation_ = NULL;
}
void IMU::clear_angular_velocity() {
  if (GetArenaNoVirtual() == NULL && angular_velocity_ != NULL) {
    delete angular_velocity_;
  }
  angular_velocity_ = NULL;
}
void IMU::clear_linear_acceleration() {
  if (GetArenaNoVirtual() == NULL && linear_acceleration_ != NULL) {
    delete linear_acceleration_;
  }
  linear_acceleration_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int IMU::kHeaderFieldNumber;
const int IMU::kEntityNameFieldNumber;
const int IMU::kOrientationFieldNumber;
const int IMU::kAngularVelocityFieldNumber;
const int IMU::kLinearAccelerationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

IMU::IMU()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fimu_2eproto::scc_info_IMU.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.IMU)
}
IMU::IMU(const IMU& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  entity_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.entity_name().size() > 0) {
    entity_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.entity_name_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_orientation()) {
    orientation_ = new ::gz::msgs::Quaternion(*from.orientation_);
  } else {
    orientation_ = NULL;
  }
  if (from.has_angular_velocity()) {
    angular_velocity_ = new ::gz::msgs::Vector3d(*from.angular_velocity_);
  } else {
    angular_velocity_ = NULL;
  }
  if (from.has_linear_acceleration()) {
    linear_acceleration_ = new ::gz::msgs::Vector3d(*from.linear_acceleration_);
  } else {
    linear_acceleration_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.IMU)
}

void IMU::SharedCtor() {
  entity_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&linear_acceleration_) -
      reinterpret_cast<char*>(&header_)) + sizeof(linear_acceleration_));
}

IMU::~IMU() {
  // @@protoc_insertion_point(destructor:gz.msgs.IMU)
  SharedDtor();
}

void IMU::SharedDtor() {
  entity_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete orientation_;
  if (this != internal_default_instance()) delete angular_velocity_;
  if (this != internal_default_instance()) delete linear_acceleration_;
}

void IMU::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* IMU::descriptor() {
  ::protobuf_gz_2fmsgs_2fimu_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fimu_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const IMU& IMU::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fimu_2eproto::scc_info_IMU.base);
  return *internal_default_instance();
}


void IMU::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.IMU)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  entity_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && orientation_ != NULL) {
    delete orientation_;
  }
  orientation_ = NULL;
  if (GetArenaNoVirtual() == NULL && angular_velocity_ != NULL) {
    delete angular_velocity_;
  }
  angular_velocity_ = NULL;
  if (GetArenaNoVirtual() == NULL && linear_acceleration_ != NULL) {
    delete linear_acceleration_;
  }
  linear_acceleration_ = NULL;
  _internal_metadata_.Clear();
}

bool IMU::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.IMU)
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

      // string entity_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_entity_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->entity_name().data(), static_cast<int>(this->entity_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.IMU.entity_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Quaternion orientation = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_orientation()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Vector3d angular_velocity = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_angular_velocity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Vector3d linear_acceleration = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_linear_acceleration()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.IMU)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.IMU)
  return false;
#undef DO_
}

void IMU::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.IMU)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string entity_name = 2;
  if (this->entity_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->entity_name().data(), static_cast<int>(this->entity_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.IMU.entity_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->entity_name(), output);
  }

  // .gz.msgs.Quaternion orientation = 3;
  if (this->has_orientation()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_orientation(), output);
  }

  // .gz.msgs.Vector3d angular_velocity = 4;
  if (this->has_angular_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_angular_velocity(), output);
  }

  // .gz.msgs.Vector3d linear_acceleration = 5;
  if (this->has_linear_acceleration()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_linear_acceleration(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.IMU)
}

::google::protobuf::uint8* IMU::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.IMU)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string entity_name = 2;
  if (this->entity_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->entity_name().data(), static_cast<int>(this->entity_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.IMU.entity_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->entity_name(), target);
  }

  // .gz.msgs.Quaternion orientation = 3;
  if (this->has_orientation()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_orientation(), deterministic, target);
  }

  // .gz.msgs.Vector3d angular_velocity = 4;
  if (this->has_angular_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_angular_velocity(), deterministic, target);
  }

  // .gz.msgs.Vector3d linear_acceleration = 5;
  if (this->has_linear_acceleration()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_linear_acceleration(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.IMU)
  return target;
}

size_t IMU::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.IMU)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string entity_name = 2;
  if (this->entity_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->entity_name());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.Quaternion orientation = 3;
  if (this->has_orientation()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *orientation_);
  }

  // .gz.msgs.Vector3d angular_velocity = 4;
  if (this->has_angular_velocity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *angular_velocity_);
  }

  // .gz.msgs.Vector3d linear_acceleration = 5;
  if (this->has_linear_acceleration()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *linear_acceleration_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void IMU::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.IMU)
  GOOGLE_DCHECK_NE(&from, this);
  const IMU* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const IMU>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.IMU)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.IMU)
    MergeFrom(*source);
  }
}

void IMU::MergeFrom(const IMU& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.IMU)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.entity_name().size() > 0) {

    entity_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.entity_name_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_orientation()) {
    mutable_orientation()->::gz::msgs::Quaternion::MergeFrom(from.orientation());
  }
  if (from.has_angular_velocity()) {
    mutable_angular_velocity()->::gz::msgs::Vector3d::MergeFrom(from.angular_velocity());
  }
  if (from.has_linear_acceleration()) {
    mutable_linear_acceleration()->::gz::msgs::Vector3d::MergeFrom(from.linear_acceleration());
  }
}

void IMU::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.IMU)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IMU::CopyFrom(const IMU& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.IMU)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMU::IsInitialized() const {
  return true;
}

void IMU::Swap(IMU* other) {
  if (other == this) return;
  InternalSwap(other);
}
void IMU::InternalSwap(IMU* other) {
  using std::swap;
  entity_name_.Swap(&other->entity_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(orientation_, other->orientation_);
  swap(angular_velocity_, other->angular_velocity_);
  swap(linear_acceleration_, other->linear_acceleration_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata IMU::GetMetadata() const {
  protobuf_gz_2fmsgs_2fimu_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fimu_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::IMU* Arena::CreateMaybeMessage< ::gz::msgs::IMU >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::IMU >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)