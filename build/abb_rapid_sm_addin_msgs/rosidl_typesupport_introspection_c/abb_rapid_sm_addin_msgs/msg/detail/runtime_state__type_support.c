// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_rapid_sm_addin_msgs:msg/RuntimeState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_rapid_sm_addin_msgs/msg/detail/runtime_state__rosidl_typesupport_introspection_c.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/runtime_state__functions.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/runtime_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `state_machines`
#include "abb_rapid_sm_addin_msgs/msg/state_machine_state.h"
// Member `state_machines`
#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_rapid_sm_addin_msgs__msg__RuntimeState__init(message_memory);
}

void abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_fini_function(void * message_memory)
{
  abb_rapid_sm_addin_msgs__msg__RuntimeState__fini(message_memory);
}

size_t abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__size_function__RuntimeState__state_machines(
  const void * untyped_member)
{
  const abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * member =
    (const abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence *)(untyped_member);
  return member->size;
}

const void * abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__get_const_function__RuntimeState__state_machines(
  const void * untyped_member, size_t index)
{
  const abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * member =
    (const abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__get_function__RuntimeState__state_machines(
  void * untyped_member, size_t index)
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * member =
    (abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence *)(untyped_member);
  return &member->data[index];
}

void abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__fetch_function__RuntimeState__state_machines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const abb_rapid_sm_addin_msgs__msg__StateMachineState * item =
    ((const abb_rapid_sm_addin_msgs__msg__StateMachineState *)
    abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__get_const_function__RuntimeState__state_machines(untyped_member, index));
  abb_rapid_sm_addin_msgs__msg__StateMachineState * value =
    (abb_rapid_sm_addin_msgs__msg__StateMachineState *)(untyped_value);
  *value = *item;
}

void abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__assign_function__RuntimeState__state_machines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState * item =
    ((abb_rapid_sm_addin_msgs__msg__StateMachineState *)
    abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__get_function__RuntimeState__state_machines(untyped_member, index));
  const abb_rapid_sm_addin_msgs__msg__StateMachineState * value =
    (const abb_rapid_sm_addin_msgs__msg__StateMachineState *)(untyped_value);
  *item = *value;
}

bool abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__resize_function__RuntimeState__state_machines(
  void * untyped_member, size_t size)
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * member =
    (abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence *)(untyped_member);
  abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__fini(member);
  return abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__RuntimeState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_machines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs__msg__RuntimeState, state_machines),  // bytes offset in struct
    NULL,  // default value
    abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__size_function__RuntimeState__state_machines,  // size() function pointer
    abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__get_const_function__RuntimeState__state_machines,  // get_const(index) function pointer
    abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__get_function__RuntimeState__state_machines,  // get(index) function pointer
    abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__fetch_function__RuntimeState__state_machines,  // fetch(index, &value) function pointer
    abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__assign_function__RuntimeState__state_machines,  // assign(index, value) function pointer
    abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__resize_function__RuntimeState__state_machines  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_members = {
  "abb_rapid_sm_addin_msgs__msg",  // message namespace
  "RuntimeState",  // message name
  2,  // number of fields
  sizeof(abb_rapid_sm_addin_msgs__msg__RuntimeState),
  abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_member_array,  // message members
  abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_type_support_handle = {
  0,
  &abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, msg, RuntimeState)() {
  abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_rapid_sm_addin_msgs, msg, StateMachineState)();
  if (!abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_type_support_handle.typesupport_identifier) {
    abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_rapid_sm_addin_msgs__msg__RuntimeState__rosidl_typesupport_introspection_c__RuntimeState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
