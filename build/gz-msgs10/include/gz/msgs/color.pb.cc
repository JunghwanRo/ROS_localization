// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/color.proto

#include "gz/msgs/color.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Color", Color)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class ColorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Color>
      _instance;
} _Color_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fcolor_2eproto {
static void InitDefaultsColor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Color_default_instance_;
    new (ptr) ::gz::msgs::Color();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Color::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_Color =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsColor}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Color.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Color, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Color, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Color, r_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Color, g_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Color, b_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Color, a_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Color)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Color_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/color.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\023gz/msgs/color.proto\022\007gz.msgs\032\024gz/msgs/"
      "header.proto\"T\n\005Color\022\037\n\006header\030\001 \001(\0132\017."
      "gz.msgs.Header\022\t\n\001r\030\002 \001(\002\022\t\n\001g\030\003 \001(\002\022\t\n\001"
      "b\030\004 \001(\002\022\t\n\001a\030\005 \001(\002B\032\n\013com.gz.msgsB\013Color"
      "Protosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 174);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/color.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fcolor_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void Color::InitAsDefaultInstance() {
  ::gz::msgs::_Color_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void Color::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Color::kHeaderFieldNumber;
const int Color::kRFieldNumber;
const int Color::kGFieldNumber;
const int Color::kBFieldNumber;
const int Color::kAFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Color::Color()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fcolor_2eproto::scc_info_Color.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Color)
}
Color::Color(const Color& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&r_, &from.r_,
    static_cast<size_t>(reinterpret_cast<char*>(&a_) -
    reinterpret_cast<char*>(&r_)) + sizeof(a_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Color)
}

void Color::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&a_) -
      reinterpret_cast<char*>(&header_)) + sizeof(a_));
}

Color::~Color() {
  // @@protoc_insertion_point(destructor:gz.msgs.Color)
  SharedDtor();
}

void Color::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void Color::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Color::descriptor() {
  ::protobuf_gz_2fmsgs_2fcolor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fcolor_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Color& Color::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fcolor_2eproto::scc_info_Color.base);
  return *internal_default_instance();
}


void Color::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Color)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&r_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&a_) -
      reinterpret_cast<char*>(&r_)) + sizeof(a_));
  _internal_metadata_.Clear();
}

bool Color::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Color)
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

      // float r = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &r_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float g = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &g_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float b = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &b_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float a = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u /* 45 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &a_)));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Color)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Color)
  return false;
#undef DO_
}

void Color::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Color)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // float r = 2;
  if (this->r() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->r(), output);
  }

  // float g = 3;
  if (this->g() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->g(), output);
  }

  // float b = 4;
  if (this->b() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->b(), output);
  }

  // float a = 5;
  if (this->a() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->a(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Color)
}

::google::protobuf::uint8* Color::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Color)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // float r = 2;
  if (this->r() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->r(), target);
  }

  // float g = 3;
  if (this->g() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->g(), target);
  }

  // float b = 4;
  if (this->b() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->b(), target);
  }

  // float a = 5;
  if (this->a() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->a(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Color)
  return target;
}

size_t Color::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Color)
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

  // float r = 2;
  if (this->r() != 0) {
    total_size += 1 + 4;
  }

  // float g = 3;
  if (this->g() != 0) {
    total_size += 1 + 4;
  }

  // float b = 4;
  if (this->b() != 0) {
    total_size += 1 + 4;
  }

  // float a = 5;
  if (this->a() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Color::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Color)
  GOOGLE_DCHECK_NE(&from, this);
  const Color* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Color>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Color)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Color)
    MergeFrom(*source);
  }
}

void Color::MergeFrom(const Color& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Color)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.r() != 0) {
    set_r(from.r());
  }
  if (from.g() != 0) {
    set_g(from.g());
  }
  if (from.b() != 0) {
    set_b(from.b());
  }
  if (from.a() != 0) {
    set_a(from.a());
  }
}

void Color::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Color)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Color::CopyFrom(const Color& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Color)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Color::IsInitialized() const {
  return true;
}

void Color::Swap(Color* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Color::InternalSwap(Color* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(r_, other->r_);
  swap(g_, other->g_);
  swap(b_, other->b_);
  swap(a_, other->a_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Color::GetMetadata() const {
  protobuf_gz_2fmsgs_2fcolor_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fcolor_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Color* Arena::CreateMaybeMessage< ::gz::msgs::Color >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Color >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
