// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abb_rapid_msgs:msg/RobTarget.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/rob_target__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abb_rapid_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abb_rapid_msgs/msg/detail/rob_target__struct.h"
#include "abb_rapid_msgs/msg/detail/rob_target__functions.h"
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

#include "abb_rapid_msgs/msg/detail/conf_data__functions.h"  // robconf
#include "abb_rapid_msgs/msg/detail/ext_joint__functions.h"  // extax
#include "abb_rapid_msgs/msg/detail/orient__functions.h"  // rot
#include "abb_rapid_msgs/msg/detail/pos__functions.h"  // trans

// forward declare type support functions
size_t get_serialized_size_abb_rapid_msgs__msg__ConfData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_msgs__msg__ConfData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ConfData)();
size_t get_serialized_size_abb_rapid_msgs__msg__ExtJoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_msgs__msg__ExtJoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ExtJoint)();
size_t get_serialized_size_abb_rapid_msgs__msg__Orient(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_msgs__msg__Orient(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Orient)();
size_t get_serialized_size_abb_rapid_msgs__msg__Pos(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_msgs__msg__Pos(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pos)();


using _RobTarget__ros_msg_type = abb_rapid_msgs__msg__RobTarget;

static bool _RobTarget__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobTarget__ros_msg_type * ros_message = static_cast<const _RobTarget__ros_msg_type *>(untyped_ros_message);
  // Field name: trans
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pos
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trans, cdr))
    {
      return false;
    }
  }

  // Field name: rot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Orient
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rot, cdr))
    {
      return false;
    }
  }

  // Field name: robconf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ConfData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robconf, cdr))
    {
      return false;
    }
  }

  // Field name: extax
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ExtJoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->extax, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RobTarget__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobTarget__ros_msg_type * ros_message = static_cast<_RobTarget__ros_msg_type *>(untyped_ros_message);
  // Field name: trans
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pos
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trans))
    {
      return false;
    }
  }

  // Field name: rot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Orient
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rot))
    {
      return false;
    }
  }

  // Field name: robconf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ConfData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robconf))
    {
      return false;
    }
  }

  // Field name: extax
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ExtJoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->extax))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_msgs
size_t get_serialized_size_abb_rapid_msgs__msg__RobTarget(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobTarget__ros_msg_type * ros_message = static_cast<const _RobTarget__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trans

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__Pos(
    &(ros_message->trans), current_alignment);
  // field.name rot

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__Orient(
    &(ros_message->rot), current_alignment);
  // field.name robconf

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__ConfData(
    &(ros_message->robconf), current_alignment);
  // field.name extax

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__ExtJoint(
    &(ros_message->extax), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RobTarget__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abb_rapid_msgs__msg__RobTarget(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_msgs
size_t max_serialized_size_abb_rapid_msgs__msg__RobTarget(
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

  // member: trans
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__Pos(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rot
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__Orient(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: robconf
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__ConfData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: extax
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__ExtJoint(
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
    using DataType = abb_rapid_msgs__msg__RobTarget;
    is_plain =
      (
      offsetof(DataType, extax) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobTarget__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abb_rapid_msgs__msg__RobTarget(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobTarget = {
  "abb_rapid_msgs::msg",
  "RobTarget",
  _RobTarget__cdr_serialize,
  _RobTarget__cdr_deserialize,
  _RobTarget__get_serialized_size,
  _RobTarget__max_serialized_size
};

static rosidl_message_type_support_t _RobTarget__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobTarget,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, RobTarget)() {
  return &_RobTarget__type_support;
}

#if defined(__cplusplus)
}
#endif
