// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2srrc_data:msg/Specs.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2srrc_data/msg/detail/specs__rosidl_typesupport_introspection_c.h"
#include "ros2srrc_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2srrc_data/msg/detail/specs__functions.h"
#include "ros2srrc_data/msg/detail/specs__struct.h"


// Include directives for member types
// Member `ee_vector`
// Member `robot_max`
// Member `robot_min`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2srrc_data__msg__Specs__init(message_memory);
}

void ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_fini_function(void * message_memory)
{
  ros2srrc_data__msg__Specs__fini(message_memory);
}

size_t ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__size_function__Specs__ee_vector(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_const_function__Specs__ee_vector(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_function__Specs__ee_vector(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__fetch_function__Specs__ee_vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_const_function__Specs__ee_vector(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__assign_function__Specs__ee_vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_function__Specs__ee_vector(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__resize_function__Specs__ee_vector(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__size_function__Specs__robot_max(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_const_function__Specs__robot_max(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_function__Specs__robot_max(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__fetch_function__Specs__robot_max(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_const_function__Specs__robot_max(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__assign_function__Specs__robot_max(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_function__Specs__robot_max(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__resize_function__Specs__robot_max(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__size_function__Specs__robot_min(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_const_function__Specs__robot_min(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_function__Specs__robot_min(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__fetch_function__Specs__robot_min(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_const_function__Specs__robot_min(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__assign_function__Specs__robot_min(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_function__Specs__robot_min(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__resize_function__Specs__robot_min(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_message_member_array[5] = {
  {
    "ee_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Specs, ee_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ee_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Specs, ee_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ee_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Specs, ee_vector),  // bytes offset in struct
    NULL,  // default value
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__size_function__Specs__ee_vector,  // size() function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_const_function__Specs__ee_vector,  // get_const(index) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_function__Specs__ee_vector,  // get(index) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__fetch_function__Specs__ee_vector,  // fetch(index, &value) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__assign_function__Specs__ee_vector,  // assign(index, value) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__resize_function__Specs__ee_vector  // resize(index) function pointer
  },
  {
    "robot_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Specs, robot_max),  // bytes offset in struct
    NULL,  // default value
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__size_function__Specs__robot_max,  // size() function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_const_function__Specs__robot_max,  // get_const(index) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_function__Specs__robot_max,  // get(index) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__fetch_function__Specs__robot_max,  // fetch(index, &value) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__assign_function__Specs__robot_max,  // assign(index, value) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__resize_function__Specs__robot_max  // resize(index) function pointer
  },
  {
    "robot_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Specs, robot_min),  // bytes offset in struct
    NULL,  // default value
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__size_function__Specs__robot_min,  // size() function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_const_function__Specs__robot_min,  // get_const(index) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__get_function__Specs__robot_min,  // get(index) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__fetch_function__Specs__robot_min,  // fetch(index, &value) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__assign_function__Specs__robot_min,  // assign(index, value) function pointer
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__resize_function__Specs__robot_min  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_message_members = {
  "ros2srrc_data__msg",  // message namespace
  "Specs",  // message name
  5,  // number of fields
  sizeof(ros2srrc_data__msg__Specs),
  ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_message_member_array,  // message members
  ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_message_type_support_handle = {
  0,
  &ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2srrc_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Specs)() {
  if (!ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_message_type_support_handle.typesupport_identifier) {
    ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2srrc_data__msg__Specs__rosidl_typesupport_introspection_c__Specs_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
