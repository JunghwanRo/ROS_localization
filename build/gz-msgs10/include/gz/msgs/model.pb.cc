// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/model.proto

#include "gz/msgs/model.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
#include "gz/msgs/Factory.hh"
GZ_REGISTER_STATIC_MSG("gz_msgs.Model", Model)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_AxisAlignedBox;
}  // namespace protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fjoint_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fjoint_2eproto ::google::protobuf::internal::SCCInfo<6> scc_info_Joint;
}  // namespace protobuf_gz_2fmsgs_2fjoint_2eproto
namespace protobuf_gz_2fmsgs_2flink_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2flink_2eproto ::google::protobuf::internal::SCCInfo<11> scc_info_Link;
}  // namespace protobuf_gz_2fmsgs_2flink_2eproto
namespace protobuf_gz_2fmsgs_2fmodel_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fmodel_2eproto ::google::protobuf::internal::SCCInfo<7> scc_info_Model;
}  // namespace protobuf_gz_2fmsgs_2fmodel_2eproto
namespace protobuf_gz_2fmsgs_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fpose_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_Pose;
}  // namespace protobuf_gz_2fmsgs_2fpose_2eproto
namespace protobuf_gz_2fmsgs_2fvector3d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fvector3d_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Vector3d;
}  // namespace protobuf_gz_2fmsgs_2fvector3d_2eproto
namespace protobuf_gz_2fmsgs_2fvisual_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fvisual_2eproto ::google::protobuf::internal::SCCInfo<7> scc_info_Visual;
}  // namespace protobuf_gz_2fmsgs_2fvisual_2eproto
namespace gz {
namespace msgs {
class ModelDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Model>
      _instance;
} _Model_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fmodel_2eproto {
static void InitDefaultsModel() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Model_default_instance_;
    new (ptr) ::gz::msgs::Model();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Model::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<7> scc_info_Model =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 7, InitDefaultsModel}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fpose_2eproto::scc_info_Pose.base,
      &protobuf_gz_2fmsgs_2fjoint_2eproto::scc_info_Joint.base,
      &protobuf_gz_2fmsgs_2flink_2eproto::scc_info_Link.base,
      &protobuf_gz_2fmsgs_2fvisual_2eproto::scc_info_Visual.base,
      &protobuf_gz_2fmsgs_2fvector3d_2eproto::scc_info_Vector3d.base,
      &protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto::scc_info_AxisAlignedBox.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Model.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, is_static_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, joint_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, link_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, deleted_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, visual_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, scale_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, self_collide_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, model_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Model, bounding_box_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Model)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Model_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/model.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\023gz/msgs/model.proto\022\007gz.msgs\032\036gz/msgs/"
      "axis_aligned_box.proto\032\023gz/msgs/joint.pr"
      "oto\032\022gz/msgs/link.proto\032\022gz/msgs/pose.pr"
      "oto\032\024gz/msgs/visual.proto\032\026gz/msgs/vecto"
      "r3d.proto\032\024gz/msgs/header.proto\"\346\002\n\005Mode"
      "l\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.Header\022\014\n\004na"
      "me\030\002 \001(\t\022\n\n\002id\030\003 \001(\r\022\021\n\tis_static\030\004 \001(\010\022"
      "\033\n\004pose\030\005 \001(\0132\r.gz.msgs.Pose\022\035\n\005joint\030\006 "
      "\003(\0132\016.gz.msgs.Joint\022\033\n\004link\030\007 \003(\0132\r.gz.m"
      "sgs.Link\022\017\n\007deleted\030\010 \001(\010\022\037\n\006visual\030\t \003("
      "\0132\017.gz.msgs.Visual\022 \n\005scale\030\n \001(\0132\021.gz.m"
      "sgs.Vector3d\022\024\n\014self_collide\030\013 \001(\010\022\035\n\005mo"
      "del\030\014 \003(\0132\016.gz.msgs.Model\022-\n\014bounding_bo"
      "x\030\r \001(\0132\027.gz.msgs.AxisAlignedBoxB\032\n\013com."
      "gz.msgsB\013ModelProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 588);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/model.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2faxis_5faligned_5fbox_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fjoint_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2flink_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fpose_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fvisual_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fvector3d_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_gz_2fmsgs_2fmodel_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void Model::InitAsDefaultInstance() {
  ::gz::msgs::_Model_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_Model_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gz::msgs::Pose*>(
      ::gz::msgs::Pose::internal_default_instance());
  ::gz::msgs::_Model_default_instance_._instance.get_mutable()->scale_ = const_cast< ::gz::msgs::Vector3d*>(
      ::gz::msgs::Vector3d::internal_default_instance());
  ::gz::msgs::_Model_default_instance_._instance.get_mutable()->bounding_box_ = const_cast< ::gz::msgs::AxisAlignedBox*>(
      ::gz::msgs::AxisAlignedBox::internal_default_instance());
}
void Model::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void Model::clear_pose() {
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
}
void Model::clear_joint() {
  joint_.Clear();
}
void Model::clear_link() {
  link_.Clear();
}
void Model::clear_visual() {
  visual_.Clear();
}
void Model::clear_scale() {
  if (GetArenaNoVirtual() == NULL && scale_ != NULL) {
    delete scale_;
  }
  scale_ = NULL;
}
void Model::clear_bounding_box() {
  if (GetArenaNoVirtual() == NULL && bounding_box_ != NULL) {
    delete bounding_box_;
  }
  bounding_box_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Model::kHeaderFieldNumber;
const int Model::kNameFieldNumber;
const int Model::kIdFieldNumber;
const int Model::kIsStaticFieldNumber;
const int Model::kPoseFieldNumber;
const int Model::kJointFieldNumber;
const int Model::kLinkFieldNumber;
const int Model::kDeletedFieldNumber;
const int Model::kVisualFieldNumber;
const int Model::kScaleFieldNumber;
const int Model::kSelfCollideFieldNumber;
const int Model::kModelFieldNumber;
const int Model::kBoundingBoxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Model::Model()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fmodel_2eproto::scc_info_Model.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Model)
}
Model::Model(const Model& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      joint_(from.joint_),
      link_(from.link_),
      visual_(from.visual_),
      model_(from.model_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_pose()) {
    pose_ = new ::gz::msgs::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  if (from.has_scale()) {
    scale_ = new ::gz::msgs::Vector3d(*from.scale_);
  } else {
    scale_ = NULL;
  }
  if (from.has_bounding_box()) {
    bounding_box_ = new ::gz::msgs::AxisAlignedBox(*from.bounding_box_);
  } else {
    bounding_box_ = NULL;
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&self_collide_) -
    reinterpret_cast<char*>(&id_)) + sizeof(self_collide_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Model)
}

