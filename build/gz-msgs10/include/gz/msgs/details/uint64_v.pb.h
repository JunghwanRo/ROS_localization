// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/uint64_v.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fuint64_5fv_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fuint64_5fv_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fuint64_5fv_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fuint64_5fv_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fuint64_5fv_2eproto
namespace gz {
namespace msgs {
class UInt64_V;
class UInt64_VDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern UInt64_VDefaultTypeInternal _UInt64_V_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::UInt64_V* Arena::CreateMaybeMessage<::gz::msgs::UInt64_V>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE UInt64_V : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.UInt64_V) */ {
 public:
  UInt64_V();
  virtual ~UInt64_V();

  UInt64_V(const UInt64_V& from);

  inline UInt64_V& operator=(const UInt64_V& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UInt64_V(UInt64_V&& from) noexcept
    : UInt64_V() {
    *this = ::std::move(from);
  }

  inline UInt64_V& operator=(UInt64_V&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UInt64_V& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UInt64_V* internal_default_instance() {
    return reinterpret_cast<const UInt64_V*>(
               &_UInt64_V_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(UInt64_V* other);
  friend void swap(UInt64_V& a, UInt64_V& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UInt64_V* New() const final {
    return CreateMaybeMessage<UInt64_V>(NULL);
  }

  UInt64_V* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<UInt64_V>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const UInt64_V& from);
  void MergeFrom(const UInt64_V& from);
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
  void InternalSwap(UInt64_V* other);
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

  // repeated uint64 data = 2;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 2;
  ::google::protobuf::uint64 data(int index) const;
  void set_data(int index, ::google::protobuf::uint64 value);
  void add_data(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      data() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_data();

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

  // @@protoc_insertion_point(class_scope:gz.msgs.UInt64_V)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > data_;
  mutable int _data_cached_byte_size_;
  ::gz::msgs::Header* header_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fuint64_5fv_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UInt64_V

// .gz.msgs.Header header = 1;
inline bool UInt64_V::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& UInt64_V::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& UInt64_V::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.UInt64_V.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* UInt64_V::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.UInt64_V.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* UInt64_V::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.UInt64_V.header)
  return header_;
}
inline void UInt64_V::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.UInt64_V.header)
}

// repeated uint64 data = 2;
inline int UInt64_V::data_size() const {
  return data_.size();
}
inline void UInt64_V::clear_data() {
  data_.Clear();
}
inline ::google::protobuf::uint64 UInt64_V::data(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.UInt64_V.data)
  return data_.Get(index);
}
inline void UInt64_V::set_data(int index, ::google::protobuf::uint64 value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.UInt64_V.data)
}
inline void UInt64_V::add_data(::google::protobuf::uint64 value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.UInt64_V.data)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
UInt64_V::data() const {
  // @@protoc_insertion_point(field_list:gz.msgs.UInt64_V.data)
  return data_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
UInt64_V::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.UInt64_V.data)
  return &data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fuint64_5fv_2eproto
