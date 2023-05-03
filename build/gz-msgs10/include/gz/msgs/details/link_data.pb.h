// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/link_data.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2flink_5fdata_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2flink_5fdata_2eproto

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
#include "gz/msgs/vector3d.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2flink_5fdata_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2flink_5fdata_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2flink_5fdata_2eproto
namespace gz {
namespace msgs {
class LinkData;
class LinkDataDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern LinkDataDefaultTypeInternal _LinkData_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::LinkData* Arena::CreateMaybeMessage<::gz::msgs::LinkData>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE LinkData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.LinkData) */ {
 public:
  LinkData();
  virtual ~LinkData();

  LinkData(const LinkData& from);

  inline LinkData& operator=(const LinkData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LinkData(LinkData&& from) noexcept
    : LinkData() {
    *this = ::std::move(from);
  }

  inline LinkData& operator=(LinkData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LinkData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LinkData* internal_default_instance() {
    return reinterpret_cast<const LinkData*>(
               &_LinkData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LinkData* other);
  friend void swap(LinkData& a, LinkData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LinkData* New() const final {
    return CreateMaybeMessage<LinkData>(NULL);
  }

  LinkData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LinkData>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LinkData& from);
  void MergeFrom(const LinkData& from);
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
  void InternalSwap(LinkData* other);
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

  // .gz.msgs.Vector3d linear_velocity = 3;
  bool has_linear_velocity() const;
  void clear_linear_velocity();
  static const int kLinearVelocityFieldNumber = 3;
  private:
  const ::gz::msgs::Vector3d& _internal_linear_velocity() const;
  public:
  const ::gz::msgs::Vector3d& linear_velocity() const;
  ::gz::msgs::Vector3d* release_linear_velocity();
  ::gz::msgs::Vector3d* mutable_linear_velocity();
  void set_allocated_linear_velocity(::gz::msgs::Vector3d* linear_velocity);

  // .gz.msgs.Vector3d angular_velocity = 4;
  bool has_angular_velocity() const;
  void clear_angular_velocity();
  static const int kAngularVelocityFieldNumber = 4;
  private:
  const ::gz::msgs::Vector3d& _internal_angular_velocity() const;
  public:
  const ::gz::msgs::Vector3d& angular_velocity() const;
  ::gz::msgs::Vector3d* release_angular_velocity();
  ::gz::msgs::Vector3d* mutable_angular_velocity();
  void set_allocated_angular_velocity(::gz::msgs::Vector3d* angular_velocity);

  // @@protoc_insertion_point(class_scope:gz.msgs.LinkData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Vector3d* linear_velocity_;
  ::gz::msgs::Vector3d* angular_velocity_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2flink_5fdata_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LinkData

// .gz.msgs.Header header = 1;
inline bool LinkData::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& LinkData::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& LinkData::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.LinkData.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* LinkData::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.LinkData.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* LinkData::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.LinkData.header)
  return header_;
}
inline void LinkData::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LinkData.header)
}

// string name = 2;
inline void LinkData::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LinkData::name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LinkData.name)
  return name_.GetNoArena();
}
inline void LinkData::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.LinkData.name)
}
#if LANG_CXX11
inline void LinkData::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.LinkData.name)
}
#endif
inline void LinkData::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.LinkData.name)
}
inline void LinkData::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.LinkData.name)
}
inline ::std::string* LinkData::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.LinkData.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LinkData::release_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.LinkData.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LinkData::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LinkData.name)
}

// .gz.msgs.Vector3d linear_velocity = 3;
inline bool LinkData::has_linear_velocity() const {
  return this != internal_default_instance() && linear_velocity_ != NULL;
}
inline const ::gz::msgs::Vector3d& LinkData::_internal_linear_velocity() const {
  return *linear_velocity_;
}
inline const ::gz::msgs::Vector3d& LinkData::linear_velocity() const {
  const ::gz::msgs::Vector3d* p = linear_velocity_;
  // @@protoc_insertion_point(field_get:gz.msgs.LinkData.linear_velocity)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Vector3d*>(
      &::gz::msgs::_Vector3d_default_instance_);
}
inline ::gz::msgs::Vector3d* LinkData::release_linear_velocity() {
  // @@protoc_insertion_point(field_release:gz.msgs.LinkData.linear_velocity)
  
  ::gz::msgs::Vector3d* temp = linear_velocity_;
  linear_velocity_ = NULL;
  return temp;
}
inline ::gz::msgs::Vector3d* LinkData::mutable_linear_velocity() {
  
  if (linear_velocity_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Vector3d>(GetArenaNoVirtual());
    linear_velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.LinkData.linear_velocity)
  return linear_velocity_;
}
inline void LinkData::set_allocated_linear_velocity(::gz::msgs::Vector3d* linear_velocity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(linear_velocity_);
  }
  if (linear_velocity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      linear_velocity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, linear_velocity, submessage_arena);
    }
    
  } else {
    
  }
  linear_velocity_ = linear_velocity;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LinkData.linear_velocity)
}

// .gz.msgs.Vector3d angular_velocity = 4;
inline bool LinkData::has_angular_velocity() const {
  return this != internal_default_instance() && angular_velocity_ != NULL;
}
inline const ::gz::msgs::Vector3d& LinkData::_internal_angular_velocity() const {
  return *angular_velocity_;
}
inline const ::gz::msgs::Vector3d& LinkData::angular_velocity() const {
  const ::gz::msgs::Vector3d* p = angular_velocity_;
  // @@protoc_insertion_point(field_get:gz.msgs.LinkData.angular_velocity)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Vector3d*>(
      &::gz::msgs::_Vector3d_default_instance_);
}
inline ::gz::msgs::Vector3d* LinkData::release_angular_velocity() {
  // @@protoc_insertion_point(field_release:gz.msgs.LinkData.angular_velocity)
  
  ::gz::msgs::Vector3d* temp = angular_velocity_;
  angular_velocity_ = NULL;
  return temp;
}
inline ::gz::msgs::Vector3d* LinkData::mutable_angular_velocity() {
  
  if (angular_velocity_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Vector3d>(GetArenaNoVirtual());
    angular_velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.LinkData.angular_velocity)
  return angular_velocity_;
}
inline void LinkData::set_allocated_angular_velocity(::gz::msgs::Vector3d* angular_velocity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(angular_velocity_);
  }
  if (angular_velocity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      angular_velocity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, angular_velocity, submessage_arena);
    }
    
  } else {
    
  }
  angular_velocity_ = angular_velocity;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LinkData.angular_velocity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2flink_5fdata_2eproto
