// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/sim_event.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2fsim_5fevent_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2fsim_5fevent_2eproto

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
#include "gz/msgs/world_stats.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fsim_5fevent_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2fsim_5fevent_2eproto {
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
}  // namespace protobuf_gz_2fmsgs_2fsim_5fevent_2eproto
namespace gz {
namespace msgs {
class SimEvent;
class SimEventDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern SimEventDefaultTypeInternal _SimEvent_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::SimEvent* Arena::CreateMaybeMessage<::gz::msgs::SimEvent>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE SimEvent : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.SimEvent) */ {
 public:
  SimEvent();
  virtual ~SimEvent();

  SimEvent(const SimEvent& from);

  inline SimEvent& operator=(const SimEvent& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SimEvent(SimEvent&& from) noexcept
    : SimEvent() {
    *this = ::std::move(from);
  }

  inline SimEvent& operator=(SimEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SimEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SimEvent* internal_default_instance() {
    return reinterpret_cast<const SimEvent*>(
               &_SimEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SimEvent* other);
  friend void swap(SimEvent& a, SimEvent& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SimEvent* New() const final {
    return CreateMaybeMessage<SimEvent>(NULL);
  }

  SimEvent* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SimEvent>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SimEvent& from);
  void MergeFrom(const SimEvent& from);
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
  void InternalSwap(SimEvent* other);
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

  // string type = 3;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // string name = 4;
  void clear_name();
  static const int kNameFieldNumber = 4;
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

  // string data = 6;
  void clear_data();
  static const int kDataFieldNumber = 6;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const char* value, size_t size);
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

  // .gz.msgs.WorldStatistics world_statistics = 5;
  bool has_world_statistics() const;
  void clear_world_statistics();
  static const int kWorldStatisticsFieldNumber = 5;
  private:
  const ::gz::msgs::WorldStatistics& _internal_world_statistics() const;
  public:
  const ::gz::msgs::WorldStatistics& world_statistics() const;
  ::gz::msgs::WorldStatistics* release_world_statistics();
  ::gz::msgs::WorldStatistics* mutable_world_statistics();
  void set_allocated_world_statistics(::gz::msgs::WorldStatistics* world_statistics);

  // uint32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gz.msgs.SimEvent)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::WorldStatistics* world_statistics_;
  ::google::protobuf::uint32 id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2fsim_5fevent_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SimEvent

// .gz.msgs.Header header = 1;
inline bool SimEvent::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& SimEvent::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& SimEvent::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.SimEvent.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* SimEvent::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.SimEvent.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* SimEvent::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.SimEvent.header)
  return header_;
}
inline void SimEvent::set_allocated_header(::gz::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.SimEvent.header)
}

// uint32 id = 2;
inline void SimEvent::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 SimEvent::id() const {
  // @@protoc_insertion_point(field_get:gz.msgs.SimEvent.id)
  return id_;
}
inline void SimEvent::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.SimEvent.id)
}

// string type = 3;
inline void SimEvent::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SimEvent::type() const {
  // @@protoc_insertion_point(field_get:gz.msgs.SimEvent.type)
  return type_.GetNoArena();
}
inline void SimEvent::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.SimEvent.type)
}
#if LANG_CXX11
inline void SimEvent::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.SimEvent.type)
}
#endif
inline void SimEvent::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.SimEvent.type)
}
inline void SimEvent::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.SimEvent.type)
}
inline ::std::string* SimEvent::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.SimEvent.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SimEvent::release_type() {
  // @@protoc_insertion_point(field_release:gz.msgs.SimEvent.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SimEvent::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.SimEvent.type)
}

// string name = 4;
inline void SimEvent::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SimEvent::name() const {
  // @@protoc_insertion_point(field_get:gz.msgs.SimEvent.name)
  return name_.GetNoArena();
}
inline void SimEvent::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.SimEvent.name)
}
#if LANG_CXX11
inline void SimEvent::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.SimEvent.name)
}
#endif
inline void SimEvent::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.SimEvent.name)
}
inline void SimEvent::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.SimEvent.name)
}
inline ::std::string* SimEvent::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.SimEvent.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SimEvent::release_name() {
  // @@protoc_insertion_point(field_release:gz.msgs.SimEvent.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SimEvent::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.SimEvent.name)
}

// .gz.msgs.WorldStatistics world_statistics = 5;
inline bool SimEvent::has_world_statistics() const {
  return this != internal_default_instance() && world_statistics_ != NULL;
}
inline const ::gz::msgs::WorldStatistics& SimEvent::_internal_world_statistics() const {
  return *world_statistics_;
}
inline const ::gz::msgs::WorldStatistics& SimEvent::world_statistics() const {
  const ::gz::msgs::WorldStatistics* p = world_statistics_;
  // @@protoc_insertion_point(field_get:gz.msgs.SimEvent.world_statistics)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::WorldStatistics*>(
      &::gz::msgs::_WorldStatistics_default_instance_);
}
inline ::gz::msgs::WorldStatistics* SimEvent::release_world_statistics() {
  // @@protoc_insertion_point(field_release:gz.msgs.SimEvent.world_statistics)
  
  ::gz::msgs::WorldStatistics* temp = world_statistics_;
  world_statistics_ = NULL;
  return temp;
}
inline ::gz::msgs::WorldStatistics* SimEvent::mutable_world_statistics() {
  
  if (world_statistics_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::WorldStatistics>(GetArenaNoVirtual());
    world_statistics_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.SimEvent.world_statistics)
  return world_statistics_;
}
inline void SimEvent::set_allocated_world_statistics(::gz::msgs::WorldStatistics* world_statistics) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(world_statistics_);
  }
  if (world_statistics) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      world_statistics = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, world_statistics, submessage_arena);
    }
    
  } else {
    
  }
  world_statistics_ = world_statistics;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.SimEvent.world_statistics)
}

// string data = 6;
inline void SimEvent::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SimEvent::data() const {
  // @@protoc_insertion_point(field_get:gz.msgs.SimEvent.data)
  return data_.GetNoArena();
}
inline void SimEvent::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.SimEvent.data)
}
#if LANG_CXX11
inline void SimEvent::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.SimEvent.data)
}
#endif
inline void SimEvent::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.SimEvent.data)
}
inline void SimEvent::set_data(const char* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.SimEvent.data)
}
inline ::std::string* SimEvent::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.SimEvent.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SimEvent::release_data() {
  // @@protoc_insertion_point(field_release:gz.msgs.SimEvent.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SimEvent::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.SimEvent.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2fsim_5fevent_2eproto
