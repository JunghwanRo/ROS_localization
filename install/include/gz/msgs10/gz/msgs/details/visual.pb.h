// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/visual.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fvisual_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fvisual_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "gz/msgs/header.pb.h"
#include "gz/msgs/pose.pb.h"
#include "gz/msgs/geometry.pb.h"
#include "gz/msgs/material.pb.h"
#include "gz/msgs/plugin.pb.h"
#include "gz/msgs/vector3d.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fvisual_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fvisual_2eproto {
// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void IGNITION_MSGS_VISIBLE AddDescriptors();
}  // namespace protobuf_gz_2fmsgs_2fvisual_2eproto
namespace gz {
namespace msgs {
class Visual;
class VisualDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern VisualDefaultTypeInternal _Visual_default_instance_;
class Visual_Meta;
class Visual_MetaDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern Visual_MetaDefaultTypeInternal _Visual_Meta_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Visual* Arena::CreateMaybeMessage<::gz::msgs::Visual>(Arena*);
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Visual_Meta* Arena::CreateMaybeMessage<::gz::msgs::Visual_Meta>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

enum Visual_Type {
  Visual_Type_ENTITY = 0,
  Visual_Type_MODEL = 1,
  Visual_Type_LINK = 2,
  Visual_Type_VISUAL = 3,
  Visual_Type_COLLISION = 4,
  Visual_Type_SENSOR = 5,
  Visual_Type_GUI = 6,
  Visual_Type_PHYSICS = 7,
  Visual_Type_Visual_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Visual_Type_Visual_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
IGNITION_MSGS_VISIBLE bool Visual_Type_IsValid(int value);
const Visual_Type Visual_Type_Type_MIN = Visual_Type_ENTITY;
const Visual_Type Visual_Type_Type_MAX = Visual_Type_PHYSICS;
const int Visual_Type_Type_ARRAYSIZE = Visual_Type_Type_MAX + 1;

IGNITION_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Visual_Type_descriptor();
inline const ::std::string& Visual_Type_Name(Visual_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Visual_Type_descriptor(), value);
}
inline bool Visual_Type_Parse(
    const ::std::string& name, Visual_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Visual_Type>(
    Visual_Type_descriptor(), name, value);
}
// ===================================================================

class IGNITION_MSGS_VISIBLE Visual_Meta : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Visual.Meta) */ {
 public:
  Visual_Meta();
  virtual ~Visual_Meta();

  Visual_Meta(const Visual_Meta& from);

