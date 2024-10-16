// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abb_robot_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice
#include "abb_robot_msgs/msg/detail/system_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abb_robot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abb_robot_msgs/msg/detail/system_state__struct.h"
#include "abb_robot_msgs/msg/detail/system_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "abb_robot_msgs/msg/detail/mechanical_unit_state__functions.h"  // mechanical_units
#include "abb_robot_msgs/msg/detail/rapid_task_state__functions.h"  // rapid_tasks
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_abb_robot_msgs__msg__MechanicalUnitState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_robot_msgs__msg__MechanicalUnitState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_robot_msgs, msg, MechanicalUnitState)();
size_t get_serialized_size_abb_robot_msgs__msg__RAPIDTaskState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_robot_msgs__msg__RAPIDTaskState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_robot_msgs, msg, RAPIDTaskState)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_robot_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_robot_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_robot_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SystemState__ros_msg_type = abb_robot_msgs__msg__SystemState;

static bool _SystemState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SystemState__ros_msg_type * ros_message = static_cast<const _SystemState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: motors_on
  {
    cdr << (ros_message->motors_on ? true : false);
  }

  // Field name: auto_mode
  {
    cdr << (ros_message->auto_mode ? true : false);
  }

  // Field name: rapid_running
  {
    cdr << (ros_message->rapid_running ? true : false);
  }

  // Field name: rapid_tasks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_robot_msgs, msg, RAPIDTaskState
      )()->data);
    size_t size = ros_message->rapid_tasks.size;
    auto array_ptr = ros_message->rapid_tasks.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: mechanical_units
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_robot_msgs, msg, MechanicalUnitState
      )()->data);
    size_t size = ros_message->mechanical_units.size;
    auto array_ptr = ros_message->mechanical_units.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _SystemState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SystemState__ros_msg_type * ros_message = static_cast<_SystemState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: motors_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motors_on = tmp ? true : false;
  }

  // Field name: auto_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_mode = tmp ? true : false;
  }

  // Field name: rapid_running
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rapid_running = tmp ? true : false;
  }

  // Field name: rapid_tasks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_robot_msgs, msg, RAPIDTaskState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rapid_tasks.data) {
      abb_robot_msgs__msg__RAPIDTaskState__Sequence__fini(&ros_message->rapid_tasks);
    }
    if (!abb_robot_msgs__msg__RAPIDTaskState__Sequence__init(&ros_message->rapid_tasks, size)) {
      fprintf(stderr, "failed to create array for field 'rapid_tasks'");
      return false;
    }
    auto array_ptr = ros_message->rapid_tasks.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: mechanical_units
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_robot_msgs, msg, MechanicalUnitState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->mechanical_units.data) {
      abb_robot_msgs__msg__MechanicalUnitState__Sequence__fini(&ros_message->mechanical_units);
    }
    if (!abb_robot_msgs__msg__MechanicalUnitState__Sequence__init(&ros_message->mechanical_units, size)) {
      fprintf(stderr, "failed to create array for field 'mechanical_units'");
      return false;
    }
    auto array_ptr = ros_message->mechanical_units.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_robot_msgs
size_t get_serialized_size_abb_robot_msgs__msg__SystemState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SystemState__ros_msg_type * ros_message = static_cast<const _SystemState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name motors_on
  {
    size_t item_size = sizeof(ros_message->motors_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_mode
  {
    size_t item_size = sizeof(ros_message->auto_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rapid_running
  {
    size_t item_size = sizeof(ros_message->rapid_running);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rapid_tasks
  {
    size_t array_size = ros_message->rapid_tasks.size;
    auto array_ptr = ros_message->rapid_tasks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_abb_robot_msgs__msg__RAPIDTaskState(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name mechanical_units
  {
    size_t array_size = ros_message->mechanical_units.size;
    auto array_ptr = ros_message->mechanical_units.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_abb_robot_msgs__msg__MechanicalUnitState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SystemState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abb_robot_msgs__msg__SystemState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_robot_msgs
size_t max_serialized_size_abb_robot_msgs__msg__SystemState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: motors_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rapid_running
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rapid_tasks
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_robot_msgs__msg__RAPIDTaskState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: mechanical_units
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_robot_msgs__msg__MechanicalUnitState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abb_robot_msgs__msg__SystemState;
    is_plain =
      (
      offsetof(DataType, mechanical_units) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SystemState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abb_robot_msgs__msg__SystemState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SystemState = {
  "abb_robot_msgs::msg",
  "SystemState",
  _SystemState__cdr_serialize,
  _SystemState__cdr_deserialize,
  _SystemState__get_serialized_size,
  _SystemState__max_serialized_size
};

static rosidl_message_type_support_t _SystemState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SystemState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_robot_msgs, msg, SystemState)() {
  return &_SystemState__type_support;
}

#if defined(__cplusplus)
}
#endif
