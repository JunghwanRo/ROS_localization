// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/marker.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fmarker_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fmarker_2eproto

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
#include "gz/msgs/time.pb.h"
#include "gz/msgs/pose.pb.h"
#include "gz/msgs/vector3d.pb.h"
#include "gz/msgs/material.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fmarker_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fmarker_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fmarker_2eproto
namespace gz {
namespace msgs {
class Marker;
class MarkerDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern MarkerDefaultTypeInternal _Marker_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Marker* Arena::CreateMaybeMessage<::gz::msgs::Marker>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

enum Marker_Type {
  Marker_Type_NONE = 0,
  Marker_Type_BOX = 1,
  Marker_Type_CYLINDER = 2,
  Marker_Type_LINE_LIST = 4,
  Marker_Type_LINE_STRIP = 3,
  Marker_Type_POINTS = 5,
  Marker_Type_SPHERE = 6,
  Marker_Type_TEXT = 7,
  Marker_Type_TRIANGLE_FAN = 8,
  Marker_Type_TRIANGLE_LIST = 9,
  Marker_Type_TRIANGLE_STRIP = 10,
  Marker_Type_CONE = 11,
  Marker_Type_ARROW = 12,
  Marker_Type_AXIS = 13,
  Marker_Type_CAPSULE = 14,
  Marker_Type_ELLIPSOID = 15,
  Marker_Type_Marker_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Marker_Type_Marker_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
IGNITION_MSGS_VISIBLE bool Marker_Type_IsValid(int value);
const Marker_Type Marker_Type_Type_MIN = Marker_Type_NONE;
const Marker_Type Marker_Type_Type_MAX = Marker_Type_ELLIPSOID;
const int Marker_Type_Type_ARRAYSIZE = Marker_Type_Type_MAX + 1;

IGNITION_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Marker_Type_descriptor();
inline const ::std::string& Marker_Type_Name(Marker_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Marker_Type_descriptor(), value);
}
inline bool Marker_Type_Parse(
    const ::std::string& name, Marker_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Marker_Type>(
    Marker_Type_descriptor(), name, value);
}
enum Marker_Visibility {
  Marker_Visibility_GUI = 0,
  Marker_Visibility_ALL = 1,
  Marker_Visibility_Marker_Visibility_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Marker_Visibility_Marker_Visibility_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
IGNITION_MSGS_VISIBLE bool Marker_Visibility_IsValid(int value);
const Marker_Visibility Marker_Visibility_Visibility_MIN = Marker_Visibility_GUI;
const Marker_Visibility Marker_Visibility_Visibility_MAX = Marker_Visibility_ALL;
const int Marker_Visibility_Visibility_ARRAYSIZE = Marker_Visibility_Visibility_MAX + 1;

IGNITION_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Marker_Visibility_descriptor();
inline const ::std::string& Marker_Visibility_Name(Marker_Visibility value) {
  return ::google::protobuf::internal::NameOfEnum(
    Marker_Visibility_descriptor(), value);
}
inline bool Marker_Visibility_Parse(
    const ::std::string& name, Marker_Visibility* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Marker_Visibility>(
    Marker_Visibility_descriptor(), name, value);
}
enum Marker_Action {
  Marker_Action_ADD_MODIFY = 0,
  Marker_Action_DELETE_MARKER = 1,
  Marker_Action_DELETE_ALL = 2,
  Marker_Action_Marker_Action_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Marker_Action_Marker_Action_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
IGNITION_MSGS_VISIBLE bool Marker_Action_IsValid(int value);
const Marker_Action Marker_Action_Action_MIN = Marker_Action_ADD_MODIFY;
const Marker_Action Marker_Action_Action_MAX = Marker_Action_DELETE_ALL;
const int Marker_Action_Action_ARRAYSIZE = Marker_Action_Action_MAX + 1;

IGNITION_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Marker_Action_descriptor();
inline const ::std::string& Marker_Action_Name(Marker_Action value) {
  return ::google::protobuf::internal::NameOfEnum(
    Marker_Action_descriptor(), value);
}
inline bool Marker_Action_Parse(
    const ::std::string& name, Marker_Action* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Marker_Action>(
    Marker_Action_descriptor(), name, value);
}
// ===================================================================

class IGNITION_MSGS_VISIBLE Marker : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Marker) */ {
 public:
  Marker();
  virtual ~Marker();