  inline Visual_Meta& operator=(const Visual_Meta& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Visual_Meta(Visual_Meta&& from) noexcept
    : Visual_Meta() {
    *this = ::std::move(from);
  }

  inline Visual_Meta& operator=(Visual_Meta&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Visual_Meta& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Visual_Meta* internal_default_instance() {
    return reinterpret_cast<const Visual_Meta*>(
               &_Visual_Meta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Visual_Meta* other);
  friend void swap(Visual_Meta& a, Visual_Meta& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Visual_Meta* New() const final {
    return CreateMaybeMessage<Visual_Meta>(NULL);
  }

  Visual_Meta* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Visual_Meta>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Visual_Meta& from);
  void MergeFrom(const Visual_Meta& from);
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
  void InternalSwap(Visual_Meta* other);
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

  // int32 layer = 1;
  void clear_layer();
  static const int kLayerFieldNumber = 1;
  ::google::protobuf::int32 layer() const;
  void set_layer(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:gz.msgs.Visual.Meta)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 layer_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fvisual_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class IGNITION_MSGS_VISIBLE Visual : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Visual) */ {
 public:
  Visual();
  virtual ~Visual();

  Visual(const Visual& from);

  inline Visual& operator=(const Visual& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Visual(Visual&& from) noexcept
    : Visual() {
    *this = ::std::move(from);
  }

  inline Visual& operator=(Visual&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Visual& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Visual* internal_default_instance() {
    return reinterpret_cast<const Visual*>(
               &_Visual_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Visual* other);
  friend void swap(Visual& a, Visual& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Visual* New() const final {
    return CreateMaybeMessage<Visual>(NULL);
  }

  Visual* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Visual>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Visual& from);
  void MergeFrom(const Visual& from);
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
  void InternalSwap(Visual* other);
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

  typedef Visual_Meta Meta;

  typedef Visual_Type Type;
  static const Type ENTITY =
    Visual_Type_ENTITY;
  static const Type MODEL =
    Visual_Type_MODEL;
  static const Type LINK =
    Visual_Type_LINK;
  static const Type VISUAL =
    Visual_Type_VISUAL;
  static const Type COLLISION =
    Visual_Type_COLLISION;
  static const Type SENSOR =
    Visual_Type_SENSOR;
  static const Type GUI =
    Visual_Type_GUI;
  static const Type PHYSICS =
    Visual_Type_PHYSICS;
  static inline bool Type_IsValid(int value) {
    return Visual_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Visual_Type_Type_MIN;
  static const Type Type_MAX =
    Visual_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Visual_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Visual_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Visual_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Visual_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .gz.msgs.Plugin plugin = 15;
  int plugin_size() const;
  void clear_plugin();
  static const int kPluginFieldNumber = 15;
  ::gz::msgs::Plugin* mutable_plugin(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >*
      mutable_plugin();
  const ::gz::msgs::Plugin& plugin(int index) const;
  ::gz::msgs::Plugin* add_plugin();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >&
      plugin() const;

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string parent_name = 4;
  void clear_parent_name();
  static const int kParentNameFieldNumber = 4;
  const ::std::string& parent_name() const;
  void set_parent_name(const ::std::string& value);
  #if LANG_CXX11
  void set_parent_name(::std::string&& value);
  #endif
  void set_parent_name(const char* value);
  void set_parent_name(const char* value, size_t size);
  ::std::string* mutable_parent_name();
  ::std::string* release_parent_name();
  void set_allocated_parent_name(::std::string* parent_name);

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

  // .gz.msgs.Pose pose = 9;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 9;
  private:
  const ::gz::msgs::Pose& _internal_pose() const;
  public:
  const ::gz::msgs::Pose& pose() const;
  ::gz::msgs::Pose* release_pose();
  ::gz::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gz::msgs::Pose* pose);

  // .gz.msgs.Geometry geometry = 10;
  bool has_geometry() const;
  void clear_geometry();
  static const int kGeometryFieldNumber = 10;
  private:
  const ::gz::msgs::Geometry& _internal_geometry() const;
  public:
  const ::gz::msgs::Geometry& geometry() const;
  ::gz::msgs::Geometry* release_geometry();
  ::gz::msgs::Geometry* mutable_geometry();
  void set_allocated_geometry(::gz::msgs::Geometry* geometry);

  // .gz.msgs.Material material = 11;
  bool has_material() const;
  void clear_material();
  static const int kMaterialFieldNumber = 11;
  private:
  const ::gz::msgs::Material& _internal_material() const;
  public:
  const ::gz::msgs::Material& material() const;
  ::gz::msgs::Material* release_material();
  ::gz::msgs::Material* mutable_material();
  void set_allocated_material(::gz::msgs::Material* material);

  // .gz.msgs.Vector3d scale = 16;
  bool has_scale() const;
  void clear_scale();
  static const int kScaleFieldNumber = 16;
  private:
  const ::gz::msgs::Vector3d& _internal_scale() const;
  public:
  const ::gz::msgs::Vector3d& scale() const;
  ::gz::msgs::Vector3d* release_scale();
  ::gz::msgs::Vector3d* mutable_scale();
  void set_allocated_scale(::gz::msgs::Vector3d* scale);

  // .gz.msgs.Visual.Meta meta = 17;
  bool has_meta() const;
  void clear_meta();
  static const int kMetaFieldNumber = 17;
  private:
  const ::gz::msgs::Visual_Meta& _internal_meta() const;
  public:
  const ::gz::msgs::Visual_Meta& meta() const;
  ::gz::msgs::Visual_Meta* release_meta();
  ::gz::msgs::Visual_Meta* mutable_meta();
  void set_allocated_meta(::gz::msgs::Visual_Meta* meta);

  // uint32 id = 3;
  void clear_id();
  static const int kIdFieldNumber = 3;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // uint32 parent_id = 5;
  void clear_parent_id();
  static const int kParentIdFieldNumber = 5;
  ::google::protobuf::uint32 parent_id() const;
  void set_parent_id(::google::protobuf::uint32 value);

  // double transparency = 7;
  void clear_transparency();
  static const int kTransparencyFieldNumber = 7;
  double transparency() const;
  void set_transparency(double value);

  // double laser_retro = 8;
  void clear_laser_retro();
  static const int kLaserRetroFieldNumber = 8;
  double laser_retro() const;
  void set_laser_retro(double value);

  // bool cast_shadows = 6;
  void clear_cast_shadows();
  static const int kCastShadowsFieldNumber = 6;
  bool cast_shadows() const;
  void set_cast_shadows(bool value);

  // bool visible = 12;
  void clear_visible();
  static const int kVisibleFieldNumber = 12;
  bool visible() const;
  void set_visible(bool value);

  // bool delete_me = 13;
  void clear_delete_me();
  static const int kDeleteMeFieldNumber = 13;
  bool delete_me() const;
  void set_delete_me(bool value);

  // bool is_static = 14;
  void clear_is_static();
  static const int kIsStaticFieldNumber = 14;
  bool is_static() const;
  void set_is_static(bool value);

  // .gz.msgs.Visual.Type type = 18;
  void clear_type();
  static const int kTypeFieldNumber = 18;
  ::gz::msgs::Visual_Type type() const;
  void set_type(::gz::msgs::Visual_Type value);

  // @@protoc_insertion_point(class_scope:gz.msgs.Visual)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin > plugin_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr parent_name_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Pose* pose_;
  ::gz::msgs::Geometry* geometry_;
  ::gz::msgs::Material* material_;
  ::gz::msgs::Vector3d* scale_;
  ::gz::msgs::Visual_Meta* meta_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 parent_id_;
  double transparency_;
  double laser_retro_;
  bool cast_shadows_;
  bool visible_;
  bool delete_me_;
  bool is_static_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fvisual_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Visual_Meta

// int32 layer = 1;
inline void Visual_Meta::clear_layer() {
  layer_ = 0;
}
inline ::google::protobuf::int32 Visual_Meta::layer() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.Meta.layer)
  return layer_;
}
inline void Visual_Meta::set_layer(::google::protobuf::int32 value) {
  
  layer_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.Meta.layer)
}

// -------------------------------------------------------------------

// Visual

// .gz.msgs.Header header = 1;
inline bool Visual::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Visual::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Visual::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Visual::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Visual.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Visual::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Visual.header)
  return header_;
}
inline void Visual::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Visual.header)
}

// string name = 2;
inline void Visual::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Visual::name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.name)
  return name_.GetNoArena();
}
inline void Visual::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.name)
}
#if LANG_CXX11
inline void Visual::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Visual.name)
}
#endif
inline void Visual::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Visual.name)
}
inline void Visual::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Visual.name)
}
inline ::std::string* Visual::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Visual.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Visual::release_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.Visual.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Visual::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Visual.name)
}

