// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_egm_msgs:msg/EGMChannelState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_egm_msgs/msg/detail/egm_channel_state__rosidl_typesupport_introspection_c.h"
#include "abb_egm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_egm_msgs/msg/detail/egm_channel_state__functions.h"
#include "abb_egm_msgs/msg/detail/egm_channel_state__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_egm_msgs__msg__EGMChannelState__init(message_memory);
}

void abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_fini_function(void * message_memory)
{
  abb_egm_msgs__msg__EGMChannelState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_message_member_array[7] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs__msg__EGMChannelState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs__msg__EGMChannelState, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "egm_convergence_met",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs__msg__EGMChannelState, egm_convergence_met),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "egm_client_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs__msg__EGMChannelState, egm_client_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs__msg__EGMChannelState, motor_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rapid_execution_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs__msg__EGMChannelState, rapid_execution_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "utilization_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs__msg__EGMChannelState, utilization_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_message_members = {
  "abb_egm_msgs__msg",  // message namespace
  "EGMChannelState",  // message name
  7,  // number of fields
  sizeof(abb_egm_msgs__msg__EGMChannelState),
  abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_message_member_array,  // message members
  abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_message_type_support_handle = {
  0,
  &abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_egm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_egm_msgs, msg, EGMChannelState)() {
  if (!abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_message_type_support_handle.typesupport_identifier) {
    abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_egm_msgs__msg__EGMChannelState__rosidl_typesupport_introspection_c__EGMChannelState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
