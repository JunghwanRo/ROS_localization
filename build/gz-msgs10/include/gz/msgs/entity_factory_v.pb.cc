// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/entity_factory_v.proto

#include "gz/msgs/entity_factory_v.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.EntityFactory_V", EntityFactory_V)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto ::google::protobuf::internal::SCCInfo<5> scc_info_EntityFactory;
}  // namespace protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class EntityFactory_VDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EntityFactory_V>
      _instance;
} _EntityFactory_V_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fentity_5ffactory_5fv_2eproto {
static void InitDefaultsEntityFactory_V() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_EntityFactory_V_default_instance_;
    new (ptr) ::gz::msgs::EntityFactory_V();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::EntityFactory_V::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<2> scc_info_EntityFactory_V =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsEntityFactory_V}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto::scc_info_EntityFactory.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EntityFactory_V.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory_V, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory_V, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityFactory_V, data_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::EntityFactory_V)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_EntityFactory_V_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/entity_factory_v.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\036gz/msgs/entity_factory_v.proto\022\007gz.msg"
      "s\032\034gz/msgs/entity_factory.proto\032\024gz/msgs"
      "/header.proto\"X\n\017EntityFactory_V\022\037\n\006head"
      "er\030\001 \001(\0132\017.gz.msgs.Header\022$\n\004data\030\002 \003(\0132"
      "\026.gz.msgs.EntityFactoryB#\n\013com.gz.msgsB\024"
      "EntityFactoryVProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 228);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/entity_factory_v.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fentity_5ffactory_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fentity_5ffactory_5fv_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void EntityFactory_V::InitAsDefaultInstance() {
  ::gz::msgs::_EntityFactory_V_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void EntityFactory_V::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void EntityFactory_V::clear_data() {
  data_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EntityFactory_V::kHeaderFieldNumber;
const int EntityFactory_V::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EntityFactory_V::EntityFactory_V()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fentity_5ffactory_5fv_2eproto::scc_info_EntityFactory_V.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.EntityFactory_V)
}
EntityFactory_V::EntityFactory_V(const EntityFactory_V& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:gz.msgs.EntityFactory_V)
}

void EntityFactory_V::SharedCtor() {
  header_ = NULL;
}

EntityFactory_V::~EntityFactory_V() {
  // @@protoc_insertion_point(destructor:gz.msgs.EntityFactory_V)
  SharedDtor();
}

void EntityFactory_V::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void EntityFactory_V::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EntityFactory_V::descriptor() {
  ::protobuf_gz_2fmsgs_2fentity_5ffactory_5fv_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fentity_5ffactory_5fv_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EntityFactory_V& EntityFactory_V::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fentity_5ffactory_5fv_2eproto::scc_info_EntityFactory_V.base);
  return *internal_default_instance();
}


void EntityFactory_V::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.EntityFactory_V)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  _internal_metadata_.Clear();
}

bool EntityFactory_V::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.EntityFactory_V)
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

      // repeated .gz.msgs.EntityFactory data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_data()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.EntityFactory_V)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.EntityFactory_V)
  return false;
#undef DO_
}

void EntityFactory_V::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.EntityFactory_V)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // repeated .gz.msgs.EntityFactory data = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->data_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->data(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.EntityFactory_V)
}

::google::protobuf::uint8* EntityFactory_V::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.EntityFactory_V)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // repeated .gz.msgs.EntityFactory data = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->data_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->data(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.EntityFactory_V)
  return target;
}

size_t EntityFactory_V::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.EntityFactory_V)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .gz.msgs.EntityFactory data = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->data_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->data(static_cast<int>(i)));
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

void EntityFactory_V::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.EntityFactory_V)
  GOOGLE_DCHECK_NE(&from, this);
  const EntityFactory_V* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EntityFactory_V>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.EntityFactory_V)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.EntityFactory_V)
    MergeFrom(*source);
  }
}

void EntityFactory_V::MergeFrom(const EntityFactory_V& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.EntityFactory_V)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
}

void EntityFactory_V::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.EntityFactory_V)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EntityFactory_V::CopyFrom(const EntityFactory_V& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.EntityFactory_V)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntityFactory_V::IsInitialized() const {
  return true;
}

void EntityFactory_V::Swap(EntityFactory_V* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EntityFactory_V::InternalSwap(EntityFactory_V* other) {
  using std::swap;
  CastToBase(&data_)->InternalSwap(CastToBase(&other->data_));
  swap(header_, other->header_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EntityFactory_V::GetMetadata() const {
  protobuf_gz_2fmsgs_2fentity_5ffactory_5fv_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fentity_5ffactory_5fv_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::EntityFactory_V* Arena::CreateMaybeMessage< ::gz::msgs::EntityFactory_V >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::EntityFactory_V >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