// uint32 id = 3;
inline void Visual::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 Visual::id() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.id)
  return id_;
}
inline void Visual::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.id)
}

// string parent_name = 4;
inline void Visual::clear_parent_name() {
  parent_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Visual::parent_name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.parent_name)
  return parent_name_.GetNoArena();
}
inline void Visual::set_parent_name(const ::std::string& value) {
  
  parent_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.parent_name)
}
#if LANG_CXX11
inline void Visual::set_parent_name(::std::string&& value) {
  
  parent_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Visual.parent_name)
}
#endif
inline void Visual::set_parent_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  parent_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Visual.parent_name)
}
inline void Visual::set_parent_name(const char* value, size_t size) {
  
  parent_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Visual.parent_name)
}
inline ::std::string* Visual::mutable_parent_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Visual.parent_name)
  return parent_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Visual::release_parent_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.Visual.parent_name)
  
  return parent_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Visual::set_allocated_parent_name(::std::string* parent_name) {
  if (parent_name != NULL) {
    
  } else {
    
  }
  parent_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), parent_name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Visual.parent_name)
}

// uint32 parent_id = 5;
inline void Visual::clear_parent_id() {
  parent_id_ = 0u;
}
inline ::google::protobuf::uint32 Visual::parent_id() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.parent_id)
  return parent_id_;
}
inline void Visual::set_parent_id(::google::protobuf::uint32 value) {
  
  parent_id_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.parent_id)
}

// bool cast_shadows = 6;
inline void Visual::clear_cast_shadows() {
  cast_shadows_ = false;
}
inline bool Visual::cast_shadows() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.cast_shadows)
  return cast_shadows_;
}
inline void Visual::set_cast_shadows(bool value) {
  
  cast_shadows_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.cast_shadows)
}

