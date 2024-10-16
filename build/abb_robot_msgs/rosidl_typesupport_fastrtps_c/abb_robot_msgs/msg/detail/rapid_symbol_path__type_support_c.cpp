// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abb_robot_msgs:msg/RAPIDSymbolPath.idl
// generated code does not contain a copyright notice
#include "abb_robot_msgs/msg/detail/rapid_symbol_path__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abb_robot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abb_robot_msgs/msg/detail/rapid_symbol_path__struct.h"
#include "abb_robot_msgs/msg/detail/rapid_symbol_path__functions.h"
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

#include "rosidl_runtime_c/string.h"  // module, symbol, task
#include "rosidl_runtime_c/string_functions.h"  // module, symbol, task

// forward declare type support functions


using _RAPIDSymbolPath__ros_msg_type = abb_robot_msgs__msg__RAPIDSymbolPath;

static bool _RAPIDSymbolPath__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RAPIDSymbolPath__ros_msg_type * ros_message = static_cast<const _RAPIDSymbolPath__ros_msg_type *>(untyped_ros_message);
  // Field name: task
  {
    const rosidl_runtime_c__String * str = &ros_message->task;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: module
  {
    const rosidl_runtime_c__String * str = &ros_message->module;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: symbol
  {
    const rosidl_runtime_c__String * str = &ros_message->symbol;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RAPIDSymbolPath__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RAPIDSymbolPath__ros_msg_type * ros_message = static_cast<_RAPIDSymbolPath__ros_msg_type *>(untyped_ros_message);
  // Field name: task
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task.data) {
      rosidl_runtime_c__String__init(&ros_message->task);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task'\n");
      return false;
    }
  }

  // Field name: module
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->module.data) {
      rosidl_runtime_c__String__init(&ros_message->module);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->module,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'module'\n");
      return false;
    }
  }

  // Field name: symbol
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->symbol.data) {
      rosidl_runtime_c__String__init(&ros_message->symbol);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->symbol,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'symbol'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_robot_msgs
size_t get_serialized_size_abb_robot_msgs__msg__RAPIDSymbolPath(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RAPIDSymbolPath__ros_msg_type * ros_message = static_cast<const _RAPIDSymbolPath__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name task
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task.size + 1);
  // field.name module
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->module.size + 1);
  // field.name symbol
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->symbol.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RAPIDSymbolPath__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abb_robot_msgs__msg__RAPIDSymbolPath(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_robot_msgs
size_t max_serialized_size_abb_robot_msgs__msg__RAPIDSymbolPath(
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

  // member: task
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: module
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: symbol
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abb_robot_msgs__msg__RAPIDSymbolPath;
    is_plain =
      (
      offsetof(DataType, symbol) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RAPIDSymbolPath__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abb_robot_msgs__msg__RAPIDSymbolPath(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RAPIDSymbolPath = {
  "abb_robot_msgs::msg",
  "RAPIDSymbolPath",
  _RAPIDSymbolPath__cdr_serialize,
  _RAPIDSymbolPath__cdr_deserialize,
  _RAPIDSymbolPath__get_serialized_size,
  _RAPIDSymbolPath__max_serialized_size
};

static rosidl_message_type_support_t _RAPIDSymbolPath__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RAPIDSymbolPath,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_robot_msgs, msg, RAPIDSymbolPath)() {
  return &_RAPIDSymbolPath__type_support;
}

#if defined(__cplusplus)
}
#endif
