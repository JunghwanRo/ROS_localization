// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/gui_camera.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fgui_5fcamera_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fgui_5fcamera_2eproto

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
#include "gz/msgs/track_visual.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fgui_5fcamera_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fgui_5fcamera_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fgui_5fcamera_2eproto
namespace gz {
namespace msgs {
class GUICamera;
class GUICameraDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern GUICameraDefaultTypeInternal _GUICamera_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::GUICamera* Arena::CreateMaybeMessage<::gz::msgs::GUICamera>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE GUICamera : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.GUICamera) */ {
 public:
  GUICamera();
  virtual ~GUICamera();

  GUICamera(const GUICamera& from);

  inline GUICamera& operator=(const GUICamera& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GUICamera(GUICamera&& from) noexcept
    : GUICamera() {
    *this = ::std::move(from);
  }

  inline GUICamera& operator=(GUICamera&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GUICamera& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GUICamera* internal_default_instance() {
    return reinterpret_cast<const GUICamera*>(
               &_GUICamera_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GUICamera* other);
  friend void swap(GUICamera& a, GUICamera& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GUICamera* New() const final {
    return CreateMaybeMessage<GUICamera>(NULL);
  }

  GUICamera* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GUICamera>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GUICamera& from);
  void MergeFrom(const GUICamera& from);
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
  void InternalSwap(GUICamera* other);
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

  // string view_controller = 3;
  void clear_view_controller();
  static const int kViewControllerFieldNumber = 3;
  const ::std::string& view_controller() const;
  void set_view_controller(const ::std::string& value);
  #if LANG_CXX11
  void set_view_controller(::std::string&& value);
  #endif
  void set_view_controller(const char* value);
  void set_view_controller(const char* value, size_t size);
  ::std::string* mutable_view_controller();
  ::std::string* release_view_controller();
  void set_allocated_view_controller(::std::string* view_controller);

  // string projection_type = 6;
  void clear_projection_type();
  static const int kProjectionTypeFieldNumber = 6;
  const ::std::string& projection_type() const;
  void set_projection_type(const ::std::string& value);
  #if LANG_CXX11
  void set_projection_type(::std::string&& value);
  #endif
  void set_projection_type(const char* value);
  void set_projection_type(const char* value, size_t size);
  ::std::string* mutable_projection_type();
  ::std::string* release_projection_type();
  void set_allocated_projection_type(::std::string* projection_type);

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

  // .gz.msgs.Pose pose = 4;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 4;
  private:
  const ::gz::msgs::Pose& _internal_pose() const;
  public:
  const ::gz::msgs::Pose& pose() const;
  ::gz::msgs::Pose* release_pose();
  ::gz::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gz::msgs::Pose* pose);

  // .gz.msgs.TrackVisual track = 5;
  bool has_track() const;
  void clear_track();
  static const int kTrackFieldNumber = 5;
  private:
  const ::gz::msgs::TrackVisual& _internal_track() const;
  public:
  const ::gz::msgs::TrackVisual& track() const;
  ::gz::msgs::TrackVisual* release_track();
  ::gz::msgs::TrackVisual* mutable_track();
  void set_allocated_track(::gz::msgs::TrackVisual* track);

  // @@protoc_insertion_point(class_scope:gz.msgs.GUICamera)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr view_controller_;
  ::google::protobuf::internal::ArenaStringPtr projection_type_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Pose* pose_;
  ::gz::msgs::TrackVisual* track_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fgui_5fcamera_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GUICamera

// .gz.msgs.Header header = 1;
inline bool GUICamera::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& GUICamera::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& GUICamera::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.GUICamera.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* GUICamera::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.GUICamera.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* GUICamera::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.GUICamera.header)
  return header_;
}
inline void GUICamera::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.GUICamera.header)
}

// string name = 2;
inline void GUICamera::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GUICamera::name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.GUICamera.name)
  return name_.GetNoArena();
}
inline void GUICamera::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.GUICamera.name)
}
#if LANG_CXX11
inline void GUICamera::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.GUICamera.name)
}
#endif
inline void GUICamera::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.GUICamera.name)
}
inline void GUICamera::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.GUICamera.name)
}
inline ::std::string* GUICamera::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.GUICamera.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GUICamera::release_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.GUICamera.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GUICamera::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.GUICamera.name)
}