// double transparency = 7;
inline void Visual::clear_transparency() {
  transparency_ = 0;
}
inline double Visual::transparency() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.transparency)
  return transparency_;
}
inline void Visual::set_transparency(double value) {
  
  transparency_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.transparency)
}

// double laser_retro = 8;
inline void Visual::clear_laser_retro() {
  laser_retro_ = 0;
}
inline double Visual::laser_retro() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.laser_retro)
  return laser_retro_;
}
inline void Visual::set_laser_retro(double value) {
  
  laser_retro_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.laser_retro)
}

// .gz.msgs.Pose pose = 9;
inline bool Visual::has_pose() const {
  return this != internal_default_instance() && pose_ != NULL;
}
inline const ::gz::msgs::Pose& Visual::_internal_pose() const {
  return *pose_;
}
inline const ::gz::msgs::Pose& Visual::pose() const {
  const ::gz::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.pose)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Pose*>(
      &::gz::msgs::_Pose_default_instance_);
}
inline ::gz::msgs::Pose* Visual::release_pose() {
  // @@protoc_insertion_point(field_release:gz.msgs.Visual.pose)
  
  ::gz::msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline ::gz::msgs::Pose* Visual::mutable_pose() {
  
  if (pose_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Visual.pose)
  return pose_;
}
inline void Visual::set_allocated_pose(::gz::msgs::Pose* pose) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(pose_);
  }
  if (pose) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      pose = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    
  } else {
    
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Visual.pose)
}

// .gz.msgs.Geometry geometry = 10;
inline bool Visual::has_geometry() const {
  return this != internal_default_instance() && geometry_ != NULL;
}
inline const ::gz::msgs::Geometry& Visual::_internal_geometry() const {
  return *geometry_;
}
inline const ::gz::msgs::Geometry& Visual::geometry() const {
  const ::gz::msgs::Geometry* p = geometry_;
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.geometry)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Geometry*>(
      &::gz::msgs::_Geometry_default_instance_);
}
inline ::gz::msgs::Geometry* Visual::release_geometry() {
  // @@protoc_insertion_point(field_release:gz.msgs.Visual.geometry)
  
  ::gz::msgs::Geometry* temp = geometry_;
  geometry_ = NULL;
  return temp;
}
inline ::gz::msgs::Geometry* Visual::mutable_geometry() {
  
  if (geometry_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Geometry>(GetArenaNoVirtual());
    geometry_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Visual.geometry)
  return geometry_;
}
inline void Visual::set_allocated_geometry(::gz::msgs::Geometry* geometry) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(geometry_);
  }
  if (geometry) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      geometry = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, geometry, submessage_arena);
    }
    
  } else {
    
  }
  geometry_ = geometry;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Visual.geometry)
}

// .gz.msgs.Material material = 11;
inline bool Visual::has_material() const {
  return this != internal_default_instance() && material_ != NULL;
}
inline const ::gz::msgs::Material& Visual::_internal_material() const {
  return *material_;
}
inline const ::gz::msgs::Material& Visual::material() const {
  const ::gz::msgs::Material* p = material_;
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.material)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Material*>(
      &::gz::msgs::_Material_default_instance_);
}
inline ::gz::msgs::Material* Visual::release_material() {
  // @@protoc_insertion_point(field_release:gz.msgs.Visual.material)
  
  ::gz::msgs::Material* temp = material_;
  material_ = NULL;
  return temp;
}
inline ::gz::msgs::Material* Visual::mutable_material() {
  
  if (material_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Material>(GetArenaNoVirtual());
    material_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Visual.material)
  return material_;
}
inline void Visual::set_allocated_material(::gz::msgs::Material* material) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(material_);
  }
  if (material) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      material = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, material, submessage_arena);
    }
    
  } else {
    
  }
  material_ = material;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Visual.material)
}

// bool visible = 12;
inline void Visual::clear_visible() {
  visible_ = false;
}
inline bool Visual::visible() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.visible)
  return visible_;
}
inline void Visual::set_visible(bool value) {
  
  visible_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.visible)
}

// bool delete_me = 13;
inline void Visual::clear_delete_me() {
  delete_me_ = false;
}
inline bool Visual::delete_me() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.delete_me)
  return delete_me_;
}
inline void Visual::set_delete_me(bool value) {
  
  delete_me_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.delete_me)
}