  Marker(const Marker& from);

  inline Marker& operator=(const Marker& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Marker(Marker&& from) noexcept
    : Marker() {
    *this = ::std::move(from);
  }

  inline Marker& operator=(Marker&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Marker& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Marker* internal_default_instance() {
    return reinterpret_cast<const Marker*>(
               &_Marker_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Marker* other);
  friend void swap(Marker& a, Marker& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Marker* New() const final {
    return CreateMaybeMessage<Marker>(NULL);
  }

  Marker* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Marker>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Marker& from);
  void MergeFrom(const Marker& from);
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
  void InternalSwap(Marker* other);
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

  typedef Marker_Type Type;
  static const Type NONE =
    Marker_Type_NONE;
  static const Type BOX =
    Marker_Type_BOX;
  static const Type CYLINDER =
    Marker_Type_CYLINDER;
  static const Type LINE_LIST =
    Marker_Type_LINE_LIST;
  static const Type LINE_STRIP =
    Marker_Type_LINE_STRIP;
  static const Type POINTS =
    Marker_Type_POINTS;
  static const Type SPHERE =
    Marker_Type_SPHERE;
  static const Type TEXT =
    Marker_Type_TEXT;
  static const Type TRIANGLE_FAN =
    Marker_Type_TRIANGLE_FAN;
  static const Type TRIANGLE_LIST =
    Marker_Type_TRIANGLE_LIST;
  static const Type TRIANGLE_STRIP =
    Marker_Type_TRIANGLE_STRIP;
  static const Type CONE =
    Marker_Type_CONE;
  static const Type ARROW =
    Marker_Type_ARROW;
  static const Type AXIS =
    Marker_Type_AXIS;
  static const Type CAPSULE =
    Marker_Type_CAPSULE;
  static const Type ELLIPSOID =
    Marker_Type_ELLIPSOID;
  static inline bool Type_IsValid(int value) {
    return Marker_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Marker_Type_Type_MIN;
  static const Type Type_MAX =
    Marker_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Marker_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Marker_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Marker_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Marker_Type_Parse(name, value);
  }

  typedef Marker_Visibility Visibility;
  static const Visibility GUI =
    Marker_Visibility_GUI;
  static const Visibility ALL =
    Marker_Visibility_ALL;
  static inline bool Visibility_IsValid(int value) {
    return Marker_Visibility_IsValid(value);
  }
  static const Visibility Visibility_MIN =
    Marker_Visibility_Visibility_MIN;
  static const Visibility Visibility_MAX =
    Marker_Visibility_Visibility_MAX;
  static const int Visibility_ARRAYSIZE =
    Marker_Visibility_Visibility_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Visibility_descriptor() {
    return Marker_Visibility_descriptor();
  }
  static inline const ::std::string& Visibility_Name(Visibility value) {
    return Marker_Visibility_Name(value);
  }
  static inline bool Visibility_Parse(const ::std::string& name,
      Visibility* value) {
    return Marker_Visibility_Parse(name, value);
  }

  typedef Marker_Action Action;
  static const Action ADD_MODIFY =
    Marker_Action_ADD_MODIFY;
  static const Action DELETE_MARKER =
    Marker_Action_DELETE_MARKER;
  static const Action DELETE_ALL =
    Marker_Action_DELETE_ALL;
  static inline bool Action_IsValid(int value) {
    return Marker_Action_IsValid(value);
  }
  static const Action Action_MIN =
    Marker_Action_Action_MIN;
  static const Action Action_MAX =
    Marker_Action_Action_MAX;
  static const int Action_ARRAYSIZE =
    Marker_Action_Action_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Action_descriptor() {
    return Marker_Action_descriptor();
  }
  static inline const ::std::string& Action_Name(Action value) {
    return Marker_Action_Name(value);
  }
  static inline bool Action_Parse(const ::std::string& name,
      Action* value) {
    return Marker_Action_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .gz.msgs.Vector3d point = 11;
  int point_size() const;
  void clear_point();
  static const int kPointFieldNumber = 11;
  ::gz::msgs::Vector3d* mutable_point(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >*
      mutable_point();
  const ::gz::msgs::Vector3d& point(int index) const;
  ::gz::msgs::Vector3d* add_point();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >&
      point() const;

  // repeated .gz.msgs.Material materials = 15;
  int materials_size() const;
  void clear_materials();
  static const int kMaterialsFieldNumber = 15;
  ::gz::msgs::Material* mutable_materials(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Material >*
      mutable_materials();
  const ::gz::msgs::Material& materials(int index) const;
  ::gz::msgs::Material* add_materials();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Material >&
      materials() const;

  // string ns = 3;
  void clear_ns();
  static const int kNsFieldNumber = 3;
  const ::std::string& ns() const;
  void set_ns(const ::std::string& value);
  #if LANG_CXX11
  void set_ns(::std::string&& value);
  #endif
  void set_ns(const char* value);
  void set_ns(const char* value, size_t size);
  ::std::string* mutable_ns();
  ::std::string* release_ns();
  void set_allocated_ns(::std::string* ns);

  // string text = 12;
  void clear_text();
  static const int kTextFieldNumber = 12;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  #if LANG_CXX11
  void set_text(::std::string&& value);
  #endif
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // string parent = 13;
  void clear_parent();
  static const int kParentFieldNumber = 13;
  const ::std::string& parent() const;
  void set_parent(const ::std::string& value);
  #if LANG_CXX11
  void set_parent(::std::string&& value);
  #endif
  void set_parent(const char* value);
  void set_parent(const char* value, size_t size);
  ::std::string* mutable_parent();
  ::std::string* release_parent();
  void set_allocated_parent(::std::string* parent);

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

  // .gz.msgs.Time lifetime = 7;
  bool has_lifetime() const;
  void clear_lifetime();
  static const int kLifetimeFieldNumber = 7;
  private:
  const ::gz::msgs::Time& _internal_lifetime() const;
  public:
  const ::gz::msgs::Time& lifetime() const;
  ::gz::msgs::Time* release_lifetime();
  ::gz::msgs::Time* mutable_lifetime();
  void set_allocated_lifetime(::gz::msgs::Time* lifetime);

  // .gz.msgs.Pose pose = 8;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 8;
  private:
  const ::gz::msgs::Pose& _internal_pose() const;
  public:
  const ::gz::msgs::Pose& pose() const;
  ::gz::msgs::Pose* release_pose();
  ::gz::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gz::msgs::Pose* pose);

  // .gz.msgs.Vector3d scale = 9;
  bool has_scale() const;
  void clear_scale();
  static const int kScaleFieldNumber = 9;
  private:
  const ::gz::msgs::Vector3d& _internal_scale() const;
  public:
  const ::gz::msgs::Vector3d& scale() const;
  ::gz::msgs::Vector3d* release_scale();
  ::gz::msgs::Vector3d* mutable_scale();
  void set_allocated_scale(::gz::msgs::Vector3d* scale);

  // .gz.msgs.Material material = 10;
  bool has_material() const;
  void clear_material();
  static const int kMaterialFieldNumber = 10;
  private:
  const ::gz::msgs::Material& _internal_material() const;
  public:
  const ::gz::msgs::Material& material() const;
  ::gz::msgs::Material* release_material();
  ::gz::msgs::Material* mutable_material();
  void set_allocated_material(::gz::msgs::Material* material);

  // .gz.msgs.Marker.Action action = 2;
  void clear_action();
  static const int kActionFieldNumber = 2;
  ::gz::msgs::Marker_Action action() const;
  void set_action(::gz::msgs::Marker_Action value);

  // int32 layer = 5;
  void clear_layer();
  static const int kLayerFieldNumber = 5;
  ::google::protobuf::int32 layer() const;
  void set_layer(::google::protobuf::int32 value);

  // uint64 id = 4;
  void clear_id();
  static const int kIdFieldNumber = 4;
  ::google::protobuf::uint64 id() const;
  void set_id(::google::protobuf::uint64 value);

  // .gz.msgs.Marker.Type type = 6;
  void clear_type();
  static const int kTypeFieldNumber = 6;
  ::gz::msgs::Marker_Type type() const;
  void set_type(::gz::msgs::Marker_Type value);

  // .gz.msgs.Marker.Visibility visibility = 14;
  void clear_visibility();
  static const int kVisibilityFieldNumber = 14;
  ::gz::msgs::Marker_Visibility visibility() const;
  void set_visibility(::gz::msgs::Marker_Visibility value);

  // @@protoc_insertion_point(class_scope:gz.msgs.Marker)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d > point_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Material > materials_;
  ::google::protobuf::internal::ArenaStringPtr ns_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  ::google::protobuf::internal::ArenaStringPtr parent_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Time* lifetime_;
  ::gz::msgs::Pose* pose_;
  ::gz::msgs::Vector3d* scale_;
  ::gz::msgs::Material* material_;
  int action_;
  ::google::protobuf::int32 layer_;
  ::google::protobuf::uint64 id_;
  int type_;
  int visibility_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fmarker_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Marker

// .gz.msgs.Header header = 1;
inline bool Marker::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Marker::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Marker::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Marker::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Marker.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Marker::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.header)
  return header_;
}
inline void Marker::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Marker.header)
}

// .gz.msgs.Marker.Action action = 2;
inline void Marker::clear_action() {
  action_ = 0;
}
inline ::gz::msgs::Marker_Action Marker::action() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.action)
  return static_cast< ::gz::msgs::Marker_Action >(action_);
}
inline void Marker::set_action(::gz::msgs::Marker_Action value) {
  
  action_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Marker.action)
}

// string ns = 3;
inline void Marker::clear_ns() {
  ns_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Marker::ns() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.ns)
  return ns_.GetNoArena();
}
inline void Marker::set_ns(const ::std::string& value) {
  
  ns_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Marker.ns)
}
#if LANG_CXX11
inline void Marker::set_ns(::std::string&& value) {
  
  ns_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Marker.ns)
}
#endif
inline void Marker::set_ns(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ns_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Marker.ns)
}
inline void Marker::set_ns(const char* value, size_t size) {
  
  ns_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Marker.ns)
}
inline ::std::string* Marker::mutable_ns() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.ns)
  return ns_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Marker::release_ns() {
  // @@protoc_insertion_point(field_release:gz.msgs.Marker.ns)
  
  return ns_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Marker::set_allocated_ns(::std::string* ns) {
  if (ns != NULL) {
    
  } else {
    
  }
  ns_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ns);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Marker.ns)
}