// string view_controller = 3;
inline void GUICamera::clear_view_controller() {
  view_controller_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GUICamera::view_controller() const {
  // @@protoc_insertion_point(field_get:gz.msgs.GUICamera.view_controller)
  return view_controller_.GetNoArena();
}
inline void GUICamera::set_view_controller(const ::std::string& value) {
  
  view_controller_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.GUICamera.view_controller)
}
#if LANG_CXX11
inline void GUICamera::set_view_controller(::std::string&& value) {
  
  view_controller_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.GUICamera.view_controller)
}
#endif
inline void GUICamera::set_view_controller(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  view_controller_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.GUICamera.view_controller)
}
inline void GUICamera::set_view_controller(const char* value, size_t size) {
  
  view_controller_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.GUICamera.view_controller)
}
inline ::std::string* GUICamera::mutable_view_controller() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.GUICamera.view_controller)
  return view_controller_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GUICamera::release_view_controller() {
  // @@protoc_insertion_point(field_release:gz.msgs.GUICamera.view_controller)
  
  return view_controller_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GUICamera::set_allocated_view_controller(::std::string* view_controller) {
  if (view_controller != NULL) {
    
  } else {
    
  }
  view_controller_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), view_controller);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.GUICamera.view_controller)
}

// .gz.msgs.Pose pose = 4;
inline bool GUICamera::has_pose() const {
  return this != internal_default_instance() && pose_ != NULL;
}
inline const ::gz::msgs::Pose& GUICamera::_internal_pose() const {
  return *pose_;
}
inline const ::gz::msgs::Pose& GUICamera::pose() const {
  const ::gz::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:gz.msgs.GUICamera.pose)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Pose*>(
      &::gz::msgs::_Pose_default_instance_);
}
inline ::gz::msgs::Pose* GUICamera::release_pose() {
  // @@protoc_insertion_point(field_release:gz.msgs.GUICamera.pose)
  
  ::gz::msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline ::gz::msgs::Pose* GUICamera::mutable_pose() {
  
  if (pose_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.GUICamera.pose)
  return pose_;
}
inline void GUICamera::set_allocated_pose(::gz::msgs::Pose* pose) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.GUICamera.pose)
}

// .gz.msgs.TrackVisual track = 5;
inline bool GUICamera::has_track() const {
  return this != internal_default_instance() && track_ != NULL;
}
inline const ::gz::msgs::TrackVisual& GUICamera::_internal_track() const {
  return *track_;
}
inline const ::gz::msgs::TrackVisual& GUICamera::track() const {
  const ::gz::msgs::TrackVisual* p = track_;
  // @@protoc_insertion_point(field_get:gz.msgs.GUICamera.track)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::TrackVisual*>(
      &::gz::msgs::_TrackVisual_default_instance_);
}
inline ::gz::msgs::TrackVisual* GUICamera::release_track() {
  // @@protoc_insertion_point(field_release:gz.msgs.GUICamera.track)
  
  ::gz::msgs::TrackVisual* temp = track_;
  track_ = NULL;
  return temp;
}
inline ::gz::msgs::TrackVisual* GUICamera::mutable_track() {
  
  if (track_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::TrackVisual>(GetArenaNoVirtual());
    track_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.GUICamera.track)
  return track_;
}
inline void GUICamera::set_allocated_track(::gz::msgs::TrackVisual* track) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(track_);
  }
  if (track) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      track = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, track, submessage_arena);
    }
    
  } else {
    
  }
  track_ = track;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.GUICamera.track)
}

// string projection_type = 6;
inline void GUICamera::clear_projection_type() {
  projection_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GUICamera::projection_type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.GUICamera.projection_type)
  return projection_type_.GetNoArena();
}
inline void GUICamera::set_projection_type(const ::std::string& value) {
  
  projection_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.GUICamera.projection_type)
}
#if LANG_CXX11
inline void GUICamera::set_projection_type(::std::string&& value) {
  
  projection_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.GUICamera.projection_type)
}
#endif
inline void GUICamera::set_projection_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  projection_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.GUICamera.projection_type)
}
inline void GUICamera::set_projection_type(const char* value, size_t size) {
  
  projection_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.GUICamera.projection_type)
}
inline ::std::string* GUICamera::mutable_projection_type() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.GUICamera.projection_type)
  return projection_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GUICamera::release_projection_type() {
  // @@protoc_insertion_point(field_release:gz.msgs.GUICamera.projection_type)
  
  return projection_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GUICamera::set_allocated_projection_type(::std::string* projection_type) {
  if (projection_type != NULL) {
    
  } else {
    
  }
  projection_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), projection_type);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.GUICamera.projection_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fgui_5fcamera_2eproto
