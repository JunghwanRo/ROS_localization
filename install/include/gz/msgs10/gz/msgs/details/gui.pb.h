// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/gui.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fgui_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fgui_2eproto

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
#include "gz/msgs/gui_camera.pb.h"
#include "gz/msgs/plugin.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fgui_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fgui_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fgui_2eproto
namespace gz {
namespace msgs {
class GUI;
class GUIDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern GUIDefaultTypeInternal _GUI_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::GUI* Arena::CreateMaybeMessage<::gz::msgs::GUI>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE GUI : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.GUI) */ {
 public:
  GUI();
  virtual ~GUI();

  GUI(const GUI& from);

  inline GUI& operator=(const GUI& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GUI(GUI&& from) noexcept
    : GUI() {
    *this = ::std::move(from);
  }

  inline GUI& operator=(GUI&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GUI& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GUI* internal_default_instance() {
    return reinterpret_cast<const GUI*>(
               &_GUI_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GUI* other);
  friend void swap(GUI& a, GUI& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GUI* New() const final {
    return CreateMaybeMessage<GUI>(NULL);
  }

  GUI* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GUI>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GUI& from);
  void MergeFrom(const GUI& from);
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
  void InternalSwap(GUI* other);
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

  // repeated .gz.msgs.Plugin plugin = 4;
  int plugin_size() const;
  void clear_plugin();
  static const int kPluginFieldNumber = 4;
  ::gz::msgs::Plugin* mutable_plugin(int index);
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >*
      mutable_plugin();
  const ::gz::msgs::Plugin& plugin(int index) const;
  ::gz::msgs::Plugin* add_plugin();
  const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >&
      plugin() const;

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

  // .gz.msgs.GUICamera camera = 3;
  bool has_camera() const;
  void clear_camera();
  static const int kCameraFieldNumber = 3;
  private:
  const ::gz::msgs::GUICamera& _internal_camera() const;
  public:
  const ::gz::msgs::GUICamera& camera() const;
  ::gz::msgs::GUICamera* release_camera();
  ::gz::msgs::GUICamera* mutable_camera();
  void set_allocated_camera(::gz::msgs::GUICamera* camera);

  // bool fullscreen = 2;
  void clear_fullscreen();
  static const int kFullscreenFieldNumber = 2;
  bool fullscreen() const;
  void set_fullscreen(bool value);

  // @@protoc_insertion_point(class_scope:gz.msgs.GUI)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin > plugin_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::GUICamera* camera_;
  bool fullscreen_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fgui_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GUI

// .gz.msgs.Header header = 1;
inline bool GUI::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& GUI::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& GUI::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.GUI.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* GUI::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.GUI.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* GUI::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.GUI.header)
  return header_;
}
inline void GUI::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.GUI.header)
}

// bool fullscreen = 2;
inline void GUI::clear_fullscreen() {
  fullscreen_ = false;
}
inline bool GUI::fullscreen() const {
  // @@protoc_insertion_point(field_get:gz.msgs.GUI.fullscreen)
  return fullscreen_;
}
inline void GUI::set_fullscreen(bool value) {
  
  fullscreen_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.GUI.fullscreen)
}

// .gz.msgs.GUICamera camera = 3;
inline bool GUI::has_camera() const {
  return this != internal_default_instance() && camera_ != NULL;
}
inline const ::gz::msgs::GUICamera& GUI::_internal_camera() const {
  return *camera_;
}
inline const ::gz::msgs::GUICamera& GUI::camera() const {
  const ::gz::msgs::GUICamera* p = camera_;
  // @@protoc_insertion_point(field_get:gz.msgs.GUI.camera)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::GUICamera*>(
      &::gz::msgs::_GUICamera_default_instance_);
}
inline ::gz::msgs::GUICamera* GUI::release_camera() {
  // @@protoc_insertion_point(field_release:gz.msgs.GUI.camera)
  
  ::gz::msgs::GUICamera* temp = camera_;
  camera_ = NULL;
  return temp;
}
inline ::gz::msgs::GUICamera* GUI::mutable_camera() {
  
  if (camera_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::GUICamera>(GetArenaNoVirtual());
    camera_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.GUI.camera)
  return camera_;
}
inline void GUI::set_allocated_camera(::gz::msgs::GUICamera* camera) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(camera_);
  }
  if (camera) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      camera = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, camera, submessage_arena);
    }
    
  } else {
    
  }
  camera_ = camera;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.GUI.camera)
}

// repeated .gz.msgs.Plugin plugin = 4;
inline int GUI::plugin_size() const {
  return plugin_.size();
}
inline ::gz::msgs::Plugin* GUI::mutable_plugin(int index) {
  // @@protoc_insertion_point(field_mutable:gz.msgs.GUI.plugin)
  return plugin_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >*
GUI::mutable_plugin() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.GUI.plugin)
  return &plugin_;
}
inline const ::gz::msgs::Plugin& GUI::plugin(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.GUI.plugin)
  return plugin_.Get(index);
}
inline ::gz::msgs::Plugin* GUI::add_plugin() {
  // @@protoc_insertion_point(field_add:gz.msgs.GUI.plugin)
  return plugin_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gz::msgs::Plugin >&
GUI::plugin() const {
  // @@protoc_insertion_point(field_list:gz.msgs.GUI.plugin)
  return plugin_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fgui_2eproto