// uint64 id = 4;
inline void Marker::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Marker::id() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.id)
  return id_;
}
inline void Marker::set_id(::google::protobuf::uint64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Marker.id)
}

// int32 layer = 5;
inline void Marker::clear_layer() {
  layer_ = 0;
}
inline ::google::protobuf::int32 Marker::layer() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.layer)
  return layer_;
}
inline void Marker::set_layer(::google::protobuf::int32 value) {
  
  layer_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Marker.layer)
}

// .gz.msgs.Marker.Type type = 6;
inline void Marker::clear_type() {
  type_ = 0;
}
inline ::gz::msgs::Marker_Type Marker::type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.type)
  return static_cast< ::gz::msgs::Marker_Type >(type_);
}
inline void Marker::set_type(::gz::msgs::Marker_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Marker.type)
}

// .gz.msgs.Time lifetime = 7;
inline bool Marker::has_lifetime() const {
  return this != internal_default_instance() && lifetime_ != NULL;
}
inline const ::gz::msgs::Time& Marker::_internal_lifetime() const {
  return *lifetime_;
}
inline const ::gz::msgs::Time& Marker::lifetime() const {
  const ::gz::msgs::Time* p = lifetime_;
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.lifetime)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Time*>(
      &::gz::msgs::_Time_default_instance_);
}
inline ::gz::msgs::Time* Marker::release_lifetime() {
  // @@protoc_insertion_point(field_release:gz.msgs.Marker.lifetime)
  
  ::gz::msgs::Time* temp = lifetime_;
  lifetime_ = NULL;
  return temp;
}
inline ::gz::msgs::Time* Marker::mutable_lifetime() {
  
  if (lifetime_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Time>(GetArenaNoVirtual());
    lifetime_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.lifetime)
  return lifetime_;
}
inline void Marker::set_allocated_lifetime(::gz::msgs::Time* lifetime) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(lifetime_);
  }
  if (lifetime) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      lifetime = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, lifetime, submessage_arena);
    }
    
  } else {
    
  }
  lifetime_ = lifetime;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Marker.lifetime)
}

