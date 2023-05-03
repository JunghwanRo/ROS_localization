// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/fog.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2ffog_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2ffog_2eproto

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
#include "gz/msgs/color.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2ffog_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2ffog_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2ffog_2eproto
namespace gz {
namespace msgs {
class Fog;
class FogDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern FogDefaultTypeInternal _Fog_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Fog* Arena::CreateMaybeMessage<::gz::msgs::Fog>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

enum Fog_FogType {
  Fog_FogType_NONE = 0,
  Fog_FogType_LINEAR = 1,
  Fog_FogType_EXPONENTIAL = 2,
  Fog_FogType_EXPONENTIAL2 = 3,
  Fog_FogType_Fog_FogType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Fog_FogType_Fog_FogType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
IGNITION_MSGS_VISIBLE bool Fog_FogType_IsValid(int value);
const Fog_FogType Fog_FogType_FogType_MIN = Fog_FogType_NONE;
const Fog_FogType Fog_FogType_FogType_MAX = Fog_FogType_EXPONENTIAL2;
const int Fog_FogType_FogType_ARRAYSIZE = Fog_FogType_FogType_MAX + 1;

IGNITION_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Fog_FogType_descriptor();
inline const ::std::string& Fog_FogType_Name(Fog_FogType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Fog_FogType_descriptor(), value);
}
inline bool Fog_FogType_Parse(
    const ::std::string& name, Fog_FogType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Fog_FogType>(
    Fog_FogType_descriptor(), name, value);
}
// ===================================================================

class IGNITION_MSGS_VISIBLE Fog : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Fog) */ {
 public:
  Fog();
  virtual ~Fog();

  Fog(const Fog& from);

  inline Fog& operator=(const Fog& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Fog(Fog&& from) noexcept
    : Fog() {
    *this = ::std::move(from);
  }

  inline Fog& operator=(Fog&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Fog& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Fog* internal_default_instance() {
    return reinterpret_cast<const Fog*>(
               &_Fog_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Fog* other);
  friend void swap(Fog& a, Fog& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Fog* New() const final {
    return CreateMaybeMessage<Fog>(NULL);
  }

  Fog* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Fog>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Fog& from);
  void MergeFrom(const Fog& from);
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
  void InternalSwap(Fog* other);
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

  typedef Fog_FogType FogType;
  static const FogType NONE =
    Fog_FogType_NONE;
  static const FogType LINEAR =
    Fog_FogType_LINEAR;
  static const FogType EXPONENTIAL =
    Fog_FogType_EXPONENTIAL;
  static const FogType EXPONENTIAL2 =
    Fog_FogType_EXPONENTIAL2;
  static inline bool FogType_IsValid(int value) {
    return Fog_FogType_IsValid(value);
  }
  static const FogType FogType_MIN =
    Fog_FogType_FogType_MIN;
  static const FogType FogType_MAX =
    Fog_FogType_FogType_MAX;
  static const int FogType_ARRAYSIZE =
    Fog_FogType_FogType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FogType_descriptor() {
    return Fog_FogType_descriptor();
  }
  static inline const ::std::string& FogType_Name(FogType value) {
    return Fog_FogType_Name(value);
  }
  static inline bool FogType_Parse(const ::std::string& name,
      FogType* value) {
    return Fog_FogType_Parse(name, value);
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

  // .gz.msgs.Color color = 3;
  bool has_color() const;
  void clear_color();
  static const int kColorFieldNumber = 3;
  private:
  const ::gz::msgs::Color& _internal_color() const;
  public:
  const ::gz::msgs::Color& color() const;
  ::gz::msgs::Color* release_color();
  ::gz::msgs::Color* mutable_color();
  void set_allocated_color(::gz::msgs::Color* color);

  // .gz.msgs.Fog.FogType type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::gz::msgs::Fog_FogType type() const;
  void set_type(::gz::msgs::Fog_FogType value);

  // float density = 4;
  void clear_density();
  static const int kDensityFieldNumber = 4;
  float density() const;
  void set_density(float value);

  // float start = 5;
  void clear_start();
  static const int kStartFieldNumber = 5;
  float start() const;
  void set_start(float value);

  // float end = 6;
  void clear_end();
  static const int kEndFieldNumber = 6;
  float end() const;
  void set_end(float value);

  // @@protoc_insertion_point(class_scope:gz.msgs.Fog)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Color* color_;
  int type_;
  float density_;
  float start_;
  float end_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2ffog_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Fog

// .gz.msgs.Header header = 1;
inline bool Fog::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Fog::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Fog::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Fog.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Fog::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Fog.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Fog::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Fog.header)
  return header_;
}
inline void Fog::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Fog.header)
}

// .gz.msgs.Fog.FogType type = 2;
inline void Fog::clear_type() {
  type_ = 0;
}
inline ::gz::msgs::Fog_FogType Fog::type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Fog.type)
  return static_cast< ::gz::msgs::Fog_FogType >(type_);
}
inline void Fog::set_type(::gz::msgs::Fog_FogType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Fog.type)
}

// .gz.msgs.Color color = 3;
inline bool Fog::has_color() const {
  return this != internal_default_instance() && color_ != NULL;
}
inline const ::gz::msgs::Color& Fog::_internal_color() const {
  return *color_;
}
inline const ::gz::msgs::Color& Fog::color() const {
  const ::gz::msgs::Color* p = color_;
  // @@protoc_insertion_point(field_get:gz.msgs.Fog.color)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Color*>(
      &::gz::msgs::_Color_default_instance_);
}
inline ::gz::msgs::Color* Fog::release_color() {
  // @@protoc_insertion_point(field_release:gz.msgs.Fog.color)
  
  ::gz::msgs::Color* temp = color_;
  color_ = NULL;
  return temp;
}
inline ::gz::msgs::Color* Fog::mutable_color() {
  
  if (color_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Color>(GetArenaNoVirtual());
    color_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Fog.color)
  return color_;
}
inline void Fog::set_allocated_color(::gz::msgs::Color* color) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(color_);
  }
  if (color) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      color = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, color, submessage_arena);
    }
    
  } else {
    
  }
  color_ = color;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Fog.color)
}

// float density = 4;
inline void Fog::clear_density() {
  density_ = 0;
}
inline float Fog::density() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Fog.density)
  return density_;
}
inline void Fog::set_density(float value) {
  
  density_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Fog.density)
}

// float start = 5;
inline void Fog::clear_start() {
  start_ = 0;
}
inline float Fog::start() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Fog.start)
  return start_;
}
inline void Fog::set_start(float value) {
  
  start_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Fog.start)
}

// float end = 6;
inline void Fog::clear_end() {
  end_ = 0;
}
inline float Fog::end() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Fog.end)
  return end_;
}
inline void Fog::set_end(float value) {
  
  end_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.Fog.end)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gz::msgs::Fog_FogType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gz::msgs::Fog_FogType>() {
  return ::gz::msgs::Fog_FogType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2ffog_2eproto
