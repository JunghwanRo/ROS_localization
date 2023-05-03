// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/dataframe.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fdataframe_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fdataframe_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fdataframe_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fdataframe_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fdataframe_2eproto
namespace gz {
namespace msgs {
class Dataframe;
class DataframeDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern DataframeDefaultTypeInternal _Dataframe_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::Dataframe* Arena::CreateMaybeMessage<::gz::msgs::Dataframe>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Dataframe : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.Dataframe) */ {
 public:
  Dataframe();
  virtual ~Dataframe();

  Dataframe(const Dataframe& from);

  inline Dataframe& operator=(const Dataframe& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Dataframe(Dataframe&& from) noexcept
    : Dataframe() {
    *this = ::std::move(from);
  }

  inline Dataframe& operator=(Dataframe&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Dataframe& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Dataframe* internal_default_instance() {
    return reinterpret_cast<const Dataframe*>(
               &_Dataframe_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Dataframe* other);
  friend void swap(Dataframe& a, Dataframe& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Dataframe* New() const final {
    return CreateMaybeMessage<Dataframe>(NULL);
  }

  Dataframe* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Dataframe>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Dataframe& from);
  void MergeFrom(const Dataframe& from);
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
  void InternalSwap(Dataframe* other);
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

  // string src_address = 2;
  void clear_src_address();
  static const int kSrcAddressFieldNumber = 2;
  const ::std::string& src_address() const;
  void set_src_address(const ::std::string& value);
  #if LANG_CXX11
  void set_src_address(::std::string&& value);
  #endif
  void set_src_address(const char* value);
  void set_src_address(const char* value, size_t size);
  ::std::string* mutable_src_address();
  ::std::string* release_src_address();
  void set_allocated_src_address(::std::string* src_address);

  // string dst_address = 3;
  void clear_dst_address();
  static const int kDstAddressFieldNumber = 3;
  const ::std::string& dst_address() const;
  void set_dst_address(const ::std::string& value);
  #if LANG_CXX11
  void set_dst_address(::std::string&& value);
  #endif
  void set_dst_address(const char* value);
  void set_dst_address(const char* value, size_t size);
  ::std::string* mutable_dst_address();
  ::std::string* release_dst_address();
  void set_allocated_dst_address(::std::string* dst_address);

  // bytes data = 4;
  void clear_data();
  static const int kDataFieldNumber = 4;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

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

  // @@protoc_insertion_point(class_scope:gz.msgs.Dataframe)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr src_address_;
  ::google::protobuf::internal::ArenaStringPtr dst_address_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::gz::msgs::Header* header_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fdataframe_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Dataframe

// .gz.msgs.Header header = 1;
inline bool Dataframe::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& Dataframe::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& Dataframe::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.Dataframe.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* Dataframe::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.Dataframe.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* Dataframe::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.Dataframe.header)
  return header_;
}
inline void Dataframe::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Dataframe.header)
}

// string src_address = 2;
inline void Dataframe::clear_src_address() {
  src_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Dataframe::src_address() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Dataframe.src_address)
  return src_address_.GetNoArena();
}
inline void Dataframe::set_src_address(const ::std::string& value) {
  
  src_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Dataframe.src_address)
}
#if LANG_CXX11
inline void Dataframe::set_src_address(::std::string&& value) {
  
  src_address_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Dataframe.src_address)
}
#endif
inline void Dataframe::set_src_address(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  src_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Dataframe.src_address)
}
inline void Dataframe::set_src_address(const char* value, size_t size) {
  
  src_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Dataframe.src_address)
}
inline ::std::string* Dataframe::mutable_src_address() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Dataframe.src_address)
  return src_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Dataframe::release_src_address() {
  // @@protoc_insertion_point(field_release:gz.msgs.Dataframe.src_address)
  
  return src_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Dataframe::set_allocated_src_address(::std::string* src_address) {
  if (src_address != NULL) {
    
  } else {
    
  }
  src_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), src_address);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Dataframe.src_address)
}

// string dst_address = 3;
inline void Dataframe::clear_dst_address() {
  dst_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Dataframe::dst_address() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Dataframe.dst_address)
  return dst_address_.GetNoArena();
}
inline void Dataframe::set_dst_address(const ::std::string& value) {
  
  dst_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Dataframe.dst_address)
}
#if LANG_CXX11
inline void Dataframe::set_dst_address(::std::string&& value) {
  
  dst_address_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Dataframe.dst_address)
}
#endif
inline void Dataframe::set_dst_address(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  dst_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Dataframe.dst_address)
}
inline void Dataframe::set_dst_address(const char* value, size_t size) {
  
  dst_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Dataframe.dst_address)
}
inline ::std::string* Dataframe::mutable_dst_address() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Dataframe.dst_address)
  return dst_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Dataframe::release_dst_address() {
  // @@protoc_insertion_point(field_release:gz.msgs.Dataframe.dst_address)
  
  return dst_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Dataframe::set_allocated_dst_address(::std::string* dst_address) {
  if (dst_address != NULL) {
    
  } else {
    
  }
  dst_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dst_address);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Dataframe.dst_address)
}

// bytes data = 4;
inline void Dataframe::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Dataframe::data() const {
  // @@protoc_insertion_point(field_get:gz.msgs.Dataframe.data)
  return data_.GetNoArena();
}
inline void Dataframe::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.Dataframe.data)
}
#if LANG_CXX11
inline void Dataframe::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.Dataframe.data)
}
#endif
inline void Dataframe::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.Dataframe.data)
}
inline void Dataframe::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.Dataframe.data)
}
inline ::std::string* Dataframe::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.Dataframe.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Dataframe::release_data() {
  // @@protoc_insertion_point(field_release:gz.msgs.Dataframe.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Dataframe::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.Dataframe.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fdataframe_2eproto