// .gz.msgs.Pose pose = 8;
inline bool Marker::has_pose() const {
  return this != internal_default_instance() && pose_ != NULL;
}
inline const ::gz::msgs::Pose& Marker::_internal_pose() const {
  return *pose_;
}
inline const ::gz::msgs::Pose& Marker::pose() const {
  const ::gz::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.pose)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Pose*>(
      &::gz::msgs::_Pose_default_instance_);
}
inline ::gz::msgs::Pose* Marker::release_pose() {
  // @@protoc_insertion_point(field_release:gz.msgs.Marker.pose)
  
  ::gz::msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline ::gz::msgs::Pose* Marker::mutable_pose() {
  
  if (pose_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.pose)
  return pose_;
}
inline void Marker::set_allocated_pose(::gz::msgs::Pose* pose) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Marker.pose)
}

// .gz.msgs.Vector3d scale = 9;
inline bool Marker::has_scale() const {
  return this != internal_default_instance() && scale_ != NULL;
}
inline const ::gz::msgs::Vector3d& Marker::_internal_scale() const {
  return *scale_;
}
inline const ::gz::msgs::Vector3d& Marker::scale() const {
  const ::gz::msgs::Vector3d* p = scale_;
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.scale)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Vector3d*>(
      &::gz::msgs::_Vector3d_default_instance_);
}
inline ::gz::msgs::Vector3d* Marker::release_scale() {
  // @@protoc_insertion_point(field_release:gz.msgs.Marker.scale)
  
  ::gz::msgs::Vector3d* temp = scale_;
  scale_ = NULL;
  return temp;
}
inline ::gz::msgs::Vector3d* Marker::mutable_scale() {
  
  if (scale_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Vector3d>(GetArenaNoVirtual());
    scale_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.scale)
  return scale_;
}
inline void Marker::set_allocated_scale(::gz::msgs::Vector3d* scale) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Marker.scale)
}

