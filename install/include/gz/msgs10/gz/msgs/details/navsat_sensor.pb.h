// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/navsat_sensor.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fnavsat_5fsensor_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fnavsat_5fsensor_2eproto

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
#include "gz/msgs/sensor_noise.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto
namespace gz {
namespace msgs {
class NavSatSensor;
class NavSatSensorDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern NavSatSensorDefaultTypeInternal _NavSatSensor_default_instance_;
class NavSatSensor_Sensing;
class NavSatSensor_SensingDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern NavSatSensor_SensingDefaultTypeInternal _NavSatSensor_Sensing_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::NavSatSensor* Arena::CreateMaybeMessage<::gz::msgs::NavSatSensor>(Arena*);
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::NavSatSensor_Sensing* Arena::CreateMaybeMessage<::gz::msgs::NavSatSensor_Sensing>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE NavSatSensor_Sensing : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.NavSatSensor.Sensing) */ {
 public:
  NavSatSensor_Sensing();
  virtual ~NavSatSensor_Sensing();

  NavSatSensor_Sensing(const NavSatSensor_Sensing& from);

  inline NavSatSensor_Sensing& operator=(const NavSatSensor_Sensing& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NavSatSensor_Sensing(NavSatSensor_Sensing&& from) noexcept
    : NavSatSensor_Sensing() {
    *this = ::std::move(from);
  }

  inline NavSatSensor_Sensing& operator=(NavSatSensor_Sensing&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NavSatSensor_Sensing& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NavSatSensor_Sensing* internal_default_instance() {
    return reinterpret_cast<const NavSatSensor_Sensing*>(
               &_NavSatSensor_Sensing_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(NavSatSensor_Sensing* other);
  friend void swap(NavSatSensor_Sensing& a, NavSatSensor_Sensing& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NavSatSensor_Sensing* New() const final {
    return CreateMaybeMessage<NavSatSensor_Sensing>(NULL);
  }

  NavSatSensor_Sensing* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NavSatSensor_Sensing>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NavSatSensor_Sensing& from);
  void MergeFrom(const NavSatSensor_Sensing& from);
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
  void InternalSwap(NavSatSensor_Sensing* other);
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

  // .gz.msgs.SensorNoise horizontal_noise = 1;
  bool has_horizontal_noise() const;
  void clear_horizontal_noise();
  static const int kHorizontalNoiseFieldNumber = 1;
  private:
  const ::gz::msgs::SensorNoise& _internal_horizontal_noise() const;
  public:
  const ::gz::msgs::SensorNoise& horizontal_noise() const;
  ::gz::msgs::SensorNoise* release_horizontal_noise();
  ::gz::msgs::SensorNoise* mutable_horizontal_noise();
  void set_allocated_horizontal_noise(::gz::msgs::SensorNoise* horizontal_noise);

  // .gz.msgs.SensorNoise vertical_noise = 2;
  bool has_vertical_noise() const;
  void clear_vertical_noise();
  static const int kVerticalNoiseFieldNumber = 2;
  private:
  const ::gz::msgs::SensorNoise& _internal_vertical_noise() const;
  public:
  const ::gz::msgs::SensorNoise& vertical_noise() const;
  ::gz::msgs::SensorNoise* release_vertical_noise();
  ::gz::msgs::SensorNoise* mutable_vertical_noise();
  void set_allocated_vertical_noise(::gz::msgs::SensorNoise* vertical_noise);

  // @@protoc_insertion_point(class_scope:gz.msgs.NavSatSensor.Sensing)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::SensorNoise* horizontal_noise_;
  ::gz::msgs::SensorNoise* vertical_noise_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class IGNITION_MSGS_VISIBLE NavSatSensor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.NavSatSensor) */ {
 public:
  NavSatSensor();
  virtual ~NavSatSensor();

  NavSatSensor(const NavSatSensor& from);

  inline NavSatSensor& operator=(const NavSatSensor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NavSatSensor(NavSatSensor&& from) noexcept
    : NavSatSensor() {
    *this = ::std::move(from);
  }

  inline NavSatSensor& operator=(NavSatSensor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NavSatSensor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NavSatSensor* internal_default_instance() {
    return reinterpret_cast<const NavSatSensor*>(
               &_NavSatSensor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(NavSatSensor* other);
  friend void swap(NavSatSensor& a, NavSatSensor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NavSatSensor* New() const final {
    return CreateMaybeMessage<NavSatSensor>(NULL);
  }

  NavSatSensor* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NavSatSensor>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NavSatSensor& from);
  void MergeFrom(const NavSatSensor& from);
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
  void InternalSwap(NavSatSensor* other);
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

  typedef NavSatSensor_Sensing Sensing;

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

  // .gz.msgs.NavSatSensor.Sensing position = 2;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 2;
  private:
  const ::gz::msgs::NavSatSensor_Sensing& _internal_position() const;
  public:
  const ::gz::msgs::NavSatSensor_Sensing& position() const;
  ::gz::msgs::NavSatSensor_Sensing* release_position();
  ::gz::msgs::NavSatSensor_Sensing* mutable_position();
  void set_allocated_position(::gz::msgs::NavSatSensor_Sensing* position);

  // .gz.msgs.NavSatSensor.Sensing velocity = 3;
  bool has_velocity() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 3;
  private:
  const ::gz::msgs::NavSatSensor_Sensing& _internal_velocity() const;
  public:
  const ::gz::msgs::NavSatSensor_Sensing& velocity() const;
  ::gz::msgs::NavSatSensor_Sensing* release_velocity();
  ::gz::msgs::NavSatSensor_Sensing* mutable_velocity();
  void set_allocated_velocity(::gz::msgs::NavSatSensor_Sensing* velocity);

  // @@protoc_insertion_point(class_scope:gz.msgs.NavSatSensor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::NavSatSensor_Sensing* position_;
  ::gz::msgs::NavSatSensor_Sensing* velocity_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fnavsat_5fsensor_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NavSatSensor_Sensing

// .gz.msgs.SensorNoise horizontal_noise = 1;
inline bool NavSatSensor_Sensing::has_horizontal_noise() const {
  return this != internal_default_instance() && horizontal_noise_ != NULL;
}
inline const ::gz::msgs::SensorNoise& NavSatSensor_Sensing::_internal_horizontal_noise() const {
  return *horizontal_noise_;
}
inline const ::gz::msgs::SensorNoise& NavSatSensor_Sensing::horizontal_noise() const {
  const ::gz::msgs::SensorNoise* p = horizontal_noise_;
  // @@protoc_insertion_point(field_get:gz.msgs.NavSatSensor.Sensing.horizontal_noise)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::SensorNoise*>(
      &::gz::msgs::_SensorNoise_default_instance_);
}
inline ::gz::msgs::SensorNoise* NavSatSensor_Sensing::release_horizontal_noise() {
  // @@protoc_insertion_point(field_release:gz.msgs.NavSatSensor.Sensing.horizontal_noise)
  
  ::gz::msgs::SensorNoise* temp = horizontal_noise_;
  horizontal_noise_ = NULL;
  return temp;
}
inline ::gz::msgs::SensorNoise* NavSatSensor_Sensing::mutable_horizontal_noise() {
  
  if (horizontal_noise_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::SensorNoise>(GetArenaNoVirtual());
    horizontal_noise_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.NavSatSensor.Sensing.horizontal_noise)
  return horizontal_noise_;
}
inline void NavSatSensor_Sensing::set_allocated_horizontal_noise(::gz::msgs::SensorNoise* horizontal_noise) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(horizontal_noise_);
  }
  if (horizontal_noise) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      horizontal_noise = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, horizontal_noise, submessage_arena);
    }
    
  } else {
    
  }
  horizontal_noise_ = horizontal_noise;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.NavSatSensor.Sensing.horizontal_noise)
}

// .gz.msgs.SensorNoise vertical_noise = 2;
inline bool NavSatSensor_Sensing::has_vertical_noise() const {
  return this != internal_default_instance() && vertical_noise_ != NULL;
}
inline const ::gz::msgs::SensorNoise& NavSatSensor_Sensing::_internal_vertical_noise() const {
  return *vertical_noise_;
}
inline const ::gz::msgs::SensorNoise& NavSatSensor_Sensing::vertical_noise() const {
  const ::gz::msgs::SensorNoise* p = vertical_noise_;
  // @@protoc_insertion_point(field_get:gz.msgs.NavSatSensor.Sensing.vertical_noise)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::SensorNoise*>(
      &::gz::msgs::_SensorNoise_default_instance_);
}
inline ::gz::msgs::SensorNoise* NavSatSensor_Sensing::release_vertical_noise() {
  // @@protoc_insertion_point(field_release:gz.msgs.NavSatSensor.Sensing.vertical_noise)
  
  ::gz::msgs::SensorNoise* temp = vertical_noise_;
  vertical_noise_ = NULL;
  return temp;
}
inline ::gz::msgs::SensorNoise* NavSatSensor_Sensing::mutable_vertical_noise() {
  
  if (vertical_noise_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::SensorNoise>(GetArenaNoVirtual());
    vertical_noise_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.NavSatSensor.Sensing.vertical_noise)
  return vertical_noise_;
}
inline void NavSatSensor_Sensing::set_allocated_vertical_noise(::gz::msgs::SensorNoise* vertical_noise) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(vertical_noise_);
  }
  if (vertical_noise) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      vertical_noise = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, vertical_noise, submessage_arena);
    }
    
  } else {
    
  }
  vertical_noise_ = vertical_noise;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.NavSatSensor.Sensing.vertical_noise)
}

