// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/spherical_coordinates.proto

#include "gz/msgs/spherical_coordinates.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.SphericalCoordinates", SphericalCoordinates)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fentity_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fentity_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Entity;
}  // namespace protobuf_gz_2fmsgs_2fentity_2eproto
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class SphericalCoordinatesDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SphericalCoordinates>
      _instance;
} _SphericalCoordinates_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto {
static void InitDefaultsSphericalCoordinates() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_SphericalCoordinates_default_instance_;
    new (ptr) ::gz::msgs::SphericalCoordinates();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::SphericalCoordinates::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_SphericalCoordinates =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsSphericalCoordinates}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fentity_2eproto::scc_info_Entity.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SphericalCoordinates.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, surface_model_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, latitude_deg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, longitude_deg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, elevation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, heading_deg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, entity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, surface_axis_equatorial_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::SphericalCoordinates, surface_axis_polar_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::SphericalCoordinates)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_SphericalCoordinates_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/spherical_coordinates.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n#gz/msgs/spherical_coordinates.proto\022\007g"
      "z.msgs\032\024gz/msgs/entity.proto\032\024gz/msgs/he"
      "ader.proto\"\360\002\n\024SphericalCoordinates\022\037\n\006h"
      "eader\030\001 \001(\0132\017.gz.msgs.Header\022A\n\rsurface_"
      "model\030\002 \001(\0162*.gz.msgs.SphericalCoordinat"
      "es.SurfaceModel\022\024\n\014latitude_deg\030\003 \001(\001\022\025\n"
      "\rlongitude_deg\030\004 \001(\001\022\021\n\televation\030\005 \001(\001\022"
      "\023\n\013heading_deg\030\006 \001(\001\022\037\n\006entity\030\007 \001(\0132\017.g"
      "z.msgs.Entity\022\037\n\027surface_axis_equatorial"
      "\030\010 \001(\001\022\032\n\022surface_axis_polar\030\t \001(\001\"A\n\014Su"
      "rfaceModel\022\017\n\013EARTH_WGS84\020\000\022\014\n\010MOON_SCS\020"
      "\001\022\022\n\016CUSTOM_SURFACE\020\002B)\n\013com.gz.msgsB\032Sp"
      "hericalCoordinatesProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 512);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/spherical_coordinates.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fentity_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto
namespace gz {
namespace msgs {
const ::google::protobuf::EnumDescriptor* SphericalCoordinates_SurfaceModel_descriptor() {
  protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::file_level_enum_descriptors[0];
}
bool SphericalCoordinates_SurfaceModel_IsValid(int value) {
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
const SphericalCoordinates_SurfaceModel SphericalCoordinates::EARTH_WGS84;
const SphericalCoordinates_SurfaceModel SphericalCoordinates::MOON_SCS;
const SphericalCoordinates_SurfaceModel SphericalCoordinates::CUSTOM_SURFACE;
const SphericalCoordinates_SurfaceModel SphericalCoordinates::SurfaceModel_MIN;
const SphericalCoordinates_SurfaceModel SphericalCoordinates::SurfaceModel_MAX;
const int SphericalCoordinates::SurfaceModel_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void SphericalCoordinates::InitAsDefaultInstance() {
  ::gz::msgs::_SphericalCoordinates_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_SphericalCoordinates_default_instance_._instance.get_mutable()->entity_ = const_cast< ::gz::msgs::Entity*>(
      ::gz::msgs::Entity::internal_default_instance());
}
void SphericalCoordinates::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void SphericalCoordinates::clear_entity() {
  if (GetArenaNoVirtual() == NULL && entity_ != NULL) {
    delete entity_;
  }
  entity_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SphericalCoordinates::kHeaderFieldNumber;
const int SphericalCoordinates::kSurfaceModelFieldNumber;
const int SphericalCoordinates::kLatitudeDegFieldNumber;
const int SphericalCoordinates::kLongitudeDegFieldNumber;
const int SphericalCoordinates::kElevationFieldNumber;
const int SphericalCoordinates::kHeadingDegFieldNumber;
const int SphericalCoordinates::kEntityFieldNumber;
const int SphericalCoordinates::kSurfaceAxisEquatorialFieldNumber;
const int SphericalCoordinates::kSurfaceAxisPolarFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SphericalCoordinates::SphericalCoordinates()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::scc_info_SphericalCoordinates.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.SphericalCoordinates)
}
SphericalCoordinates::SphericalCoordinates(const SphericalCoordinates& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_entity()) {
    entity_ = new ::gz::msgs::Entity(*from.entity_);
  } else {
    entity_ = NULL;
  }
  ::memcpy(&latitude_deg_, &from.latitude_deg_,
    static_cast<size_t>(reinterpret_cast<char*>(&surface_model_) -
    reinterpret_cast<char*>(&latitude_deg_)) + sizeof(surface_model_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.SphericalCoordinates)
}

void SphericalCoordinates::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&surface_model_) -
      reinterpret_cast<char*>(&header_)) + sizeof(surface_model_));
}

