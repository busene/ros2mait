// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__rosidl_typesupport_introspection_c.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__functions.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__struct.h"


// Include directives for member types
// Member `tool`
#include "abb_rapid_msgs/msg/tool_data.h"
// Member `tool`
#include "abb_rapid_msgs/msg/detail/tool_data__rosidl_typesupport_introspection_c.h"
// Member `wobj`
#include "abb_rapid_msgs/msg/w_obj_data.h"
// Member `wobj`
#include "abb_rapid_msgs/msg/detail/w_obj_data__rosidl_typesupport_introspection_c.h"
// Member `correction_frame`
// Member `sensor_frame`
#include "abb_rapid_msgs/msg/pose.h"
// Member `correction_frame`
// Member `sensor_frame`
#include "abb_rapid_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__init(message_memory);
}

void abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_fini_function(void * message_memory)
{
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_member_array[8] = {
  {
    "tool",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings, tool),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wobj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings, wobj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "correction_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings, correction_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings, sensor_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cond_min_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings, cond_min_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lp_filter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings, lp_filter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sample_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings, sample_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_speed_deviation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings, max_speed_deviation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_members = {
  "abb_rapid_sm_addin_msgs__msg",  // message namespace
  "EGMActivateSettings",  // message name
  8,  // number of fields
  sizeof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings),
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_member_array,  // message members
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_type_support_handle = {
  0,
  &abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, msg, EGMActivateSettings)() {
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_msgs, msg, ToolData)();
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_msgs, msg, WObjData)();
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_msgs, msg, Pose)();
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_msgs, msg, Pose)();
  if (!abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_type_support_handle.typesupport_identifier) {
    abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__rosidl_typesupport_introspection_c__EGMActivateSettings_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
