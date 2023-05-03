// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/navsat_sensor.proto

#include "gz/msgs/navsat_sensor.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.NavSatSensor", NavSatSensor)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_NavSatSensor_Sensing;
}  // namespace protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto
namespace protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_SensorNoise;
}  // namespace protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto
namespace gz {
namespace msgs {
class NavSatSensor_SensingDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<NavSatSensor_Sensing>
      _instance;
} _NavSatSensor_Sensing_default_instance_;
class NavSatSensorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<NavSatSensor>
      _instance;
} _NavSatSensor_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto {
static void InitDefaultsNavSatSensor_Sensing() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_NavSatSensor_Sensing_default_instance_;
    new (ptr) ::gz::msgs::NavSatSensor_Sensing();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::NavSatSensor_Sensing::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_NavSatSensor_Sensing =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsNavSatSensor_Sensing}, {
      &protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto::scc_info_SensorNoise.base,}};

static void InitDefaultsNavSatSensor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_NavSatSensor_default_instance_;
    new (ptr) ::gz::msgs::NavSatSensor();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::NavSatSensor::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_NavSatSensor =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsNavSatSensor}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::scc_info_NavSatSensor_Sensing.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_NavSatSensor_Sensing.base);
  ::google::protobuf::internal::InitSCC(&scc_info_NavSatSensor.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSatSensor_Sensing, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSatSensor_Sensing, horizontal_noise_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSatSensor_Sensing, vertical_noise_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSatSensor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSatSensor, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSatSensor, position_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSatSensor, velocity_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::NavSatSensor_Sensing)},
  { 7, -1, sizeof(::gz::msgs::NavSatSensor)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_NavSatSensor_Sensing_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_NavSatSensor_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/navsat_sensor.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
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
      "\n\033gz/msgs/navsat_sensor.proto\022\007gz.msgs\032\032"
      "gz/msgs/sensor_noise.proto\032\024gz/msgs/head"
      "er.proto\"\372\001\n\014NavSatSensor\022\037\n\006header\030\001 \001("
      "\0132\017.gz.msgs.Header\022/\n\010position\030\002 \001(\0132\035.g"
      "z.msgs.NavSatSensor.Sensing\022/\n\010velocity\030"
      "\003 \001(\0132\035.gz.msgs.NavSatSensor.Sensing\032g\n\007"
      "Sensing\022.\n\020horizontal_noise\030\001 \001(\0132\024.gz.m"
      "sgs.SensorNoise\022,\n\016vertical_noise\030\002 \001(\0132"
      "\024.gz.msgs.SensorNoiseB!\n\013com.gz.msgsB\022Na"
      "vSatSensorProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 384);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/navsat_sensor.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fsensor_5fnoise_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void NavSatSensor_Sensing::InitAsDefaultInstance() {
  ::gz::msgs::_NavSatSensor_Sensing_default_instance_._instance.get_mutable()->horizontal_noise_ = const_cast< ::gz::msgs::SensorNoise*>(
      ::gz::msgs::SensorNoise::internal_default_instance());
  ::gz::msgs::_NavSatSensor_Sensing_default_instance_._instance.get_mutable()->vertical_noise_ = const_cast< ::gz::msgs::SensorNoise*>(
      ::gz::msgs::SensorNoise::internal_default_instance());
}
void NavSatSensor_Sensing::clear_horizontal_noise() {
  if (GetArenaNoVirtual() == NULL && horizontal_noise_ != NULL) {
    delete horizontal_noise_;
  }
  horizontal_noise_ = NULL;
}
void NavSatSensor_Sensing::clear_vertical_noise() {
  if (GetArenaNoVirtual() == NULL && vertical_noise_ != NULL) {
    delete vertical_noise_;
  }
  vertical_noise_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NavSatSensor_Sensing::kHorizontalNoiseFieldNumber;
const int NavSatSensor_Sensing::kVerticalNoiseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NavSatSensor_Sensing::NavSatSensor_Sensing()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::scc_info_NavSatSensor_Sensing.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.NavSatSensor.Sensing)
}
NavSatSensor_Sensing::NavSatSensor_Sensing(const NavSatSensor_Sensing& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_horizontal_noise()) {
    horizontal_noise_ = new ::gz::msgs::SensorNoise(*from.horizontal_noise_);
  } else {
    horizontal_noise_ = NULL;
  }
  if (from.has_vertical_noise()) {
    vertical_noise_ = new ::gz::msgs::SensorNoise(*from.vertical_noise_);
  } else {
    vertical_noise_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.NavSatSensor.Sensing)
}

