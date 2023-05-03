// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/magnetometer.proto

#include "gz/msgs/magnetometer.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Magnetometer", Magnetometer)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fvector3d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fvector3d_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Vector3d;
}  // namespace protobuf_gz_2fmsgs_2fvector3d_2eproto
namespace gz {
namespace msgs {
class MagnetometerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Magnetometer>
      _instance;
} _Magnetometer_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fmagnetometer_2eproto {
static void InitDefaultsMagnetometer() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Magnetometer_default_instance_;
    new (ptr) ::gz::msgs::Magnetometer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Magnetometer::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_Magnetometer =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsMagnetometer}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fvector3d_2eproto::scc_info_Vector3d.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Magnetometer.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Magnetometer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Magnetometer, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Magnetometer, field_tesla_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Magnetometer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Magnetometer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/magnetometer.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\032gz/msgs/magnetometer.proto\022\007gz.msgs\032\024g"
      "z/msgs/header.proto\032\026gz/msgs/vector3d.pr"
      "oto\"W\n\014Magnetometer\022\037\n\006header\030\001 \001(\0132\017.gz"
      ".msgs.Header\022&\n\013field_tesla\030\002 \001(\0132\021.gz.m"
      "sgs.Vector3dB!\n\013com.gz.msgsB\022Magnetomete"
      "rProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 215);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/magnetometer.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fvector3d_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fmagnetometer_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void Magnetometer::InitAsDefaultInstance() {
  ::gz::msgs::_Magnetometer_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_Magnetometer_default_instance_._instance.get_mutable()->field_tesla_ = const_cast< ::gz::msgs::Vector3d*>(
      ::gz::msgs::Vector3d::internal_default_instance());
}
void Magnetometer::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void Magnetometer::clear_field_tesla() {
  if (GetArenaNoVirtual() == NULL && field_tesla_ != NULL) {
    delete field_tesla_;
  }
  field_tesla_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Magnetometer::kHeaderFieldNumber;
const int Magnetometer::kFieldTeslaFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Magnetometer::Magnetometer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fmagnetometer_2eproto::scc_info_Magnetometer.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Magnetometer)
}
Magnetometer::Magnetometer(const Magnetometer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_field_tesla()) {
    field_tesla_ = new ::gz::msgs::Vector3d(*from.field_tesla_);
  } else {
    field_tesla_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Magnetometer)
}

void Magnetometer::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&field_tesla_) -
      reinterpret_cast<char*>(&header_)) + sizeof(field_tesla_));
}

Magnetometer::~Magnetometer() {
  // @@protoc_insertion_point(destructor:gz.msgs.Magnetometer)
  SharedDtor();
}

void Magnetometer::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete field_tesla_;
}

void Magnetometer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Magnetometer::descriptor() {
  ::protobuf_gz_2fmsgs_2fmagnetometer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fmagnetometer_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Magnetometer& Magnetometer::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fmagnetometer_2eproto::scc_info_Magnetometer.base);
  return *internal_default_instance();
}


void Magnetometer::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Magnetometer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && field_tesla_ != NULL) {
    delete field_tesla_;
  }
  field_tesla_ = NULL;
  _internal_metadata_.Clear();
}

bool Magnetometer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Magnetometer)
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

      // .gz.msgs.Vector3d field_tesla = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_field_tesla()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Magnetometer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Magnetometer)
  return false;
#undef DO_
}

void Magnetometer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Magnetometer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.Vector3d field_tesla = 2;
  if (this->has_field_tesla()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_field_tesla(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Magnetometer)
}

::google::protobuf::uint8* Magnetometer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Magnetometer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.Vector3d field_tesla = 2;
  if (this->has_field_tesla()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_field_tesla(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Magnetometer)
  return target;
}

size_t Magnetometer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Magnetometer)
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

  // .gz.msgs.Vector3d field_tesla = 2;
  if (this->has_field_tesla()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *field_tesla_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Magnetometer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Magnetometer)
  GOOGLE_DCHECK_NE(&from, this);
  const Magnetometer* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Magnetometer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Magnetometer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Magnetometer)
    MergeFrom(*source);
  }
}

void Magnetometer::MergeFrom(const Magnetometer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Magnetometer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_field_tesla()) {
    mutable_field_tesla()->::gz::msgs::Vector3d::MergeFrom(from.field_tesla());
  }
}

void Magnetometer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Magnetometer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Magnetometer::CopyFrom(const Magnetometer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Magnetometer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Magnetometer::IsInitialized() const {
  return true;
}

void Magnetometer::Swap(Magnetometer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Magnetometer::InternalSwap(Magnetometer* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(field_tesla_, other->field_tesla_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Magnetometer::GetMetadata() const {
  protobuf_gz_2fmsgs_2fmagnetometer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fmagnetometer_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Magnetometer* Arena::CreateMaybeMessage< ::gz::msgs::Magnetometer >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Magnetometer >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
