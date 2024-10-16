// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abb_rapid_msgs:msg/ConfData.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/conf_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abb_rapid_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abb_rapid_msgs/msg/detail/conf_data__struct.h"
#include "abb_rapid_msgs/msg/detail/conf_data__functions.h"
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


// forward declare type support functions


using _ConfData__ros_msg_type = abb_rapid_msgs__msg__ConfData;

static bool _ConfData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfData__ros_msg_type * ros_message = static_cast<const _ConfData__ros_msg_type *>(untyped_ros_message);
  // Field name: cf1
  {
    cdr << ros_message->cf1;
  }

  // Field name: cf4
  {
    cdr << ros_message->cf4;
  }

  // Field name: cf6
  {
    cdr << ros_message->cf6;
  }

  // Field name: cfx
  {
    cdr << ros_message->cfx;
  }

  return true;
}

static bool _ConfData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfData__ros_msg_type * ros_message = static_cast<_ConfData__ros_msg_type *>(untyped_ros_message);
  // Field name: cf1
  {
    cdr >> ros_message->cf1;
  }

  // Field name: cf4
  {
    cdr >> ros_message->cf4;
  }

  // Field name: cf6
  {
    cdr >> ros_message->cf6;
  }

  // Field name: cfx
  {
    cdr >> ros_message->cfx;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_msgs
size_t get_serialized_size_abb_rapid_msgs__msg__ConfData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfData__ros_msg_type * ros_message = static_cast<const _ConfData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cf1
  {
    size_t item_size = sizeof(ros_message->cf1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cf4
  {
    size_t item_size = sizeof(ros_message->cf4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cf6
  {
    size_t item_size = sizeof(ros_message->cf6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cfx
  {
    size_t item_size = sizeof(ros_message->cfx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConfData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abb_rapid_msgs__msg__ConfData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_msgs
size_t max_serialized_size_abb_rapid_msgs__msg__ConfData(
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

  // member: cf1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cf4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cf6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cfx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abb_rapid_msgs__msg__ConfData;
    is_plain =
      (
      offsetof(DataType, cfx) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ConfData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abb_rapid_msgs__msg__ConfData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ConfData = {
  "abb_rapid_msgs::msg",
  "ConfData",
  _ConfData__cdr_serialize,
  _ConfData__cdr_deserialize,
  _ConfData__get_serialized_size,
  _ConfData__max_serialized_size
};

static rosidl_message_type_support_t _ConfData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ConfData)() {
  return &_ConfData__type_support;
}

#if defined(__cplusplus)
}
#endif