SphericalCoordinates::~SphericalCoordinates() {
  // @@protoc_insertion_point(destructor:gz.msgs.SphericalCoordinates)
  SharedDtor();
}

void SphericalCoordinates::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete entity_;
}

void SphericalCoordinates::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SphericalCoordinates::descriptor() {
  ::protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SphericalCoordinates& SphericalCoordinates::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::scc_info_SphericalCoordinates.base);
  return *internal_default_instance();
}


void SphericalCoordinates::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.SphericalCoordinates)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && entity_ != NULL) {
    delete entity_;
  }
  entity_ = NULL;
  ::memset(&latitude_deg_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&surface_model_) -
      reinterpret_cast<char*>(&latitude_deg_)) + sizeof(surface_model_));
  _internal_metadata_.Clear();
}

bool SphericalCoordinates::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.SphericalCoordinates)
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

      // .gz.msgs.SphericalCoordinates.SurfaceModel surface_model = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_surface_model(static_cast< ::gz::msgs::SphericalCoordinates_SurfaceModel >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double latitude_deg = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latitude_deg_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double longitude_deg = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &longitude_deg_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double elevation = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &elevation_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double heading_deg = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &heading_deg_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Entity entity = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_entity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double surface_axis_equatorial = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &surface_axis_equatorial_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double surface_axis_polar = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(73u /* 73 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &surface_axis_polar_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.SphericalCoordinates)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.SphericalCoordinates)
  return false;
#undef DO_
}

void SphericalCoordinates::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.SphericalCoordinates)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.SphericalCoordinates.SurfaceModel surface_model = 2;
  if (this->surface_model() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->surface_model(), output);
  }

  // double latitude_deg = 3;
  if (this->latitude_deg() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->latitude_deg(), output);
  }

  // double longitude_deg = 4;
  if (this->longitude_deg() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->longitude_deg(), output);
  }

  // double elevation = 5;
  if (this->elevation() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->elevation(), output);
  }

  // double heading_deg = 6;
  if (this->heading_deg() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->heading_deg(), output);
  }

  // .gz.msgs.Entity entity = 7;
  if (this->has_entity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->_internal_entity(), output);
  }

  // double surface_axis_equatorial = 8;
  if (this->surface_axis_equatorial() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->surface_axis_equatorial(), output);
  }

  // double surface_axis_polar = 9;
  if (this->surface_axis_polar() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->surface_axis_polar(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.SphericalCoordinates)
}

