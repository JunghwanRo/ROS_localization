// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/atmosphere.proto

#include "gz/msgs/atmosphere.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Atmosphere", Atmosphere)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class AtmosphereDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Atmosphere>
      _instance;
} _Atmosphere_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fatmosphere_2eproto {
static void InitDefaultsAtmosphere() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Atmosphere_default_instance_;
    new (ptr) ::gz::msgs::Atmosphere();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Atmosphere::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_Atmosphere =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsAtmosphere}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Atmosphere.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Atmosphere, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Atmosphere, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Atmosphere, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Atmosphere, temperature_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Atmosphere, pressure_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Atmosphere, mass_density_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Atmosphere, enable_atmosphere_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Atmosphere)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Atmosphere_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/atmosphere.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\030gz/msgs/atmosphere.proto\022\007gz.msgs\032\024gz/"
      "msgs/header.proto\"\304\001\n\nAtmosphere\022\037\n\006head"
      "er\030\001 \001(\0132\017.gz.msgs.Header\022&\n\004type\030\002 \001(\0162"
      "\030.gz.msgs.Atmosphere.Type\022\023\n\013temperature"
      "\030\003 \001(\001\022\020\n\010pressure\030\004 \001(\001\022\024\n\014mass_density"
      "\030\005 \001(\001\022\031\n\021enable_atmosphere\030\006 \001(\010\"\025\n\004Typ"
      "e\022\r\n\tADIABATIC\020\000B\037\n\013com.gz.msgsB\020Atmosph"
      "ereProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 297);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/atmosphere.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fatmosphere_2eproto
namespace gz {
namespace msgs {
const ::google::protobuf::EnumDescriptor* Atmosphere_Type_descriptor() {
  protobuf_gz_2fmsgs_2fatmosphere_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gz_2fmsgs_2fatmosphere_2eproto::file_level_enum_descriptors[0];
}
bool Atmosphere_Type_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Atmosphere_Type Atmosphere::ADIABATIC;
const Atmosphere_Type Atmosphere::Type_MIN;
const Atmosphere_Type Atmosphere::Type_MAX;
const int Atmosphere::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Atmosphere::InitAsDefaultInstance() {
  ::gz::msgs::_Atmosphere_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void Atmosphere::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Atmosphere::kHeaderFieldNumber;
const int Atmosphere::kTypeFieldNumber;
const int Atmosphere::kTemperatureFieldNumber;
const int Atmosphere::kPressureFieldNumber;
const int Atmosphere::kMassDensityFieldNumber;
const int Atmosphere::kEnableAtmosphereFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Atmosphere::Atmosphere()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fatmosphere_2eproto::scc_info_Atmosphere.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Atmosphere)
}
Atmosphere::Atmosphere(const Atmosphere& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&temperature_, &from.temperature_,
    static_cast<size_t>(reinterpret_cast<char*>(&mass_density_) -
    reinterpret_cast<char*>(&temperature_)) + sizeof(mass_density_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Atmosphere)
}

void Atmosphere::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&mass_density_) -
      reinterpret_cast<char*>(&header_)) + sizeof(mass_density_));
}

Atmosphere::~Atmosphere() {
  // @@protoc_insertion_point(destructor:gz.msgs.Atmosphere)
  SharedDtor();
}

void Atmosphere::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void Atmosphere::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Atmosphere::descriptor() {
  ::protobuf_gz_2fmsgs_2fatmosphere_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fatmosphere_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Atmosphere& Atmosphere::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fatmosphere_2eproto::scc_info_Atmosphere.base);
  return *internal_default_instance();
}


void Atmosphere::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Atmosphere)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&temperature_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&mass_density_) -
      reinterpret_cast<char*>(&temperature_)) + sizeof(mass_density_));
  _internal_metadata_.Clear();
}

bool Atmosphere::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Atmosphere)
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

      // .gz.msgs.Atmosphere.Type type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::gz::msgs::Atmosphere_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double temperature = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &temperature_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double pressure = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &pressure_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double mass_density = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &mass_density_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool enable_atmosphere = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &enable_atmosphere_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Atmosphere)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Atmosphere)
  return false;
#undef DO_
}

void Atmosphere::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Atmosphere)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.Atmosphere.Type type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // double temperature = 3;
  if (this->temperature() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->temperature(), output);
  }

  // double pressure = 4;
  if (this->pressure() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->pressure(), output);
  }

  // double mass_density = 5;
  if (this->mass_density() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->mass_density(), output);
  }

  // bool enable_atmosphere = 6;
  if (this->enable_atmosphere() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->enable_atmosphere(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Atmosphere)
}

::google::protobuf::uint8* Atmosphere::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Atmosphere)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.Atmosphere.Type type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // double temperature = 3;
  if (this->temperature() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->temperature(), target);
  }

  // double pressure = 4;
  if (this->pressure() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->pressure(), target);
  }

  // double mass_density = 5;
  if (this->mass_density() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->mass_density(), target);
  }

  // bool enable_atmosphere = 6;
  if (this->enable_atmosphere() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->enable_atmosphere(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Atmosphere)
  return target;
}

size_t Atmosphere::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Atmosphere)
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

  // double temperature = 3;
  if (this->temperature() != 0) {
    total_size += 1 + 8;
  }

  // double pressure = 4;
  if (this->pressure() != 0) {
    total_size += 1 + 8;
  }

  // .gz.msgs.Atmosphere.Type type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // bool enable_atmosphere = 6;
  if (this->enable_atmosphere() != 0) {
    total_size += 1 + 1;
  }

  // double mass_density = 5;
  if (this->mass_density() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Atmosphere::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Atmosphere)
  GOOGLE_DCHECK_NE(&from, this);
  const Atmosphere* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Atmosphere>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Atmosphere)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Atmosphere)
    MergeFrom(*source);
  }
}

void Atmosphere::MergeFrom(const Atmosphere& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Atmosphere)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.temperature() != 0) {
    set_temperature(from.temperature());
  }
  if (from.pressure() != 0) {
    set_pressure(from.pressure());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.enable_atmosphere() != 0) {
    set_enable_atmosphere(from.enable_atmosphere());
  }
  if (from.mass_density() != 0) {
    set_mass_density(from.mass_density());
  }
}

void Atmosphere::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Atmosphere)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Atmosphere::CopyFrom(const Atmosphere& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Atmosphere)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Atmosphere::IsInitialized() const {
  return true;
}

void Atmosphere::Swap(Atmosphere* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Atmosphere::InternalSwap(Atmosphere* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(temperature_, other->temperature_);
  swap(pressure_, other->pressure_);
  swap(type_, other->type_);
  swap(enable_atmosphere_, other->enable_atmosphere_);
  swap(mass_density_, other->mass_density_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Atmosphere::GetMetadata() const {
  protobuf_gz_2fmsgs_2fatmosphere_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fatmosphere_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Atmosphere* Arena::CreateMaybeMessage< ::gz::msgs::Atmosphere >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Atmosphere >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)