// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/rest_logout.proto

#include "gz/msgs/rest_logout.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.RestLogout", RestLogout)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class RestLogoutDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RestLogout>
      _instance;
} _RestLogout_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2frest_5flogout_2eproto {
static void InitDefaultsRestLogout() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_RestLogout_default_instance_;
    new (ptr) ::gz::msgs::RestLogout();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::RestLogout::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_RestLogout =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsRestLogout}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RestLogout.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RestLogout, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RestLogout, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RestLogout, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::RestLogout, url_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::RestLogout)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_RestLogout_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/rest_logout.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\031gz/msgs/rest_logout.proto\022\007gz.msgs\032\024gz"
      "/msgs/header.proto\"F\n\nRestLogout\022\037\n\006head"
      "er\030\001 \001(\0132\017.gz.msgs.Header\022\n\n\002id\030\002 \001(\r\022\013\n"
      "\003url\030\003 \001(\tB\037\n\013com.gz.msgsB\020RestLogoutPro"
      "tosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 171);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/rest_logout.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2frest_5flogout_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void RestLogout::InitAsDefaultInstance() {
  ::gz::msgs::_RestLogout_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void RestLogout::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RestLogout::kHeaderFieldNumber;
const int RestLogout::kIdFieldNumber;
const int RestLogout::kUrlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RestLogout::RestLogout()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2frest_5flogout_2eproto::scc_info_RestLogout.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.RestLogout)
}
RestLogout::RestLogout(const RestLogout& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.url().size() > 0) {
    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:gz.msgs.RestLogout)
}

void RestLogout::SharedCtor() {
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&header_)) + sizeof(id_));
}

RestLogout::~RestLogout() {
  // @@protoc_insertion_point(destructor:gz.msgs.RestLogout)
  SharedDtor();
}

void RestLogout::SharedDtor() {
  url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void RestLogout::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RestLogout::descriptor() {
  ::protobuf_gz_2fmsgs_2frest_5flogout_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2frest_5flogout_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RestLogout& RestLogout::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2frest_5flogout_2eproto::scc_info_RestLogout.base);
  return *internal_default_instance();
}


void RestLogout::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.RestLogout)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  id_ = 0u;
  _internal_metadata_.Clear();
}

bool RestLogout::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.RestLogout)
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

      // uint32 id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string url = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->url().data(), static_cast<int>(this->url().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.RestLogout.url"));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.RestLogout)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.RestLogout)
  return false;
#undef DO_
}

void RestLogout::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.RestLogout)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->id(), output);
  }

  // string url = 3;
  if (this->url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->url().data(), static_cast<int>(this->url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.RestLogout.url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->url(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.RestLogout)
}

::google::protobuf::uint8* RestLogout::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.RestLogout)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->id(), target);
  }

  // string url = 3;
  if (this->url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->url().data(), static_cast<int>(this->url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.RestLogout.url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->url(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.RestLogout)
  return target;
}

size_t RestLogout::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.RestLogout)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string url = 3;
  if (this->url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->url());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RestLogout::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.RestLogout)
  GOOGLE_DCHECK_NE(&from, this);
  const RestLogout* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RestLogout>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.RestLogout)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.RestLogout)
    MergeFrom(*source);
  }
}

void RestLogout::MergeFrom(const RestLogout& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.RestLogout)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.url().size() > 0) {

    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
}

void RestLogout::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.RestLogout)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RestLogout::CopyFrom(const RestLogout& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.RestLogout)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RestLogout::IsInitialized() const {
  return true;
}

void RestLogout::Swap(RestLogout* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RestLogout::InternalSwap(RestLogout* other) {
  using std::swap;
  url_.Swap(&other->url_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(id_, other->id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RestLogout::GetMetadata() const {
  protobuf_gz_2fmsgs_2frest_5flogout_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2frest_5flogout_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::RestLogout* Arena::CreateMaybeMessage< ::gz::msgs::RestLogout >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::RestLogout >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