::google::protobuf::uint8* SphericalCoordinates::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.SphericalCoordinates)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.SphericalCoordinates.SurfaceModel surface_model = 2;
  if (this->surface_model() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->surface_model(), target);
  }

  // double latitude_deg = 3;
  if (this->latitude_deg() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->latitude_deg(), target);
  }

  // double longitude_deg = 4;
  if (this->longitude_deg() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->longitude_deg(), target);
  }

  // double elevation = 5;
  if (this->elevation() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->elevation(), target);
  }

  // double heading_deg = 6;
  if (this->heading_deg() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->heading_deg(), target);
  }

  // .gz.msgs.Entity entity = 7;
  if (this->has_entity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->_internal_entity(), deterministic, target);
  }

  // double surface_axis_equatorial = 8;
  if (this->surface_axis_equatorial() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->surface_axis_equatorial(), target);
  }

  // double surface_axis_polar = 9;
  if (this->surface_axis_polar() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->surface_axis_polar(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.SphericalCoordinates)
  return target;
}

size_t SphericalCoordinates::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.SphericalCoordinates)
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

  // .gz.msgs.Entity entity = 7;
  if (this->has_entity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *entity_);
  }

  // double latitude_deg = 3;
  if (this->latitude_deg() != 0) {
    total_size += 1 + 8;
  }

  // double longitude_deg = 4;
  if (this->longitude_deg() != 0) {
    total_size += 1 + 8;
  }

  // double elevation = 5;
  if (this->elevation() != 0) {
    total_size += 1 + 8;
  }

  // double heading_deg = 6;
  if (this->heading_deg() != 0) {
    total_size += 1 + 8;
  }

  // double surface_axis_equatorial = 8;
  if (this->surface_axis_equatorial() != 0) {
    total_size += 1 + 8;
  }

  // double surface_axis_polar = 9;
  if (this->surface_axis_polar() != 0) {
    total_size += 1 + 8;
  }

  // .gz.msgs.SphericalCoordinates.SurfaceModel surface_model = 2;
  if (this->surface_model() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->surface_model());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SphericalCoordinates::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.SphericalCoordinates)
  GOOGLE_DCHECK_NE(&from, this);
  const SphericalCoordinates* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SphericalCoordinates>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.SphericalCoordinates)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.SphericalCoordinates)
    MergeFrom(*source);
  }
}

void SphericalCoordinates::MergeFrom(const SphericalCoordinates& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.SphericalCoordinates)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_entity()) {
    mutable_entity()->::gz::msgs::Entity::MergeFrom(from.entity());
  }
  if (from.latitude_deg() != 0) {
    set_latitude_deg(from.latitude_deg());
  }
  if (from.longitude_deg() != 0) {
    set_longitude_deg(from.longitude_deg());
  }
  if (from.elevation() != 0) {
    set_elevation(from.elevation());
  }
  if (from.heading_deg() != 0) {
    set_heading_deg(from.heading_deg());
  }
  if (from.surface_axis_equatorial() != 0) {
    set_surface_axis_equatorial(from.surface_axis_equatorial());
  }
  if (from.surface_axis_polar() != 0) {
    set_surface_axis_polar(from.surface_axis_polar());
  }
  if (from.surface_model() != 0) {
    set_surface_model(from.surface_model());
  }
}

void SphericalCoordinates::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.SphericalCoordinates)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SphericalCoordinates::CopyFrom(const SphericalCoordinates& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.SphericalCoordinates)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SphericalCoordinates::IsInitialized() const {
  return true;
}

void SphericalCoordinates::Swap(SphericalCoordinates* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SphericalCoordinates::InternalSwap(SphericalCoordinates* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(entity_, other->entity_);
  swap(latitude_deg_, other->latitude_deg_);
  swap(longitude_deg_, other->longitude_deg_);
  swap(elevation_, other->elevation_);
  swap(heading_deg_, other->heading_deg_);
  swap(surface_axis_equatorial_, other->surface_axis_equatorial_);
  swap(surface_axis_polar_, other->surface_axis_polar_);
  swap(surface_model_, other->surface_model_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SphericalCoordinates::GetMetadata() const {
  protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fspherical_5fcoordinates_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::SphericalCoordinates* Arena::CreateMaybeMessage< ::gz::msgs::SphericalCoordinates >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::SphericalCoordinates >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)