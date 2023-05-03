// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/any.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fany_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fany_2eproto

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
#include "gz/msgs/color.pb.h"
#include "gz/msgs/pose.pb.h"
#include "gz/msgs/quaternion.pb.h"
#include "gz/msgs/time.pb.h"
#include "gz/msgs/vector3d.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fany_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fany_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fany_2eproto
namespace gz {
namespace msgs {
class Any;
class AnyDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern AnyDefaultTypeInternal _Any_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Any* Arena::CreateMaybeMessage<::gz::msgs::Any>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

enum Any_ValueType {
  Any_ValueType_NONE = 0,
  Any_ValueType_DOUBLE = 1,
  Any_ValueType_INT32 = 2,
  Any_ValueType_STRING = 3,
  Any_ValueType_BOOLEAN = 4,
  Any_ValueType_VECTOR3D = 5,
  Any_ValueType_COLOR = 6,
  Any_ValueType_POSE3D = 7,
  Any_ValueType_QUATERNIOND = 8,
  Any_ValueType_TIME = 9,
  Any_ValueType_Any_ValueType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Any_ValueType_Any_ValueType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
IGNITION_MSGS_VISIBLE bool Any_ValueType_IsValid(int value);
const Any_ValueType Any_ValueType_ValueType_MIN = Any_ValueType_NONE;
const Any_ValueType Any_ValueType_ValueType_MAX = Any_ValueType_TIME;
const int Any_ValueType_ValueType_ARRAYSIZE = Any_ValueType_ValueType_MAX + 1;

IGNITION_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Any_ValueType_descriptor();
inline const ::std::string& Any_ValueType_Name(Any_ValueType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Any_ValueType_descriptor(), value);
}
inline bool Any_ValueType_Parse(
    const ::std::string& name, Any_ValueType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Any_ValueType>(
    Any_ValueType_descriptor(), name, value);
}
// ===================================================================

class IGNITION_MSGS_VISIBLE Any : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Any) */ {
 public:
  Any();
  virtual ~Any();

  Any(const Any& from);

