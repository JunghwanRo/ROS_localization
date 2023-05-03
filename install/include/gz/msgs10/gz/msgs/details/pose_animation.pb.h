// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/pose_animation.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fpose_5fanimation_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fpose_5fanimation_2eproto

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
#include "gz/msgs/pose.pb.h"
#include "gz/msgs/time.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fpose_5fanimation_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fpose_5fanimation_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fpose_5fanimation_2eproto
namespace gz {
namespace msgs {
class PoseAnimation;
class PoseAnimationDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern PoseAnimationDefaultTypeInternal _PoseAnimation_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::PoseAnimation* Arena::CreateMaybeMessage<::gz::msgs::PoseAnimation>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE PoseAnimation : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.PoseAnimation) */ {
 public:
  PoseAnimation();
  virtual ~PoseAnimation();

  PoseAnimation(const PoseAnimation& from);

  inline PoseAnimation& operator=(const PoseAnimation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PoseAnimation(PoseAnimation&& from) noexcept
    : PoseAnimation() {
    *this = ::std::move(from);
  }

  inline PoseAnimation& operator=(PoseAnimation&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PoseAnimation& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PoseAnimation* internal_default_instance() {
    return reinterpret_cast<const PoseAnimation*>(
               &_PoseAnimation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PoseAnimation* other);
  friend void swap(PoseAnimation& a, PoseAnimation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PoseAnimation* New() const final {
    return CreateMaybeMessage<PoseAnimation>(NULL);
  }

  PoseAnimation* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PoseAnimation>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PoseAnimation& from);
  void MergeFrom(const PoseAnimation& from);
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
  void InternalSwap(PoseAnimation* other);
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

  // repeated .gz.msgs.Pose pose = 3;
  int pose_size() const;
  void clear_pose();
  static const int kPoseFieldNumber = 3;
  ::gz::msgs::Pose* mutable_pose(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Pose >*
      mutable_pose();
  const ::gz::msgs::Pose& pose(int index) const;
  ::gz::msgs::Pose* add_pose();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Pose >&
      pose() const;

  // repeated .gz.msgs.Time time = 4;
  int time_size() const;
  void clear_time();
  static const int kTimeFieldNumber = 4;
  ::gz::msgs::Time* mutable_time(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time >*
      mutable_time();
  const ::gz::msgs::Time& time(int index) const;
  ::gz::msgs::Time* add_time();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time >&
      time() const;

  // string model_name = 1;
  void clear_model_name();
  static const int kModelNameFieldNumber = 1;
  const ::std::string& model_name() const;
  void set_model_name(const ::std::string& value);
  #if LANG_CXX11
  void set_model_name(::std::string&& value);
  #endif
  void set_model_name(const char* value);
  void set_model_name(const char* value, size_t size);
  ::std::string* mutable_model_name();
  ::std::string* release_model_name();
  void set_allocated_model_name(::std::string* model_name);

  // uint32 model_id = 2;
  void clear_model_id();
  static const int kModelIdFieldNumber = 2;
  ::google::protobuf::uint32 model_id() const;
  void set_model_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gz.msgs.PoseAnimation)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Pose > pose_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time > time_;
  ::google::protobuf::internal::ArenaStringPtr model_name_;
  ::google::protobuf::uint32 model_id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fpose_5fanimation_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PoseAnimation

// string model_name = 1;
inline void PoseAnimation::clear_model_name() {
  model_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PoseAnimation::model_name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.PoseAnimation.model_name)
  return model_name_.GetNoArena();
}
inline void PoseAnimation::set_model_name(const ::std::string& value) {
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.PoseAnimation.model_name)
}
#if LANG_CXX11
inline void PoseAnimation::set_model_name(::std::string&& value) {
  
  model_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.PoseAnimation.model_name)
}
#endif
inline void PoseAnimation::set_model_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.PoseAnimation.model_name)
}
inline void PoseAnimation::set_model_name(const char* value, size_t size) {
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.PoseAnimation.model_name)
}
inline ::std::string* PoseAnimation::mutable_model_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.PoseAnimation.model_name)
  return model_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PoseAnimation::release_model_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.PoseAnimation.model_name)
  
  return model_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PoseAnimation::set_allocated_model_name(::std::string* model_name) {
  if (model_name != NULL) {
    
  } else {
    
  }
  model_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.PoseAnimation.model_name)
}

// uint32 model_id = 2;
inline void PoseAnimation::clear_model_id() {
  model_id_ = 0u;
}
inline ::google::protobuf::uint32 PoseAnimation::model_id() const {
  // @@protoc_insertion_point(field_get:gz.msgs.PoseAnimation.model_id)
  return model_id_;
}
inline void PoseAnimation::set_model_id(::google::protobuf::uint32 value) {
  
  model_id_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.PoseAnimation.model_id)
}

// repeated .gz.msgs.Pose pose = 3;
inline int PoseAnimation::pose_size() const {
  return pose_.size();
}
inline ::gz::msgs::Pose* PoseAnimation::mutable_pose(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.PoseAnimation.pose)
  return pose_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Pose >*
PoseAnimation::mutable_pose() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.PoseAnimation.pose)
  return &pose_;
}
inline const ::gz::msgs::Pose& PoseAnimation::pose(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.PoseAnimation.pose)
  return pose_.Get(index);
}
inline ::gz::msgs::Pose* PoseAnimation::add_pose() {
  // @@protoc_insertion_point(field_add:gz.msgs.PoseAnimation.pose)
  return pose_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Pose >&
PoseAnimation::pose() const {
  // @@protoc_insertion_point(field_list:gz.msgs.PoseAnimation.pose)
  return pose_;
}

// repeated .gz.msgs.Time time = 4;
inline int PoseAnimation::time_size() const {
  return time_.size();
}
inline ::gz::msgs::Time* PoseAnimation::mutable_time(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.PoseAnimation.time)
  return time_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time >*
PoseAnimation::mutable_time() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.PoseAnimation.time)
  return &time_;
}
inline const ::gz::msgs::Time& PoseAnimation::time(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.PoseAnimation.time)
  return time_.Get(index);
}
inline ::gz::msgs::Time* PoseAnimation::add_time() {
  // @@protoc_insertion_point(field_add:gz.msgs.PoseAnimation.time)
  return time_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Time >&
PoseAnimation::time() const {
  // @@protoc_insertion_point(field_list:gz.msgs.PoseAnimation.time)
  return time_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fpose_5fanimation_2eproto