// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/video_record.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fvideo_5frecord_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fvideo_5frecord_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto
namespace gz {
namespace msgs {
class VideoRecord;
class VideoRecordDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern VideoRecordDefaultTypeInternal _VideoRecord_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::VideoRecord* Arena::CreateMaybeMessage<::gz::msgs::VideoRecord>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE VideoRecord : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.VideoRecord) */ {
 public:
  VideoRecord();
  virtual ~VideoRecord();

  VideoRecord(const VideoRecord& from);

  inline VideoRecord& operator=(const VideoRecord& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VideoRecord(VideoRecord&& from) noexcept
    : VideoRecord() {
    *this = ::std::move(from);
  }

  inline VideoRecord& operator=(VideoRecord&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const VideoRecord& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VideoRecord* internal_default_instance() {
    return reinterpret_cast<const VideoRecord*>(
               &_VideoRecord_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(VideoRecord* other);
  friend void swap(VideoRecord& a, VideoRecord& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VideoRecord* New() const final {
    return CreateMaybeMessage<VideoRecord>(NULL);
  }

  VideoRecord* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<VideoRecord>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const VideoRecord& from);
  void MergeFrom(const VideoRecord& from);
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
  void InternalSwap(VideoRecord* other);
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

  // string format = 4;
  void clear_format();
  static const int kFormatFieldNumber = 4;
  const ::std::string& format() const;
  void set_format(const ::std::string& value);
  #if LANG_CXX11
  void set_format(::std::string&& value);
  #endif
  void set_format(const char* value);
  void set_format(const char* value, size_t size);
  ::std::string* mutable_format();
  ::std::string* release_format();
  void set_allocated_format(::std::string* format);

  // string save_filename = 5;
  void clear_save_filename();
  static const int kSaveFilenameFieldNumber = 5;
  const ::std::string& save_filename() const;
  void set_save_filename(const ::std::string& value);
  #if LANG_CXX11
  void set_save_filename(::std::string&& value);
  #endif
  void set_save_filename(const char* value);
  void set_save_filename(const char* value, size_t size);
  ::std::string* mutable_save_filename();
  ::std::string* release_save_filename();
  void set_allocated_save_filename(::std::string* save_filename);

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

  // bool start = 2;
  void clear_start();
  static const int kStartFieldNumber = 2;
  bool start() const;
  void set_start(bool value);

  // bool stop = 3;
  void clear_stop();
  static const int kStopFieldNumber = 3;
  bool stop() const;
  void set_stop(bool value);

  // @@protoc_insertion_point(class_scope:gz.msgs.VideoRecord)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr format_;
  ::google::protobuf::internal::ArenaStringPtr save_filename_;
  ::gz::msgs::Header* header_;
  bool start_;
  bool stop_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VideoRecord

// .gz.msgs.Header header = 1;
inline bool VideoRecord::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& VideoRecord::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& VideoRecord::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.VideoRecord.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* VideoRecord::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.VideoRecord.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* VideoRecord::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.VideoRecord.header)
  return header_;
}
inline void VideoRecord::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.VideoRecord.header)
}

// bool start = 2;
inline void VideoRecord::clear_start() {
  start_ = false;
}
inline bool VideoRecord::start() const {
  // @@protoc_insertion_point(field_get:gz.msgs.VideoRecord.start)
  return start_;
}
inline void VideoRecord::set_start(bool value) {
  
  start_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.VideoRecord.start)
}

// bool stop = 3;
inline void VideoRecord::clear_stop() {
  stop_ = false;
}
inline bool VideoRecord::stop() const {
  // @@protoc_insertion_point(field_get:gz.msgs.VideoRecord.stop)
  return stop_;
}
inline void VideoRecord::set_stop(bool value) {
  
  stop_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.VideoRecord.stop)
}

// string format = 4;
inline void VideoRecord::clear_format() {
  format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VideoRecord::format() const {
  // @@protoc_insertion_point(field_get:gz.msgs.VideoRecord.format)
  return format_.GetNoArena();
}
inline void VideoRecord::set_format(const ::std::string& value) {
  
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.VideoRecord.format)
}
#if LANG_CXX11
inline void VideoRecord::set_format(::std::string&& value) {
  
  format_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.VideoRecord.format)
}
#endif
inline void VideoRecord::set_format(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.VideoRecord.format)
}
inline void VideoRecord::set_format(const char* value, size_t size) {
  
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.VideoRecord.format)
}
inline ::std::string* VideoRecord::mutable_format() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.VideoRecord.format)
  return format_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VideoRecord::release_format() {
  // @@protoc_insertion_point(field_release:gz.msgs.VideoRecord.format)
  
  return format_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VideoRecord::set_allocated_format(::std::string* format) {
  if (format != NULL) {
    
  } else {
    
  }
  format_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), format);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.VideoRecord.format)
}

// string save_filename = 5;
inline void VideoRecord::clear_save_filename() {
  save_filename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VideoRecord::save_filename() const {
  // @@protoc_insertion_point(field_get:gz.msgs.VideoRecord.save_filename)
  return save_filename_.GetNoArena();
}
inline void VideoRecord::set_save_filename(const ::std::string& value) {
  
  save_filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.VideoRecord.save_filename)
}
#if LANG_CXX11
inline void VideoRecord::set_save_filename(::std::string&& value) {
  
  save_filename_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.VideoRecord.save_filename)
}
#endif
inline void VideoRecord::set_save_filename(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  save_filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.VideoRecord.save_filename)
}
inline void VideoRecord::set_save_filename(const char* value, size_t size) {
  
  save_filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.VideoRecord.save_filename)
}
inline ::std::string* VideoRecord::mutable_save_filename() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.VideoRecord.save_filename)
  return save_filename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VideoRecord::release_save_filename() {
  // @@protoc_insertion_point(field_release:gz.msgs.VideoRecord.save_filename)
  
  return save_filename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VideoRecord::set_allocated_save_filename(::std::string* save_filename) {
  if (save_filename != NULL) {
    
  } else {
    
  }
  save_filename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), save_filename);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.VideoRecord.save_filename)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fvideo_5frecord_2eproto