// -------------------------------------------------------------------

// NavSatSensor

// .gz.msgs.Header header = 1;
inline bool NavSatSensor::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& NavSatSensor::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& NavSatSensor::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.NavSatSensor.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* NavSatSensor::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.NavSatSensor.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* NavSatSensor::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.NavSatSensor.header)
  return header_;
}
inline void NavSatSensor::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.NavSatSensor.header)
}

// .gz.msgs.NavSatSensor.Sensing position = 2;
inline bool NavSatSensor::has_position() const {
  return this != internal_default_instance() && position_ != NULL;
}
inline void NavSatSensor::clear_position() {
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
}
inline const ::gz::msgs::NavSatSensor_Sensing& NavSatSensor::_internal_position() const {
  return *position_;
}
inline const ::gz::msgs::NavSatSensor_Sensing& NavSatSensor::position() const {
  const ::gz::msgs::NavSatSensor_Sensing* p = position_;
  // @@protoc_insertion_point(field_get:gz.msgs.NavSatSensor.position)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::NavSatSensor_Sensing*>(
      &::gz::msgs::_NavSatSensor_Sensing_default_instance_);
}
inline ::gz::msgs::NavSatSensor_Sensing* NavSatSensor::release_position() {
  // @@protoc_insertion_point(field_release:gz.msgs.NavSatSensor.position)
  
  ::gz::msgs::NavSatSensor_Sensing* temp = position_;
  position_ = NULL;
  return temp;
}
inline ::gz::msgs::NavSatSensor_Sensing* NavSatSensor::mutable_position() {
  
  if (position_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::NavSatSensor_Sensing>(GetArenaNoVirtual());
    position_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.NavSatSensor.position)
  return position_;
}
inline void NavSatSensor::set_allocated_position(::gz::msgs::NavSatSensor_Sensing* position) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete position_;
  }
  if (position) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      position = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    
  } else {
    
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.NavSatSensor.position)
}