void Model::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&self_collide_) -
      reinterpret_cast<char*>(&header_)) + sizeof(self_collide_));
}

Model::~Model() {
  // @@protoc_insertion_point(destructor:gz.msgs.Model)
  SharedDtor();
}

void Model::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete pose_;
  if (this != internal_default_instance()) delete scale_;
  if (this != internal_default_instance()) delete bounding_box_;
}

void Model::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Model::descriptor() {
  ::protobuf_gz_2fmsgs_2fmodel_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fmodel_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Model& Model::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fmodel_2eproto::scc_info_Model.base);
  return *internal_default_instance();
}


void Model::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Model)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  joint_.Clear();
  link_.Clear();
  visual_.Clear();
  model_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
  if (GetArenaNoVirtual() == NULL && scale_ != NULL) {
    delete scale_;
  }
  scale_ = NULL;
  if (GetArenaNoVirtual() == NULL && bounding_box_ != NULL) {
    delete bounding_box_;
  }
  bounding_box_ = NULL;
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&self_collide_) -
      reinterpret_cast<char*>(&id_)) + sizeof(self_collide_));
  _internal_metadata_.Clear();
}

bool Model::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Model)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Model.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_static = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_static_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Pose pose = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Joint joint = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_joint()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Link link = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_link()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool deleted = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &deleted_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Visual visual = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_visual()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Vector3d scale = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_scale()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool self_collide = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &self_collide_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Model model = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_model()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.AxisAlignedBox bounding_box = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_bounding_box()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gz.msgs.Model)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Model)
  return false;
#undef DO_
}

void Model::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Model)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Model.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // uint32 id = 3;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->id(), output);
  }

  // bool is_static = 4;
  if (this->is_static() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_static(), output);
  }

  // .gz.msgs.Pose pose = 5;
  if (this->has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_pose(), output);
  }

  // repeated .gz.msgs.Joint joint = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->joint_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6,
      this->joint(static_cast<int>(i)),
      output);
  }

  // repeated .gz.msgs.Link link = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->link_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7,
      this->link(static_cast<int>(i)),
      output);
  }

  // bool deleted = 8;
  if (this->deleted() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->deleted(), output);
  }

  // repeated .gz.msgs.Visual visual = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->visual_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9,
      this->visual(static_cast<int>(i)),
      output);
  }

  // .gz.msgs.Vector3d scale = 10;
  if (this->has_scale()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->_internal_scale(), output);
  }

  // bool self_collide = 11;
  if (this->self_collide() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->self_collide(), output);
  }

  // repeated .gz.msgs.Model model = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->model_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12,
      this->model(static_cast<int>(i)),
      output);
  }

  // .gz.msgs.AxisAlignedBox bounding_box = 13;
  if (this->has_bounding_box()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, this->_internal_bounding_box(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Model)
}