  inline Any& operator=(const Any& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Any(Any&& from) noexcept
    : Any() {
    *this = ::std::move(from);
  }

  inline Any& operator=(Any&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Any& default_instance();

  enum ValueCase {
    kDoubleValue = 3,
    kIntValue = 4,
    kStringValue = 5,
    kBoolValue = 6,
    kVector3DValue = 7,
    kColorValue = 8,
    kPose3DValue = 9,
    kQuaternionValue = 10,
    kTimeValue = 11,
    VALUE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Any* internal_default_instance() {
    return reinterpret_cast<const Any*>(
               &_Any_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Any* other);
  friend void swap(Any& a, Any& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Any* New() const final {
    return CreateMaybeMessage<Any>(NULL);
  }

  Any* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Any>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Any& from);
  void MergeFrom(const Any& from);
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
  void InternalSwap(Any* other);
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

  typedef Any_ValueType ValueType;
  static const ValueType NONE =
    Any_ValueType_NONE;
  static const ValueType DOUBLE =
    Any_ValueType_DOUBLE;
  static const ValueType INT32 =
    Any_ValueType_INT32;
  static const ValueType STRING =
    Any_ValueType_STRING;
  static const ValueType BOOLEAN =
    Any_ValueType_BOOLEAN;
  static const ValueType VECTOR3D =
    Any_ValueType_VECTOR3D;
  static const ValueType COLOR =
    Any_ValueType_COLOR;
  static const ValueType POSE3D =
    Any_ValueType_POSE3D;
  static const ValueType QUATERNIOND =
    Any_ValueType_QUATERNIOND;
  static const ValueType TIME =
    Any_ValueType_TIME;
  static inline bool ValueType_IsValid(int value) {
    return Any_ValueType_IsValid(value);
  }
  static const ValueType ValueType_MIN =
    Any_ValueType_ValueType_MIN;
  static const ValueType ValueType_MAX =
    Any_ValueType_ValueType_MAX;
  static const int ValueType_ARRAYSIZE =
    Any_ValueType_ValueType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ValueType_descriptor() {
    return Any_ValueType_descriptor();
  }
  static inline const ::std::string& ValueType_Name(ValueType value) {
    return Any_ValueType_Name(value);
  }
  static inline bool ValueType_Parse(const ::std::string& name,
      ValueType* value) {
    return Any_ValueType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

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

  // .gz.msgs.Any.ValueType type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::gz::msgs::Any_ValueType type() const;
  void set_type(::gz::msgs::Any_ValueType value);

  // double double_value = 3;
  private:
  bool has_double_value() const;
  public:
  void clear_double_value();
  static const int kDoubleValueFieldNumber = 3;
  double double_value() const;
  void set_double_value(double value);

  // int32 int_value = 4;
  private:
  bool has_int_value() const;
  public:
  void clear_int_value();
  static const int kIntValueFieldNumber = 4;
  ::google::protobuf::int32 int_value() const;
  void set_int_value(::google::protobuf::int32 value);

  // string string_value = 5;
  private:
  bool has_string_value() const;
  public:
  void clear_string_value();
  static const int kStringValueFieldNumber = 5;
  const ::std::string& string_value() const;
  void set_string_value(const ::std::string& value);
  #if LANG_CXX11
  void set_string_value(::std::string&& value);
  #endif
  void set_string_value(const char* value);
  void set_string_value(const char* value, size_t size);
  ::std::string* mutable_string_value();
  ::std::string* release_string_value();
  void set_allocated_string_value(::std::string* string_value);

  // bool bool_value = 6;
  private:
  bool has_bool_value() const;
  public:
  void clear_bool_value();
  static const int kBoolValueFieldNumber = 6;
  bool bool_value() const;
  void set_bool_value(bool value);

  // .gz.msgs.Vector3d vector3d_value = 7;
  bool has_vector3d_value() const;
  void clear_vector3d_value();
  static const int kVector3DValueFieldNumber = 7;
  private:
  const ::gz::msgs::Vector3d& _internal_vector3d_value() const;
  public:
  const ::gz::msgs::Vector3d& vector3d_value() const;
  ::gz::msgs::Vector3d* release_vector3d_value();
  ::gz::msgs::Vector3d* mutable_vector3d_value();
  void set_allocated_vector3d_value(::gz::msgs::Vector3d* vector3d_value);

  // .gz.msgs.Color color_value = 8;
  bool has_color_value() const;
  void clear_color_value();
  static const int kColorValueFieldNumber = 8;
  private:
  const ::gz::msgs::Color& _internal_color_value() const;
  public:
  const ::gz::msgs::Color& color_value() const;
  ::gz::msgs::Color* release_color_value();
  ::gz::msgs::Color* mutable_color_value();
  void set_allocated_color_value(::gz::msgs::Color* color_value);

  // .gz.msgs.Pose pose3d_value = 9;
  bool has_pose3d_value() const;
  void clear_pose3d_value();
  static const int kPose3DValueFieldNumber = 9;
  private:
  const ::gz::msgs::Pose& _internal_pose3d_value() const;
  public:
  const ::gz::msgs::Pose& pose3d_value() const;
  ::gz::msgs::Pose* release_pose3d_value();
  ::gz::msgs::Pose* mutable_pose3d_value();
  void set_allocated_pose3d_value(::gz::msgs::Pose* pose3d_value);

  // .gz.msgs.Quaternion quaternion_value = 10;
  bool has_quaternion_value() const;
  void clear_quaternion_value();
  static const int kQuaternionValueFieldNumber = 10;
  private:
  const ::gz::msgs::Quaternion& _internal_quaternion_value() const;
  public:
  const ::gz::msgs::Quaternion& quaternion_value() const;
  ::gz::msgs::Quaternion* release_quaternion_value();
  ::gz::msgs::Quaternion* mutable_quaternion_value();
  void set_allocated_quaternion_value(::gz::msgs::Quaternion* quaternion_value);

  // .gz.msgs.Time time_value = 11;
  bool has_time_value() const;
  void clear_time_value();
  static const int kTimeValueFieldNumber = 11;
  private:
  const ::gz::msgs::Time& _internal_time_value() const;
  public:
  const ::gz::msgs::Time& time_value() const;
  ::gz::msgs::Time* release_time_value();
  ::gz::msgs::Time* mutable_time_value();
  void set_allocated_time_value(::gz::msgs::Time* time_value);

  void clear_value();
  ValueCase value_case() const;
  // @@protoc_insertion_point(class_scope:gz.msgs.Any)
 private:
  void set_has_double_value();
  void set_has_int_value();
  void set_has_string_value();
  void set_has_bool_value();
  void set_has_vector3d_value();
  void set_has_color_value();
  void set_has_pose3d_value();
  void set_has_quaternion_value();
  void set_has_time_value();

  inline bool has_value() const;
  inline void clear_has_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  int type_;
  union ValueUnion {
    ValueUnion() {}
    double double_value_;
    ::google::protobuf::int32 int_value_;
    ::google::protobuf::internal::ArenaStringPtr string_value_;
    bool bool_value_;
    ::gz::msgs::Vector3d* vector3d_value_;
    ::gz::msgs::Color* color_value_;
    ::gz::msgs::Pose* pose3d_value_;
    ::gz::msgs::Quaternion* quaternion_value_;
    ::gz::msgs::Time* time_value_;
  } value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_gz_2fmsgs_2fany_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Any

// .gz.msgs.Header header = 1;
inline bool Any::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Any::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Any::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Any.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Any::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Any.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Any::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Any.header)
  return header_;
}
inline void Any::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Any.header)
}

// .gz.msgs.Any.ValueType type = 2;
inline void Any::clear_type() {
  type_ = 0;
}
inline ::gz::msgs::Any_ValueType Any::type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.type)
  return static_cast< ::gz::msgs::Any_ValueType >(type_);
}
inline void Any::set_type(::gz::msgs::Any_ValueType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Any.type)
}

