// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abb_rapid_msgs:msg/ToolData.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/tool_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abb_rapid_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abb_rapid_msgs/msg/detail/tool_data__struct.h"
#include "abb_rapid_msgs/msg/detail/tool_data__functions.h"
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

#include "abb_rapid_msgs/msg/detail/load_data__functions.h"  // tload
#include "abb_rapid_msgs/msg/detail/pose__functions.h"  // tframe

// forward declare type support functions
size_t get_serialized_size_abb_rapid_msgs__msg__LoadData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_msgs__msg__LoadData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, LoadData)();
size_t get_serialized_size_abb_rapid_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pose)();


using _ToolData__ros_msg_type = abb_rapid_msgs__msg__ToolData;

static bool _ToolData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ToolData__ros_msg_type * ros_message = static_cast<const _ToolData__ros_msg_type *>(untyped_ros_message);
  // Field name: robhold
  {
    cdr << (ros_message->robhold ? true : false);
  }

  // Field name: tframe
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tframe, cdr))
    {
      return false;
    }
  }

  // Field name: tload
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, LoadData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tload, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ToolData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ToolData__ros_msg_type * ros_message = static_cast<_ToolData__ros_msg_type *>(untyped_ros_message);
  // Field name: robhold
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->robhold = tmp ? true : false;
  }

  // Field name: tframe
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tframe))
    {
      return false;
    }
  }

  // Field name: tload
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, LoadData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tload))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_msgs
size_t get_serialized_size_abb_rapid_msgs__msg__ToolData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ToolData__ros_msg_type * ros_message = static_cast<const _ToolData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robhold
  {
    size_t item_size = sizeof(ros_message->robhold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tframe

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__Pose(
    &(ros_message->tframe), current_alignment);
  // field.name tload

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__LoadData(
    &(ros_message->tload), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ToolData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abb_rapid_msgs__msg__ToolData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_msgs
size_t max_serialized_size_abb_rapid_msgs__msg__ToolData(
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

  // member: robhold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tframe
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tload
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__LoadData(
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
    using DataType = abb_rapid_msgs__msg__ToolData;
    is_plain =
      (
      offsetof(DataType, tload) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ToolData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abb_rapid_msgs__msg__ToolData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ToolData = {
  "abb_rapid_msgs::msg",
  "ToolData",
  _ToolData__cdr_serialize,
  _ToolData__cdr_deserialize,
  _ToolData__get_serialized_size,
  _ToolData__max_serialized_size
};

static rosidl_message_type_support_t _ToolData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ToolData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ToolData)() {
  return &_ToolData__type_support;
}

#if defined(__cplusplus)
}
#endif
