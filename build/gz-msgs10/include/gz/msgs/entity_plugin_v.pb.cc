// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/entity_plugin_v.proto

#include "gz/msgs/entity_plugin_v.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.EntityPlugin_V", EntityPlugin_V)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fentity_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fentity_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Entity;
}  // namespace protobuf_gz_2fmsgs_2fentity_2eproto
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fplugin_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fplugin_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Plugin;
}  // namespace protobuf_gz_2fmsgs_2fplugin_2eproto
namespace gz {
namespace msgs {
class EntityPlugin_VDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EntityPlugin_V>
      _instance;
} _EntityPlugin_V_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto {
static void InitDefaultsEntityPlugin_V() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_EntityPlugin_V_default_instance_;
    new (ptr) ::gz::msgs::EntityPlugin_V();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::EntityPlugin_V::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<3> scc_info_EntityPlugin_V =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsEntityPlugin_V}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fentity_2eproto::scc_info_Entity.base,
      &protobuf_gz_2fmsgs_2fplugin_2eproto::scc_info_Plugin.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EntityPlugin_V.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityPlugin_V, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityPlugin_V, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityPlugin_V, entity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::EntityPlugin_V, plugins_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::EntityPlugin_V)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_EntityPlugin_V_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/entity_plugin_v.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\035gz/msgs/entity_plugin_v.proto\022\007gz.msgs"
      "\032\024gz/msgs/entity.proto\032\024gz/msgs/header.p"
      "roto\032\024gz/msgs/plugin.proto\"t\n\016EntityPlug"
      "in_V\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.Header\022\037\n"
      "\006entity\030\002 \001(\0132\017.gz.msgs.Entity\022 \n\007plugin"
      "s\030\003 \003(\0132\017.gz.msgs.PluginB\"\n\013com.gz.msgsB"
      "\023EntityPluginVProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 268);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/entity_plugin_v.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fentity_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fplugin_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void EntityPlugin_V::InitAsDefaultInstance() {
  ::gz::msgs::_EntityPlugin_V_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_EntityPlugin_V_default_instance_._instance.get_mutable()->entity_ = const_cast< ::gz::msgs::Entity*>(
      ::gz::msgs::Entity::internal_default_instance());
}
void EntityPlugin_V::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void EntityPlugin_V::clear_entity() {
  if (GetArenaNoVirtual() == NULL && entity_ != NULL) {
    delete entity_;
  }
  entity_ = NULL;
}
void EntityPlugin_V::clear_plugins() {
  plugins_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EntityPlugin_V::kHeaderFieldNumber;
const int EntityPlugin_V::kEntityFieldNumber;
const int EntityPlugin_V::kPluginsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EntityPlugin_V::EntityPlugin_V()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto::scc_info_EntityPlugin_V.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.EntityPlugin_V)
}
EntityPlugin_V::EntityPlugin_V(const EntityPlugin_V& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      plugins_(from.plugins_) {
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
  // @@protoc_insertion_point(copy_constructor:gz.msgs.EntityPlugin_V)
}

void EntityPlugin_V::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&entity_) -
      reinterpret_cast<char*>(&header_)) + sizeof(entity_));
}

EntityPlugin_V::~EntityPlugin_V() {
  // @@protoc_insertion_point(destructor:gz.msgs.EntityPlugin_V)
  SharedDtor();
}

void EntityPlugin_V::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete entity_;
}

void EntityPlugin_V::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EntityPlugin_V::descriptor() {
  ::protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EntityPlugin_V& EntityPlugin_V::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto::scc_info_EntityPlugin_V.base);
  return *internal_default_instance();
}


void EntityPlugin_V::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.EntityPlugin_V)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  plugins_.Clear();
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && entity_ != NULL) {
    delete entity_;
  }
  entity_ = NULL;
  _internal_metadata_.Clear();
}

bool EntityPlugin_V::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.EntityPlugin_V)
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

      // .gz.msgs.Entity entity = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_entity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Plugin plugins = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_plugins()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.EntityPlugin_V)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.EntityPlugin_V)
  return false;
#undef DO_
}

void EntityPlugin_V::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.EntityPlugin_V)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.Entity entity = 2;
  if (this->has_entity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_entity(), output);
  }

  // repeated .gz.msgs.Plugin plugins = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->plugins_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->plugins(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.EntityPlugin_V)
}

::google::protobuf::uint8* EntityPlugin_V::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.EntityPlugin_V)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.Entity entity = 2;
  if (this->has_entity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_entity(), deterministic, target);
  }

  // repeated .gz.msgs.Plugin plugins = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->plugins_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->plugins(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.EntityPlugin_V)
  return target;
}

size_t EntityPlugin_V::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.EntityPlugin_V)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .gz.msgs.Plugin plugins = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->plugins_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->plugins(static_cast<int>(i)));
    }
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.Entity entity = 2;
  if (this->has_entity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *entity_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EntityPlugin_V::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.EntityPlugin_V)
  GOOGLE_DCHECK_NE(&from, this);
  const EntityPlugin_V* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EntityPlugin_V>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.EntityPlugin_V)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.EntityPlugin_V)
    MergeFrom(*source);
  }
}

void EntityPlugin_V::MergeFrom(const EntityPlugin_V& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.EntityPlugin_V)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  plugins_.MergeFrom(from.plugins_);
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_entity()) {
    mutable_entity()->::gz::msgs::Entity::MergeFrom(from.entity());
  }
}

void EntityPlugin_V::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.EntityPlugin_V)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EntityPlugin_V::CopyFrom(const EntityPlugin_V& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.EntityPlugin_V)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntityPlugin_V::IsInitialized() const {
  return true;
}

void EntityPlugin_V::Swap(EntityPlugin_V* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EntityPlugin_V::InternalSwap(EntityPlugin_V* other) {
  using std::swap;
  CastToBase(&plugins_)->InternalSwap(CastToBase(&other->plugins_));
  swap(header_, other->header_);
  swap(entity_, other->entity_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EntityPlugin_V::GetMetadata() const {
  protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::EntityPlugin_V* Arena::CreateMaybeMessage< ::gz::msgs::EntityPlugin_V >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::EntityPlugin_V >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