// double double_value = 3;
inline bool Any::has_double_value() const {
  return value_case() == kDoubleValue;
}
inline void Any::set_has_double_value() {
  _oneof_case_[0] = kDoubleValue;
}
inline void Any::clear_double_value() {
  if (has_double_value()) {
    value_.double_value_ = 0;
    clear_has_value();
  }
}
inline double Any::double_value() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.double_value)
  if (has_double_value()) {
    return value_.double_value_;
  }
  return 0;
}
inline void Any::set_double_value(double value) {
  if (!has_double_value()) {
    clear_value();
    set_has_double_value();
  }
  value_.double_value_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Any.double_value)
}

// int32 int_value = 4;
inline bool Any::has_int_value() const {
  return value_case() == kIntValue;
}
inline void Any::set_has_int_value() {
  _oneof_case_[0] = kIntValue;
}
inline void Any::clear_int_value() {
  if (has_int_value()) {
    value_.int_value_ = 0;
    clear_has_value();
  }
}
inline ::google::protobuf::int32 Any::int_value() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.int_value)
  if (has_int_value()) {
    return value_.int_value_;
  }
  return 0;
}
inline void Any::set_int_value(::google::protobuf::int32 value) {
  if (!has_int_value()) {
    clear_value();
    set_has_int_value();
  }
  value_.int_value_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Any.int_value)
}