// .gz.msgs.NavSatSensor.Sensing velocity = 3;
inline bool NavSatSensor::has_velocity() const {
  return this != internal_default_instance() && velocity_ != NULL;
}
inline void NavSatSensor::clear_velocity() {
  if (GetArenaNoVirtual() == NULL && velocity_ != NULL) {
    delete velocity_;
  }
  velocity_ = NULL;
}
inline const ::gz::msgs::NavSatSensor_Sensing& NavSatSensor::_internal_velocity() const {
  return *velocity_;
}
inline const ::gz::msgs::NavSatSensor_Sensing& NavSatSensor::velocity() const {
  const ::gz::msgs::NavSatSensor_Sensing* p = velocity_;
  // @@protoc_insertion_point(field_get:gz.msgs.NavSatSensor.velocity)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::NavSatSensor_Sensing*>(
      &::gz::msgs::_NavSatSensor_Sensing_default_instance_);
}
inline ::gz::msgs::NavSatSensor_Sensing* NavSatSensor::release_velocity() {
  // @@protoc_insertion_point(field_release:gz.msgs.NavSatSensor.velocity)
  
  ::gz::msgs::NavSatSensor_Sensing* temp = velocity_;
  velocity_ = NULL;
  return temp;
}
inline ::gz::msgs::NavSatSensor_Sensing* NavSatSensor::mutable_velocity() {
  
  if (velocity_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::NavSatSensor_Sensing>(GetArenaNoVirtual());
    velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.NavSatSensor.velocity)
  return velocity_;
}
inline void NavSatSensor::set_allocated_velocity(::gz::msgs::NavSatSensor_Sensing* velocity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete velocity_;
  }
  if (velocity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      velocity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, velocity, submessage_arena);
    }
    
  } else {
    
  }
  velocity_ = velocity;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.NavSatSensor.velocity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fnavsat_5fsensor_2eproto