void NavSatSensor_Sensing::SharedCtor() {
  ::memset(&horizontal_noise_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&vertical_noise_) -
      reinterpret_cast<char*>(&horizontal_noise_)) + sizeof(vertical_noise_));
}

NavSatSensor_Sensing::~NavSatSensor_Sensing() {
  // @@protoc_insertion_point(destructor:gz.msgs.NavSatSensor.Sensing)
  SharedDtor();
}

void NavSatSensor_Sensing::SharedDtor() {
  if (this != internal_default_instance()) delete horizontal_noise_;
  if (this != internal_default_instance()) delete vertical_noise_;
}

void NavSatSensor_Sensing::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* NavSatSensor_Sensing::descriptor() {
  ::protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const NavSatSensor_Sensing& NavSatSensor_Sensing::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::scc_info_NavSatSensor_Sensing.base);
  return *internal_default_instance();
}


void NavSatSensor_Sensing::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.NavSatSensor.Sensing)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && horizontal_noise_ != NULL) {
    delete horizontal_noise_;
  }
  horizontal_noise_ = NULL;
  if (GetArenaNoVirtual() == NULL && vertical_noise_ != NULL) {
    delete vertical_noise_;
  }
  vertical_noise_ = NULL;
  _internal_metadata_.Clear();
}

bool NavSatSensor_Sensing::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.NavSatSensor.Sensing)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.SensorNoise horizontal_noise = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_horizontal_noise()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.SensorNoise vertical_noise = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_vertical_noise()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.NavSatSensor.Sensing)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.NavSatSensor.Sensing)
  return false;
#undef DO_
}

void NavSatSensor_Sensing::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.NavSatSensor.Sensing)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.SensorNoise horizontal_noise = 1;
  if (this->has_horizontal_noise()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_horizontal_noise(), output);
  }

  // .gz.msgs.SensorNoise vertical_noise = 2;
  if (this->has_vertical_noise()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_vertical_noise(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.NavSatSensor.Sensing)
}

::google::protobuf::uint8* NavSatSensor_Sensing::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.NavSatSensor.Sensing)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.SensorNoise horizontal_noise = 1;
  if (this->has_horizontal_noise()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_horizontal_noise(), deterministic, target);
  }

  // .gz.msgs.SensorNoise vertical_noise = 2;
  if (this->has_vertical_noise()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_vertical_noise(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.NavSatSensor.Sensing)
  return target;
}

size_t NavSatSensor_Sensing::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.NavSatSensor.Sensing)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .gz.msgs.SensorNoise horizontal_noise = 1;
  if (this->has_horizontal_noise()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *horizontal_noise_);
  }

  // .gz.msgs.SensorNoise vertical_noise = 2;
  if (this->has_vertical_noise()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *vertical_noise_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NavSatSensor_Sensing::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.NavSatSensor.Sensing)
  GOOGLE_DCHECK_NE(&from, this);
  const NavSatSensor_Sensing* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const NavSatSensor_Sensing>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.NavSatSensor.Sensing)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.NavSatSensor.Sensing)
    MergeFrom(*source);
  }
}

void NavSatSensor_Sensing::MergeFrom(const NavSatSensor_Sensing& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.NavSatSensor.Sensing)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_horizontal_noise()) {
    mutable_horizontal_noise()->::gz::msgs::SensorNoise::MergeFrom(from.horizontal_noise());
  }
  if (from.has_vertical_noise()) {
    mutable_vertical_noise()->::gz::msgs::SensorNoise::MergeFrom(from.vertical_noise());
  }
}

void NavSatSensor_Sensing::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.NavSatSensor.Sensing)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NavSatSensor_Sensing::CopyFrom(const NavSatSensor_Sensing& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.NavSatSensor.Sensing)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavSatSensor_Sensing::IsInitialized() const {
  return true;
}