// string string_value = 5;
inline bool Any::has_string_value() const {
  return value_case() == kStringValue;
}
inline void Any::set_has_string_value() {
  _oneof_case_[0] = kStringValue;
}
inline void Any::clear_string_value() {
  if (has_string_value()) {
    value_.string_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_value();
  }
}
inline const ::std::string& Any::string_value() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.string_value)
  if (has_string_value()) {
    return value_.string_value_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Any::set_string_value(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:gz.msgs.Any.string_value)
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  value_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Any.string_value)
}
#if LANG_CXX11
inline void Any::set_string_value(::std::string&& value) {
  // @@protoc_insertion_point(field_set:gz.msgs.Any.string_value)
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  value_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Any.string_value)
}
#endif
inline void Any::set_string_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  value_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Any.string_value)
}
inline void Any::set_string_value(const char* value, size_t size) {
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  value_.string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Any.string_value)
}
inline ::std::string* Any::mutable_string_value() {
  if (!has_string_value()) {
    clear_value();
    set_has_string_value();
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Any.string_value)
  return value_.string_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Any::release_string_value() {
  // @@protoc_insertion_point(field_release:gz.msgs.Any.string_value)
  if (has_string_value()) {
    clear_has_value();
    return value_.string_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void Any::set_allocated_string_value(::std::string* string_value) {
  if (!has_string_value()) {
    value_.string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_value();
  if (string_value != NULL) {
    set_has_string_value();
    value_.string_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), string_value);
  }
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Any.string_value)
}

// bool bool_value = 6;
inline bool Any::has_bool_value() const {
  return value_case() == kBoolValue;
}
inline void Any::set_has_bool_value() {
  _oneof_case_[0] = kBoolValue;
}
inline void Any::clear_bool_value() {
  if (has_bool_value()) {
    value_.bool_value_ = false;
    clear_has_value();
  }
}
inline bool Any::bool_value() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.bool_value)
  if (has_bool_value()) {
    return value_.bool_value_;
  }
  return false;
}
inline void Any::set_bool_value(bool value) {
  if (!has_bool_value()) {
    clear_value();
    set_has_bool_value();
  }
  value_.bool_value_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Any.bool_value)
}

// .gz.msgs.Vector3d vector3d_value = 7;
inline bool Any::has_vector3d_value() const {
  return value_case() == kVector3DValue;
}
inline void Any::set_has_vector3d_value() {
  _oneof_case_[0] = kVector3DValue;
}
inline const ::gz::msgs::Vector3d& Any::_internal_vector3d_value() const {
  return *value_.vector3d_value_;
}
inline ::gz::msgs::Vector3d* Any::release_vector3d_value() {
  // @@protoc_insertion_point(field_release:gz.msgs.Any.vector3d_value)
  if (has_vector3d_value()) {
    clear_has_value();
      ::gz::msgs::Vector3d* temp = value_.vector3d_value_;
    value_.vector3d_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::gz::msgs::Vector3d& Any::vector3d_value() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.vector3d_value)
  return has_vector3d_value()
      ? *value_.vector3d_value_
      : *reinterpret_cast< ::gz::msgs::Vector3d*>(&::gz::msgs::_Vector3d_default_instance_);
}
inline ::gz::msgs::Vector3d* Any::mutable_vector3d_value() {
  if (!has_vector3d_value()) {
    clear_value();
    set_has_vector3d_value();
    value_.vector3d_value_ = CreateMaybeMessage< ::gz::msgs::Vector3d >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Any.vector3d_value)
  return value_.vector3d_value_;
}

// .gz.msgs.Color color_value = 8;
inline bool Any::has_color_value() const {
  return value_case() == kColorValue;
}
inline void Any::set_has_color_value() {
  _oneof_case_[0] = kColorValue;
}
inline const ::gz::msgs::Color& Any::_internal_color_value() const {
  return *value_.color_value_;
}
inline ::gz::msgs::Color* Any::release_color_value() {
  // @@protoc_insertion_point(field_release:gz.msgs.Any.color_value)
  if (has_color_value()) {
    clear_has_value();
      ::gz::msgs::Color* temp = value_.color_value_;
    value_.color_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::gz::msgs::Color& Any::color_value() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.color_value)
  return has_color_value()
      ? *value_.color_value_
      : *reinterpret_cast< ::gz::msgs::Color*>(&::gz::msgs::_Color_default_instance_);
}
inline ::gz::msgs::Color* Any::mutable_color_value() {
  if (!has_color_value()) {
    clear_value();
    set_has_color_value();
    value_.color_value_ = CreateMaybeMessage< ::gz::msgs::Color >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Any.color_value)
  return value_.color_value_;
}

