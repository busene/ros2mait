// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from linkpose_msgs:msg/LinkPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "linkpose_msgs/msg/detail/link_pose__struct.h"
#include "linkpose_msgs/msg/detail/link_pose__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace linkpose_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _LinkPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LinkPose_type_support_ids_t;

static const _LinkPose_type_support_ids_t _LinkPose_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LinkPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LinkPose_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LinkPose_type_support_symbol_names_t _LinkPose_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linkpose_msgs, msg, LinkPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, linkpose_msgs, msg, LinkPose)),
  }
};

typedef struct _LinkPose_type_support_data_t
{
  void * data[2];
} _LinkPose_type_support_data_t;

static _LinkPose_type_support_data_t _LinkPose_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LinkPose_message_typesupport_map = {
  2,
  "linkpose_msgs",
  &_LinkPose_message_typesupport_ids.typesupport_identifier[0],
  &_LinkPose_message_typesupport_symbol_names.symbol_name[0],
  &_LinkPose_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LinkPose_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LinkPose_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace linkpose_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, linkpose_msgs, msg, LinkPose)() {
  return &::linkpose_msgs::msg::rosidl_typesupport_c::LinkPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif