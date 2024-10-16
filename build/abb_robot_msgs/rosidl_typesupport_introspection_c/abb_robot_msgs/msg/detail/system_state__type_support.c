// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_robot_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_robot_msgs/msg/detail/system_state__rosidl_typesupport_introspection_c.h"
#include "abb_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_robot_msgs/msg/detail/system_state__functions.h"
#include "abb_robot_msgs/msg/detail/system_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rapid_tasks`
#include "abb_robot_msgs/msg/rapid_task_state.h"
// Member `rapid_tasks`
#include "abb_robot_msgs/msg/detail/rapid_task_state__rosidl_typesupport_introspection_c.h"
// Member `mechanical_units`
#include "abb_robot_msgs/msg/mechanical_unit_state.h"
// Member `mechanical_units`
#include "abb_robot_msgs/msg/detail/mechanical_unit_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_robot_msgs__msg__SystemState__init(message_memory);
}

void abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_fini_function(void * message_memory)
{
  abb_robot_msgs__msg__SystemState__fini(message_memory);
}

size_t abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__size_function__SystemState__rapid_tasks(
  const void * untyped_member)
{
  const abb_robot_msgs__msg__RAPIDTaskState__Sequence * member =
    (const abb_robot_msgs__msg__RAPIDTaskState__Sequence *)(untyped_member);
  return member->size;
}

const void * abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_const_function__SystemState__rapid_tasks(
  const void * untyped_member, size_t index)
{
  const abb_robot_msgs__msg__RAPIDTaskState__Sequence * member =
    (const abb_robot_msgs__msg__RAPIDTaskState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_function__SystemState__rapid_tasks(
  void * untyped_member, size_t index)
{
  abb_robot_msgs__msg__RAPIDTaskState__Sequence * member =
    (abb_robot_msgs__msg__RAPIDTaskState__Sequence *)(untyped_member);
  return &member->data[index];
}

void abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__fetch_function__SystemState__rapid_tasks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const abb_robot_msgs__msg__RAPIDTaskState * item =
    ((const abb_robot_msgs__msg__RAPIDTaskState *)
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_const_function__SystemState__rapid_tasks(untyped_member, index));
  abb_robot_msgs__msg__RAPIDTaskState * value =
    (abb_robot_msgs__msg__RAPIDTaskState *)(untyped_value);
  *value = *item;
}

void abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__assign_function__SystemState__rapid_tasks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  abb_robot_msgs__msg__RAPIDTaskState * item =
    ((abb_robot_msgs__msg__RAPIDTaskState *)
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_function__SystemState__rapid_tasks(untyped_member, index));
  const abb_robot_msgs__msg__RAPIDTaskState * value =
    (const abb_robot_msgs__msg__RAPIDTaskState *)(untyped_value);
  *item = *value;
}

bool abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__resize_function__SystemState__rapid_tasks(
  void * untyped_member, size_t size)
{
  abb_robot_msgs__msg__RAPIDTaskState__Sequence * member =
    (abb_robot_msgs__msg__RAPIDTaskState__Sequence *)(untyped_member);
  abb_robot_msgs__msg__RAPIDTaskState__Sequence__fini(member);
  return abb_robot_msgs__msg__RAPIDTaskState__Sequence__init(member, size);
}

size_t abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__size_function__SystemState__mechanical_units(
  const void * untyped_member)
{
  const abb_robot_msgs__msg__MechanicalUnitState__Sequence * member =
    (const abb_robot_msgs__msg__MechanicalUnitState__Sequence *)(untyped_member);
  return member->size;
}

const void * abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_const_function__SystemState__mechanical_units(
  const void * untyped_member, size_t index)
{
  const abb_robot_msgs__msg__MechanicalUnitState__Sequence * member =
    (const abb_robot_msgs__msg__MechanicalUnitState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_function__SystemState__mechanical_units(
  void * untyped_member, size_t index)
{
  abb_robot_msgs__msg__MechanicalUnitState__Sequence * member =
    (abb_robot_msgs__msg__MechanicalUnitState__Sequence *)(untyped_member);
  return &member->data[index];
}

void abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__fetch_function__SystemState__mechanical_units(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const abb_robot_msgs__msg__MechanicalUnitState * item =
    ((const abb_robot_msgs__msg__MechanicalUnitState *)
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_const_function__SystemState__mechanical_units(untyped_member, index));
  abb_robot_msgs__msg__MechanicalUnitState * value =
    (abb_robot_msgs__msg__MechanicalUnitState *)(untyped_value);
  *value = *item;
}

void abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__assign_function__SystemState__mechanical_units(
  void * untyped_member, size_t index, const void * untyped_value)
{
  abb_robot_msgs__msg__MechanicalUnitState * item =
    ((abb_robot_msgs__msg__MechanicalUnitState *)
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_function__SystemState__mechanical_units(untyped_member, index));
  const abb_robot_msgs__msg__MechanicalUnitState * value =
    (const abb_robot_msgs__msg__MechanicalUnitState *)(untyped_value);
  *item = *value;
}

bool abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__resize_function__SystemState__mechanical_units(
  void * untyped_member, size_t size)
{
  abb_robot_msgs__msg__MechanicalUnitState__Sequence * member =
    (abb_robot_msgs__msg__MechanicalUnitState__Sequence *)(untyped_member);
  abb_robot_msgs__msg__MechanicalUnitState__Sequence__fini(member);
  return abb_robot_msgs__msg__MechanicalUnitState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__SystemState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motors_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__SystemState, motors_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__SystemState, auto_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rapid_running",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__SystemState, rapid_running),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rapid_tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__SystemState, rapid_tasks),  // bytes offset in struct
    NULL,  // default value
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__size_function__SystemState__rapid_tasks,  // size() function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_const_function__SystemState__rapid_tasks,  // get_const(index) function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_function__SystemState__rapid_tasks,  // get(index) function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__fetch_function__SystemState__rapid_tasks,  // fetch(index, &value) function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__assign_function__SystemState__rapid_tasks,  // assign(index, value) function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__resize_function__SystemState__rapid_tasks  // resize(index) function pointer
  },
  {
    "mechanical_units",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__msg__SystemState, mechanical_units),  // bytes offset in struct
    NULL,  // default value
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__size_function__SystemState__mechanical_units,  // size() function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_const_function__SystemState__mechanical_units,  // get_const(index) function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__get_function__SystemState__mechanical_units,  // get(index) function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__fetch_function__SystemState__mechanical_units,  // fetch(index, &value) function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__assign_function__SystemState__mechanical_units,  // assign(index, value) function pointer
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__resize_function__SystemState__mechanical_units  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_members = {
  "abb_robot_msgs__msg",  // message namespace
  "SystemState",  // message name
  6,  // number of fields
  sizeof(abb_robot_msgs__msg__SystemState),
  abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_member_array,  // message members
  abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_type_support_handle = {
  0,
  &abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, msg, SystemState)() {
  abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, msg, RAPIDTaskState)();
  abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, msg, MechanicalUnitState)();
  if (!abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_type_support_handle.typesupport_identifier) {
    abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_robot_msgs__msg__SystemState__rosidl_typesupport_introspection_c__SystemState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
