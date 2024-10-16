// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_egm_msgs:msg/EGMState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_egm_msgs/msg/detail/egm_state__rosidl_typesupport_introspection_c.h"
#include "abb_egm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_egm_msgs/msg/detail/egm_state__functions.h"
#include "abb_egm_msgs/msg/detail/egm_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `egm_channels`
#include "abb_egm_msgs/msg/egm_channel_state.h"
// Member `egm_channels`
#include "abb_egm_msgs/msg/detail/egm_channel_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_egm_msgs__msg__EGMState__init(message_memory);
}

void abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_fini_function(void * message_memory)
{
  abb_egm_msgs__msg__EGMState__fini(message_memory);
}

size_t abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__size_function__EGMState__egm_channels(
  const void * untyped_member)
{
  const abb_egm_msgs__msg__EGMChannelState__Sequence * member =
    (const abb_egm_msgs__msg__EGMChannelState__Sequence *)(untyped_member);
  return member->size;
}

const void * abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__get_const_function__EGMState__egm_channels(
  const void * untyped_member, size_t index)
{
  const abb_egm_msgs__msg__EGMChannelState__Sequence * member =
    (const abb_egm_msgs__msg__EGMChannelState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__get_function__EGMState__egm_channels(
  void * untyped_member, size_t index)
{
  abb_egm_msgs__msg__EGMChannelState__Sequence * member =
    (abb_egm_msgs__msg__EGMChannelState__Sequence *)(untyped_member);
  return &member->data[index];
}

void abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__fetch_function__EGMState__egm_channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const abb_egm_msgs__msg__EGMChannelState * item =
    ((const abb_egm_msgs__msg__EGMChannelState *)
    abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__get_const_function__EGMState__egm_channels(untyped_member, index));
  abb_egm_msgs__msg__EGMChannelState * value =
    (abb_egm_msgs__msg__EGMChannelState *)(untyped_value);
  *value = *item;
}

void abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__assign_function__EGMState__egm_channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  abb_egm_msgs__msg__EGMChannelState * item =
    ((abb_egm_msgs__msg__EGMChannelState *)
    abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__get_function__EGMState__egm_channels(untyped_member, index));
  const abb_egm_msgs__msg__EGMChannelState * value =
    (const abb_egm_msgs__msg__EGMChannelState *)(untyped_value);
  *item = *value;
}

bool abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__resize_function__EGMState__egm_channels(
  void * untyped_member, size_t size)
{
  abb_egm_msgs__msg__EGMChannelState__Sequence * member =
    (abb_egm_msgs__msg__EGMChannelState__Sequence *)(untyped_member);
  abb_egm_msgs__msg__EGMChannelState__Sequence__fini(member);
  return abb_egm_msgs__msg__EGMChannelState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs__msg__EGMState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "egm_channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs__msg__EGMState, egm_channels),  // bytes offset in struct
    NULL,  // default value
    abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__size_function__EGMState__egm_channels,  // size() function pointer
    abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__get_const_function__EGMState__egm_channels,  // get_const(index) function pointer
    abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__get_function__EGMState__egm_channels,  // get(index) function pointer
    abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__fetch_function__EGMState__egm_channels,  // fetch(index, &value) function pointer
    abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__assign_function__EGMState__egm_channels,  // assign(index, value) function pointer
    abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__resize_function__EGMState__egm_channels  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_members = {
  "abb_egm_msgs__msg",  // message namespace
  "EGMState",  // message name
  2,  // number of fields
  sizeof(abb_egm_msgs__msg__EGMState),
  abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_member_array,  // message members
  abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_type_support_handle = {
  0,
  &abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_egm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_egm_msgs, msg, EGMState)() {
  abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_egm_msgs, msg, EGMChannelState)();
  if (!abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_type_support_handle.typesupport_identifier) {
    abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_egm_msgs__msg__EGMState__rosidl_typesupport_introspection_c__EGMState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