::google::protobuf::uint8* Model::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Model)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Model.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // uint32 id = 3;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->id(), target);
  }

  // bool is_static = 4;
  if (this->is_static() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_static(), target);
  }

  // .gz.msgs.Pose pose = 5;
  if (this->has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_pose(), deterministic, target);
  }

  // repeated .gz.msgs.Joint joint = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->joint_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->joint(static_cast<int>(i)), deterministic, target);
  }

  // repeated .gz.msgs.Link link = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->link_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->link(static_cast<int>(i)), deterministic, target);
  }

  // bool deleted = 8;
  if (this->deleted() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->deleted(), target);
  }

  // repeated .gz.msgs.Visual visual = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->visual_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        9, this->visual(static_cast<int>(i)), deterministic, target);
  }

  // .gz.msgs.Vector3d scale = 10;
  if (this->has_scale()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        10, this->_internal_scale(), deterministic, target);
  }

  // bool self_collide = 11;
  if (this->self_collide() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->self_collide(), target);
  }

  // repeated .gz.msgs.Model model = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->model_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        12, this->model(static_cast<int>(i)), deterministic, target);
  }

  // .gz.msgs.AxisAlignedBox bounding_box = 13;
  if (this->has_bounding_box()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        13, this->_internal_bounding_box(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Model)
  return target;
}

size_t Model::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Model)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .gz.msgs.Joint joint = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->joint_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->joint(static_cast<int>(i)));
    }
  }

  // repeated .gz.msgs.Link link = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->link_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->link(static_cast<int>(i)));
    }
  }

  // repeated .gz.msgs.Visual visual = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->visual_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->visual(static_cast<int>(i)));
    }
  }

  // repeated .gz.msgs.Model model = 12;
  {
    unsigned int count = static_cast<unsigned int>(this->model_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->model(static_cast<int>(i)));
    }
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.Pose pose = 5;
  if (this->has_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  // .gz.msgs.Vector3d scale = 10;
  if (this->has_scale()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *scale_);
  }

  // .gz.msgs.AxisAlignedBox bounding_box = 13;
  if (this->has_bounding_box()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *bounding_box_);
  }

  // uint32 id = 3;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // bool is_static = 4;
  if (this->is_static() != 0) {
    total_size += 1 + 1;
  }

  // bool deleted = 8;
  if (this->deleted() != 0) {
    total_size += 1 + 1;
  }

  // bool self_collide = 11;
  if (this->self_collide() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Model::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Model)
  GOOGLE_DCHECK_NE(&from, this);
  const Model* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Model>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Model)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Model)
    MergeFrom(*source);
  }
}

void Model::MergeFrom(const Model& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Model)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  joint_.MergeFrom(from.joint_);
  link_.MergeFrom(from.link_);
  visual_.MergeFrom(from.visual_);
  model_.MergeFrom(from.model_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_pose()) {
    mutable_pose()->::gz::msgs::Pose::MergeFrom(from.pose());
  }
  if (from.has_scale()) {
    mutable_scale()->::gz::msgs::Vector3d::MergeFrom(from.scale());
  }
  if (from.has_bounding_box()) {
    mutable_bounding_box()->::gz::msgs::AxisAlignedBox::MergeFrom(from.bounding_box());
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.is_static() != 0) {
    set_is_static(from.is_static());
  }
  if (from.deleted() != 0) {
    set_deleted(from.deleted());
  }
  if (from.self_collide() != 0) {
    set_self_collide(from.self_collide());
  }
}

void Model::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Model)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Model::CopyFrom(const Model& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Model)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Model::IsInitialized() const {
  return true;
}

void Model::Swap(Model* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Model::InternalSwap(Model* other) {
  using std::swap;
  CastToBase(&joint_)->InternalSwap(CastToBase(&other->joint_));
  CastToBase(&link_)->InternalSwap(CastToBase(&other->link_));
  CastToBase(&visual_)->InternalSwap(CastToBase(&other->visual_));
  CastToBase(&model_)->InternalSwap(CastToBase(&other->model_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(pose_, other->pose_);
  swap(scale_, other->scale_);
  swap(bounding_box_, other->bounding_box_);
  swap(id_, other->id_);
  swap(is_static_, other->is_static_);
  swap(deleted_, other->deleted_);
  swap(self_collide_, other->self_collide_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Model::GetMetadata() const {
  protobuf_gz_2fmsgs_2fmodel_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fmodel_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Model* Arena::CreateMaybeMessage< ::gz::msgs::Model >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Model >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
