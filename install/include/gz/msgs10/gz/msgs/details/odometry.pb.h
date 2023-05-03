// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/odometry.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fodometry_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fodometry_2eproto

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
#include "gz/msgs/header.pb.h"
#include "gz/msgs/pose.pb.h"
#include "gz/msgs/twist.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fodometry_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fodometry_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fodometry_2eproto
namespace gz {
namespace msgs {
class Odometry;
class OdometryDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern OdometryDefaultTypeInternal _Odometry_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Odometry* Arena::CreateMaybeMessage<::gz::msgs::Odometry>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Odometry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Odometry) */ {
 public:
  Odometry();
  virtual ~Odometry();

  Odometry(const Odometry& from);

  inline Odometry& operator=(const Odometry& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Odometry(Odometry&& from) noexcept
    : Odometry() {
    *this = ::std::move(from);
  }

  inline Odometry& operator=(Odometry&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Odometry& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Odometry* internal_default_instance() {
    return reinterpret_cast<const Odometry*>(
               &_Odometry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Odometry* other);
  friend void swap(Odometry& a, Odometry& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Odometry* New() const final {
    return CreateMaybeMessage<Odometry>(NULL);
  }

  Odometry* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Odometry>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Odometry& from);
  void MergeFrom(const Odometry& from);
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
  void InternalSwap(Odometry* other);
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

  // .gz.msgs.Pose pose = 2;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 2;
  private:
  const ::gz::msgs::Pose& _internal_pose() const;
  public:
  const ::gz::msgs::Pose& pose() const;
  ::gz::msgs::Pose* release_pose();
  ::gz::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gz::msgs::Pose* pose);

  // .gz.msgs.Twist twist = 3;
  bool has_twist() const;
  void clear_twist();
  static const int kTwistFieldNumber = 3;
  private:
  const ::gz::msgs::Twist& _internal_twist() const;
  public:
  const ::gz::msgs::Twist& twist() const;
  ::gz::msgs::Twist* release_twist();
  ::gz::msgs::Twist* mutable_twist();
  void set_allocated_twist(::gz::msgs::Twist* twist);

  // @@protoc_insertion_point(class_scope:gz.msgs.Odometry)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Pose* pose_;
  ::gz::msgs::Twist* twist_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fodometry_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Odometry

// .gz.msgs.Header header = 1;
inline bool Odometry::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Odometry::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Odometry::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Odometry.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Odometry::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Odometry.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Odometry::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Odometry.header)
  return header_;
}
inline void Odometry::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Odometry.header)
}

// .gz.msgs.Pose pose = 2;
inline bool Odometry::has_pose() const {
  return this != internal_default_instance() && pose_ != NULL;
}
inline const ::gz::msgs::Pose& Odometry::_internal_pose() const {
  return *pose_;
}
inline const ::gz::msgs::Pose& Odometry::pose() const {
  const ::gz::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:gz.msgs.Odometry.pose)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Pose*>(
      &::gz::msgs::_Pose_default_instance_);
}
inline ::gz::msgs::Pose* Odometry::release_pose() {
  // @@protoc_insertion_point(field_release:gz.msgs.Odometry.pose)
  
  ::gz::msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline ::gz::msgs::Pose* Odometry::mutable_pose() {
  
  if (pose_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Odometry.pose)
  return pose_;
}
inline void Odometry::set_allocated_pose(::gz::msgs::Pose* pose) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Odometry.pose)
}

// .gz.msgs.Twist twist = 3;
inline bool Odometry::has_twist() const {
  return this != internal_default_instance() && twist_ != NULL;
}
inline const ::gz::msgs::Twist& Odometry::_internal_twist() const {
  return *twist_;
}
inline const ::gz::msgs::Twist& Odometry::twist() const {
  const ::gz::msgs::Twist* p = twist_;
  // @@protoc_insertion_point(field_get:gz.msgs.Odometry.twist)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Twist*>(
      &::gz::msgs::_Twist_default_instance_);
}
inline ::gz::msgs::Twist* Odometry::release_twist() {
  // @@protoc_insertion_point(field_release:gz.msgs.Odometry.twist)
  
  ::gz::msgs::Twist* temp = twist_;
  twist_ = NULL;
  return temp;
}
inline ::gz::msgs::Twist* Odometry::mutable_twist() {
  
  if (twist_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Twist>(GetArenaNoVirtual());
    twist_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Odometry.twist)
  return twist_;
}
inline void Odometry::set_allocated_twist(::gz::msgs::Twist* twist) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(twist_);
  }
  if (twist) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      twist = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, twist, submessage_arena);
    }
    
  } else {
    
  }
  twist_ = twist;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Odometry.twist)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fodometry_2eproto
