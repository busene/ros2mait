// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMStopSettings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__rosidl_typesupport_introspection_c.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__functions.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings__init(message_memory);
}

void abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_fini_function(void * message_memory)
{
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_message_member_array[1] = {
  {
    "ramp_out_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMStopSettings, ramp_out_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_message_members = {
  "abb_rapid_sm_addin_msgs__msg",  // message namespace
  "EGMStopSettings",  // message name
  1,  // number of fields
  sizeof(abb_rapid_sm_addin_msgs__msg__EGMStopSettings),
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_message_member_array,  // message members
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_message_type_support_handle = {
  0,
  &abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, msg, EGMStopSettings)() {
  if (!abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_message_type_support_handle.typesupport_identifier) {
    abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_rapid_sm_addin_msgs__msg__EGMStopSettings__rosidl_typesupport_introspection_c__EGMStopSettings_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
