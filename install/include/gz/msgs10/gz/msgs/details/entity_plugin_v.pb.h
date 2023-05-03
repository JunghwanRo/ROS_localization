// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/entity_plugin_v.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "gz/msgs/entity.pb.h"
#include "gz/msgs/header.pb.h"
#include "gz/msgs/plugin.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto {
// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void IGNITION_MSGS_VISIBLE AddDescriptors();
}  // namespace protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto
namespace gz {
namespace msgs {
class EntityPlugin_V;
class EntityPlugin_VDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern EntityPlugin_VDefaultTypeInternal _EntityPlugin_V_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::EntityPlugin_V* Arena::CreateMaybeMessage<::gz::msgs::EntityPlugin_V>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE EntityPlugin_V : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.EntityPlugin_V) */ {
 public:
  EntityPlugin_V();
  virtual ~EntityPlugin_V();

  EntityPlugin_V(const EntityPlugin_V& from);

  inline EntityPlugin_V& operator=(const EntityPlugin_V& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EntityPlugin_V(EntityPlugin_V&& from) noexcept
    : EntityPlugin_V() {
    *this = ::std::move(from);
  }

  inline EntityPlugin_V& operator=(EntityPlugin_V&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const EntityPlugin_V& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EntityPlugin_V* internal_default_instance() {
    return reinterpret_cast<const EntityPlugin_V*>(
               &_EntityPlugin_V_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(EntityPlugin_V* other);
  friend void swap(EntityPlugin_V& a, EntityPlugin_V& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EntityPlugin_V* New() const final {
    return CreateMaybeMessage<EntityPlugin_V>(NULL);
  }

  EntityPlugin_V* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<EntityPlugin_V>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const EntityPlugin_V& from);
  void MergeFrom(const EntityPlugin_V& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EntityPlugin_V* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .gz.msgs.Plugin plugins = 3;
  int plugins_size() const;
  void clear_plugins();
  static const int kPluginsFieldNumber = 3;
  ::gz::msgs::Plugin* mutable_plugins(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >*
      mutable_plugins();
  const ::gz::msgs::Plugin& plugins(int index) const;
  ::gz::msgs::Plugin* add_plugins();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >&
      plugins() const;

  // .gz.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  private:
  const ::gz::msgs::Header& _internal_header() const;
  public:
  const ::gz::msgs::Header& header() const;
  ::gz::msgs::Header* release_header();
  ::gz::msgs::Header* mutable_header();
  void set_allocated_header(::gz::msgs::Header* header);

  // .gz.msgs.Entity entity = 2;
  bool has_entity() const;
  void clear_entity();
  static const int kEntityFieldNumber = 2;
  private:
  const ::gz::msgs::Entity& _internal_entity() const;
  public:
  const ::gz::msgs::Entity& entity() const;
  ::gz::msgs::Entity* release_entity();
  ::gz::msgs::Entity* mutable_entity();
  void set_allocated_entity(::gz::msgs::Entity* entity);

  // @@protoc_insertion_point(class_scope:gz.msgs.EntityPlugin_V)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin > plugins_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Entity* entity_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EntityPlugin_V

// .gz.msgs.Header header = 1;
inline bool EntityPlugin_V::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& EntityPlugin_V::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& EntityPlugin_V::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.EntityPlugin_V.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* EntityPlugin_V::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.EntityPlugin_V.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* EntityPlugin_V::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.EntityPlugin_V.header)
  return header_;
}
inline void EntityPlugin_V::set_allocated_header(::gz::msgs::Header* header) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(header_);
  }
  if (header) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      header = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.EntityPlugin_V.header)
}

// .gz.msgs.Entity entity = 2;
inline bool EntityPlugin_V::has_entity() const {
  return this != internal_default_instance() && entity_ != NULL;
}
inline const ::gz::msgs::Entity& EntityPlugin_V::_internal_entity() const {
  return *entity_;
}
inline const ::gz::msgs::Entity& EntityPlugin_V::entity() const {
  const ::gz::msgs::Entity* p = entity_;
  // @@protoc_insertion_point(field_get:gz.msgs.EntityPlugin_V.entity)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Entity*>(
      &::gz::msgs::_Entity_default_instance_);
}
inline ::gz::msgs::Entity* EntityPlugin_V::release_entity() {
  // @@protoc_insertion_point(field_release:gz.msgs.EntityPlugin_V.entity)
  
  ::gz::msgs::Entity* temp = entity_;
  entity_ = NULL;
  return temp;
}
inline ::gz::msgs::Entity* EntityPlugin_V::mutable_entity() {
  
  if (entity_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Entity>(GetArenaNoVirtual());
    entity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.EntityPlugin_V.entity)
  return entity_;
}
inline void EntityPlugin_V::set_allocated_entity(::gz::msgs::Entity* entity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(entity_);
  }
  if (entity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      entity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, entity, submessage_arena);
    }
    
  } else {
    
  }
  entity_ = entity;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.EntityPlugin_V.entity)
}

// repeated .gz.msgs.Plugin plugins = 3;
inline int EntityPlugin_V::plugins_size() const {
  return plugins_.size();
}
inline ::gz::msgs::Plugin* EntityPlugin_V::mutable_plugins(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.EntityPlugin_V.plugins)
  return plugins_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >*
EntityPlugin_V::mutable_plugins() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.EntityPlugin_V.plugins)
  return &plugins_;
}
inline const ::gz::msgs::Plugin& EntityPlugin_V::plugins(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.EntityPlugin_V.plugins)
  return plugins_.Get(index);
}
inline ::gz::msgs::Plugin* EntityPlugin_V::add_plugins() {
  // @@protoc_insertion_point(field_add:gz.msgs.EntityPlugin_V.plugins)
  return plugins_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >&
EntityPlugin_V::plugins() const {
  // @@protoc_insertion_point(field_list:gz.msgs.EntityPlugin_V.plugins)
  return plugins_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fentity_5fplugin_5fv_2eproto