// .gz.msgs.Material material = 10;
inline bool Marker::has_material() const {
  return this != internal_default_instance() && material_ != NULL;
}
inline const ::gz::msgs::Material& Marker::_internal_material() const {
  return *material_;
}
inline const ::gz::msgs::Material& Marker::material() const {
  const ::gz::msgs::Material* p = material_;
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.material)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Material*>(
      &::gz::msgs::_Material_default_instance_);
}
inline ::gz::msgs::Material* Marker::release_material() {
  // @@protoc_insertion_point(field_release:gz.msgs.Marker.material)
  
  ::gz::msgs::Material* temp = material_;
  material_ = NULL;
  return temp;
}
inline ::gz::msgs::Material* Marker::mutable_material() {
  
  if (material_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Material>(GetArenaNoVirtual());
    material_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.material)
  return material_;
}
inline void Marker::set_allocated_material(::gz::msgs::Material* material) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Marker.material)
}

// repeated .gz.msgs.Vector3d point = 11;
inline int Marker::point_size() const {
  return point_.size();
}
inline ::gz::msgs::Vector3d* Marker::mutable_point(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.point)
  return point_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >*
Marker::mutable_point() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.Marker.point)
  return &point_;
}
inline const ::gz::msgs::Vector3d& Marker::point(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.point)
  return point_.Get(index);
}
inline ::gz::msgs::Vector3d* Marker::add_point() {
  // @@protoc_insertion_point(field_add:gz.msgs.Marker.point)
  return point_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Vector3d >&
Marker::point() const {
  // @@protoc_insertion_point(field_list:gz.msgs.Marker.point)
  return point_;
}

// string text = 12;
inline void Marker::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Marker::text() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.text)
  return text_.GetNoArena();
}
inline void Marker::set_text(const ::std::string& value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Marker.text)
}
#if LANG_CXX11
inline void Marker::set_text(::std::string&& value) {
  
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Marker.text)
}
#endif
inline void Marker::set_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Marker.text)
}
inline void Marker::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Marker.text)
}
inline ::std::string* Marker::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Marker::release_text() {
  // @@protoc_insertion_point(field_release:gz.msgs.Marker.text)
  
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Marker::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Marker.text)
}

