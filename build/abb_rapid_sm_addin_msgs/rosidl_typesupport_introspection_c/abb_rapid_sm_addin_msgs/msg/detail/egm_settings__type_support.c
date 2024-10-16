// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__rosidl_typesupport_introspection_c.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__functions.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__struct.h"


// Include directives for member types
// Member `setup_uc`
#include "abb_rapid_sm_addin_msgs/msg/egm_setup_settings.h"
// Member `setup_uc`
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__rosidl_typesupport_introspection_c.h"
// Member `activate`
#include "abb_rapid_sm_addin_msgs/msg/egm_activate_settings.h"
// Member `activate`
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__rosidl_typesupport_introspection_c.h"
// Member `run`
#include "abb_rapid_sm_addin_msgs/msg/egm_run_settings.h"
// Member `run`
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__rosidl_typesupport_introspection_c.h"
// Member `stop`
#include "abb_rapid_sm_addin_msgs/msg/egm_stop_settings.h"
// Member `stop`
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_rapid_sm_addin_msgs__msg__EGMSettings__init(message_memory);
}

void abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_fini_function(void * message_memory)
{
  abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_member_array[6] = {
  {
    "allow_egm_motions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMSettings, allow_egm_motions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_presync",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMSettings, use_presync),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "setup_uc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMSettings, setup_uc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "activate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMSettings, activate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "run",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMSettings, run),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__EGMSettings, stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_members = {
  "abb_rapid_sm_addin_msgs__msg",  // message namespace
  "EGMSettings",  // message name
  6,  // number of fields
  sizeof(abb_rapid_sm_addin_msgs__msg__EGMSettings),
  abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_member_array,  // message members
  abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_type_support_handle = {
  0,
  &abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, msg, EGMSettings)() {
  abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, msg, EGMSetupSettings)();
  abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, msg, EGMActivateSettings)();
  abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, msg, EGMRunSettings)();
  abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, msg, EGMStopSettings)();
  if (!abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_type_support_handle.typesupport_identifier) {
    abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_rapid_sm_addin_msgs__msg__EGMSettings__rosidl_typesupport_introspection_c__EGMSettings_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