// bool is_static = 14;
inline void Visual::clear_is_static() {
  is_static_ = false;
}
inline bool Visual::is_static() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.is_static)
  return is_static_;
}
inline void Visual::set_is_static(bool value) {
  
  is_static_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.is_static)
}

// repeated .gz.msgs.Plugin plugin = 15;
inline int Visual::plugin_size() const {
  return plugin_.size();
}
inline ::gz::msgs::Plugin* Visual::mutable_plugin(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.Visual.plugin)
  return plugin_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >*
Visual::mutable_plugin() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.Visual.plugin)
  return &plugin_;
}
inline const ::gz::msgs::Plugin& Visual::plugin(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.plugin)
  return plugin_.Get(index);
}
inline ::gz::msgs::Plugin* Visual::add_plugin() {
  // @@protoc_insertion_point(field_add:gz.msgs.Visual.plugin)
  return plugin_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >&
Visual::plugin() const {
  // @@protoc_insertion_point(field_list:gz.msgs.Visual.plugin)
  return plugin_;
}

// .gz.msgs.Vector3d scale = 16;
inline bool Visual::has_scale() const {
  return this != internal_default_instance() && scale_ != NULL;
}
inline const ::gz::msgs::Vector3d& Visual::_internal_scale() const {
  return *scale_;
}
inline const ::gz::msgs::Vector3d& Visual::scale() const {
  const ::gz::msgs::Vector3d* p = scale_;
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.scale)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Vector3d*>(
      &::gz::msgs::_Vector3d_default_instance_);
}
inline ::gz::msgs::Vector3d* Visual::release_scale() {
  // @@protoc_insertion_point(field_release:gz.msgs.Visual.scale)
  
  ::gz::msgs::Vector3d* temp = scale_;
  scale_ = NULL;
  return temp;
}
inline ::gz::msgs::Vector3d* Visual::mutable_scale() {
  
  if (scale_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Vector3d>(GetArenaNoVirtual());
    scale_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Visual.scale)
  return scale_;
}
inline void Visual::set_allocated_scale(::gz::msgs::Vector3d* scale) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(scale_);
  }
  if (scale) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      scale = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, scale, submessage_arena);
    }
    
  } else {
    
  }
  scale_ = scale;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Visual.scale)
}

// .gz.msgs.Visual.Meta meta = 17;
inline bool Visual::has_meta() const {
  return this != internal_default_instance() && meta_ != NULL;
}
inline void Visual::clear_meta() {
  if (GetArenaNoVirtual() == NULL && meta_ != NULL) {
    delete meta_;
  }
  meta_ = NULL;
}
inline const ::gz::msgs::Visual_Meta& Visual::_internal_meta() const {
  return *meta_;
}
inline const ::gz::msgs::Visual_Meta& Visual::meta() const {
  const ::gz::msgs::Visual_Meta* p = meta_;
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.meta)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Visual_Meta*>(
      &::gz::msgs::_Visual_Meta_default_instance_);
}
inline ::gz::msgs::Visual_Meta* Visual::release_meta() {
  // @@protoc_insertion_point(field_release:gz.msgs.Visual.meta)
  
  ::gz::msgs::Visual_Meta* temp = meta_;
  meta_ = NULL;
  return temp;
}
inline ::gz::msgs::Visual_Meta* Visual::mutable_meta() {
  
  if (meta_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Visual_Meta>(GetArenaNoVirtual());
    meta_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Visual.meta)
  return meta_;
}
inline void Visual::set_allocated_meta(::gz::msgs::Visual_Meta* meta) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete meta_;
  }
  if (meta) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      meta = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, meta, submessage_arena);
    }
    
  } else {
    
  }
  meta_ = meta;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Visual.meta)
}

// .gz.msgs.Visual.Type type = 18;
inline void Visual::clear_type() {
  type_ = 0;
}
inline ::gz::msgs::Visual_Type Visual::type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Visual.type)
  return static_cast< ::gz::msgs::Visual_Type >(type_);
}
inline void Visual::set_type(::gz::msgs::Visual_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Visual.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gz::msgs::Visual_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gz::msgs::Visual_Type>() {
  return ::gz::msgs::Visual_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fvisual_2eproto