// string parent = 13;
inline void Marker::clear_parent() {
  parent_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Marker::parent() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.parent)
  return parent_.GetNoArena();
}
inline void Marker::set_parent(const ::std::string& value) {
  
  parent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Marker.parent)
}
#if LANG_CXX11
inline void Marker::set_parent(::std::string&& value) {
  
  parent_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Marker.parent)
}
#endif
inline void Marker::set_parent(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  parent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Marker.parent)
}
inline void Marker::set_parent(const char* value, size_t size) {
  
  parent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Marker.parent)
}
inline ::std::string* Marker::mutable_parent() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.parent)
  return parent_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Marker::release_parent() {
  // @@protoc_insertion_point(field_release:gz.msgs.Marker.parent)
  
  return parent_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Marker::set_allocated_parent(::std::string* parent) {
  if (parent != NULL) {
    
  } else {
    
  }
  parent_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), parent);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Marker.parent)
}

// .gz.msgs.Marker.Visibility visibility = 14;
inline void Marker::clear_visibility() {
  visibility_ = 0;
}
inline ::gz::msgs::Marker_Visibility Marker::visibility() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.visibility)
  return static_cast< ::gz::msgs::Marker_Visibility >(visibility_);
}
inline void Marker::set_visibility(::gz::msgs::Marker_Visibility value) {
  
  visibility_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Marker.visibility)
}

// repeated .gz.msgs.Material materials = 15;
inline int Marker::materials_size() const {
  return materials_.size();
}
inline ::gz::msgs::Material* Marker::mutable_materials(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.Marker.materials)
  return materials_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Material >*
Marker::mutable_materials() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.Marker.materials)
  return &materials_;
}
inline const ::gz::msgs::Material& Marker::materials(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.Marker.materials)
  return materials_.Get(index);
}
inline ::gz::msgs::Material* Marker::add_materials() {
  // @@protoc_insertion_point(field_add:gz.msgs.Marker.materials)
  return materials_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Material >&
Marker::materials() const {
  // @@protoc_insertion_point(field_list:gz.msgs.Marker.materials)
  return materials_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gz::msgs::Marker_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gz::msgs::Marker_Type>() {
  return ::gz::msgs::Marker_Type_descriptor();
}
template <> struct is_proto_enum< ::gz::msgs::Marker_Visibility> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gz::msgs::Marker_Visibility>() {
  return ::gz::msgs::Marker_Visibility_descriptor();
}
template <> struct is_proto_enum< ::gz::msgs::Marker_Action> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gz::msgs::Marker_Action>() {
  return ::gz::msgs::Marker_Action_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fmarker_2eproto