void NavSatSensor_Sensing::Swap(NavSatSensor_Sensing* other) {
  if (other == this) return;
  InternalSwap(other);
}
void NavSatSensor_Sensing::InternalSwap(NavSatSensor_Sensing* other) {
  using std::swap;
  swap(horizontal_noise_, other->horizontal_noise_);
  swap(vertical_noise_, other->vertical_noise_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata NavSatSensor_Sensing::GetMetadata() const {
  protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void NavSatSensor::InitAsDefaultInstance() {
  ::gz::msgs::_NavSatSensor_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_NavSatSensor_default_instance_._instance.get_mutable()->position_ = const_cast< ::gz::msgs::NavSatSensor_Sensing*>(
      ::gz::msgs::NavSatSensor_Sensing::internal_default_instance());
  ::gz::msgs::_NavSatSensor_default_instance_._instance.get_mutable()->velocity_ = const_cast< ::gz::msgs::NavSatSensor_Sensing*>(
      ::gz::msgs::NavSatSensor_Sensing::internal_default_instance());
}
void NavSatSensor::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NavSatSensor::kHeaderFieldNumber;
const int NavSatSensor::kPositionFieldNumber;
const int NavSatSensor::kVelocityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NavSatSensor::NavSatSensor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::scc_info_NavSatSensor.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.NavSatSensor)
}
NavSatSensor::NavSatSensor(const NavSatSensor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_position()) {
    position_ = new ::gz::msgs::NavSatSensor_Sensing(*from.position_);
  } else {
    position_ = NULL;
  }
  if (from.has_velocity()) {
    velocity_ = new ::gz::msgs::NavSatSensor_Sensing(*from.velocity_);
  } else {
    velocity_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.NavSatSensor)
}

void NavSatSensor::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&velocity_) -
      reinterpret_cast<char*>(&header_)) + sizeof(velocity_));
}

NavSatSensor::~NavSatSensor() {
  // @@protoc_insertion_point(destructor:gz.msgs.NavSatSensor)
  SharedDtor();
}

void NavSatSensor::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete position_;
  if (this != internal_default_instance()) delete velocity_;
}

void NavSatSensor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* NavSatSensor::descriptor() {
  ::protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const NavSatSensor& NavSatSensor::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::scc_info_NavSatSensor.base);
  return *internal_default_instance();
}


void NavSatSensor::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.NavSatSensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
  if (GetArenaNoVirtual() == NULL && velocity_ != NULL) {
    delete velocity_;
  }
  velocity_ = NULL;
  _internal_metadata_.Clear();
}

bool NavSatSensor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.NavSatSensor)
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

      // .gz.msgs.NavSatSensor.Sensing position = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_position()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.NavSatSensor.Sensing velocity = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_velocity()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.NavSatSensor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.NavSatSensor)
  return false;
#undef DO_
}

void NavSatSensor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.NavSatSensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.NavSatSensor.Sensing position = 2;
  if (this->has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_position(), output);
  }

  // .gz.msgs.NavSatSensor.Sensing velocity = 3;
  if (this->has_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_velocity(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.NavSatSensor)
}

::google::protobuf::uint8* NavSatSensor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.NavSatSensor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.NavSatSensor.Sensing position = 2;
  if (this->has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_position(), deterministic, target);
  }

  // .gz.msgs.NavSatSensor.Sensing velocity = 3;
  if (this->has_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_velocity(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.NavSatSensor)
  return target;
}

size_t NavSatSensor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.NavSatSensor)
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

  // .gz.msgs.NavSatSensor.Sensing position = 2;
  if (this->has_position()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *position_);
  }

  // .gz.msgs.NavSatSensor.Sensing velocity = 3;
  if (this->has_velocity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *velocity_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NavSatSensor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.NavSatSensor)
  GOOGLE_DCHECK_NE(&from, this);
  const NavSatSensor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const NavSatSensor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.NavSatSensor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.NavSatSensor)
    MergeFrom(*source);
  }
}

void NavSatSensor::MergeFrom(const NavSatSensor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.NavSatSensor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_position()) {
    mutable_position()->::gz::msgs::NavSatSensor_Sensing::MergeFrom(from.position());
  }
  if (from.has_velocity()) {
    mutable_velocity()->::gz::msgs::NavSatSensor_Sensing::MergeFrom(from.velocity());
  }
}

void NavSatSensor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.NavSatSensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NavSatSensor::CopyFrom(const NavSatSensor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.NavSatSensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavSatSensor::IsInitialized() const {
  return true;
}

void NavSatSensor::Swap(NavSatSensor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void NavSatSensor::InternalSwap(NavSatSensor* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(position_, other->position_);
  swap(velocity_, other->velocity_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata NavSatSensor::GetMetadata() const {
  protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::NavSatSensor_Sensing* Arena::CreateMaybeMessage< ::gz::msgs::NavSatSensor_Sensing >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::NavSatSensor_Sensing >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::NavSatSensor* Arena::CreateMaybeMessage< ::gz::msgs::NavSatSensor >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::NavSatSensor >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