// .gz.msgs.Pose pose3d_value = 9;
inline bool Any::has_pose3d_value() const {
  return value_case() == kPose3DValue;
}
inline void Any::set_has_pose3d_value() {
  _oneof_case_[0] = kPose3DValue;
}
inline const ::gz::msgs::Pose& Any::_internal_pose3d_value() const {
  return *value_.pose3d_value_;
}
inline ::gz::msgs::Pose* Any::release_pose3d_value() {
  // @@protoc_insertion_point(field_release:gz.msgs.Any.pose3d_value)
  if (has_pose3d_value()) {
    clear_has_value();
      ::gz::msgs::Pose* temp = value_.pose3d_value_;
    value_.pose3d_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::gz::msgs::Pose& Any::pose3d_value() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.pose3d_value)
  return has_pose3d_value()
      ? *value_.pose3d_value_
      : *reinterpret_cast< ::gz::msgs::Pose*>(&::gz::msgs::_Pose_default_instance_);
}
inline ::gz::msgs::Pose* Any::mutable_pose3d_value() {
  if (!has_pose3d_value()) {
    clear_value();
    set_has_pose3d_value();
    value_.pose3d_value_ = CreateMaybeMessage< ::gz::msgs::Pose >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Any.pose3d_value)
  return value_.pose3d_value_;
}

// .gz.msgs.Quaternion quaternion_value = 10;
inline bool Any::has_quaternion_value() const {
  return value_case() == kQuaternionValue;
}
inline void Any::set_has_quaternion_value() {
  _oneof_case_[0] = kQuaternionValue;
}
inline const ::gz::msgs::Quaternion& Any::_internal_quaternion_value() const {
  return *value_.quaternion_value_;
}
inline ::gz::msgs::Quaternion* Any::release_quaternion_value() {
  // @@protoc_insertion_point(field_release:gz.msgs.Any.quaternion_value)
  if (has_quaternion_value()) {
    clear_has_value();
      ::gz::msgs::Quaternion* temp = value_.quaternion_value_;
    value_.quaternion_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::gz::msgs::Quaternion& Any::quaternion_value() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.quaternion_value)
  return has_quaternion_value()
      ? *value_.quaternion_value_
      : *reinterpret_cast< ::gz::msgs::Quaternion*>(&::gz::msgs::_Quaternion_default_instance_);
}
inline ::gz::msgs::Quaternion* Any::mutable_quaternion_value() {
  if (!has_quaternion_value()) {
    clear_value();
    set_has_quaternion_value();
    value_.quaternion_value_ = CreateMaybeMessage< ::gz::msgs::Quaternion >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Any.quaternion_value)
  return value_.quaternion_value_;
}

// .gz.msgs.Time time_value = 11;
inline bool Any::has_time_value() const {
  return value_case() == kTimeValue;
}
inline void Any::set_has_time_value() {
  _oneof_case_[0] = kTimeValue;
}
inline const ::gz::msgs::Time& Any::_internal_time_value() const {
  return *value_.time_value_;
}
inline ::gz::msgs::Time* Any::release_time_value() {
  // @@protoc_insertion_point(field_release:gz.msgs.Any.time_value)
  if (has_time_value()) {
    clear_has_value();
      ::gz::msgs::Time* temp = value_.time_value_;
    value_.time_value_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::gz::msgs::Time& Any::time_value() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Any.time_value)
  return has_time_value()
      ? *value_.time_value_
      : *reinterpret_cast< ::gz::msgs::Time*>(&::gz::msgs::_Time_default_instance_);
}
inline ::gz::msgs::Time* Any::mutable_time_value() {
  if (!has_time_value()) {
    clear_value();
    set_has_time_value();
    value_.time_value_ = CreateMaybeMessage< ::gz::msgs::Time >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Any.time_value)
  return value_.time_value_;
}

inline bool Any::has_value() const {
  return value_case() != VALUE_NOT_SET;
}
inline void Any::clear_has_value() {
  _oneof_case_[0] = VALUE_NOT_SET;
}
inline Any::ValueCase Any::value_case() const {
  return Any::ValueCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gz::msgs::Any_ValueType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gz::msgs::Any_ValueType>() {
  return ::gz::msgs::Any_ValueType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fany_2eproto
