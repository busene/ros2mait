// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abb_robot_msgs:msg/RAPIDSymbolPath.idl
// generated code does not contain a copyright notice
#include "abb_robot_msgs/msg/detail/rapid_symbol_path__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abb_robot_msgs/msg/detail/rapid_symbol_path__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace abb_robot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
cdr_serialize(
  const abb_robot_msgs::msg::RAPIDSymbolPath & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: task
  cdr << ros_message.task;
  // Member: module
  cdr << ros_message.module;
  // Member: symbol
  cdr << ros_message.symbol;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_robot_msgs::msg::RAPIDSymbolPath & ros_message)
{
  // Member: task
  cdr >> ros_message.task;

  // Member: module
  cdr >> ros_message.module;

  // Member: symbol
  cdr >> ros_message.symbol;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
get_serialized_size(
  const abb_robot_msgs::msg::RAPIDSymbolPath & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: task
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.task.size() + 1);
  // Member: module
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.module.size() + 1);
  // Member: symbol
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.symbol.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
max_serialized_size_RAPIDSymbolPath(
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


  // Member: task
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

  // Member: module
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

  // Member: symbol
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
    using DataType = abb_robot_msgs::msg::RAPIDSymbolPath;
    is_plain =
      (
      offsetof(DataType, symbol) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RAPIDSymbolPath__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_robot_msgs::msg::RAPIDSymbolPath *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RAPIDSymbolPath__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_robot_msgs::msg::RAPIDSymbolPath *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RAPIDSymbolPath__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_robot_msgs::msg::RAPIDSymbolPath *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RAPIDSymbolPath__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RAPIDSymbolPath(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RAPIDSymbolPath__callbacks = {
  "abb_robot_msgs::msg",
  "RAPIDSymbolPath",
  _RAPIDSymbolPath__cdr_serialize,
  _RAPIDSymbolPath__cdr_deserialize,
  _RAPIDSymbolPath__get_serialized_size,
  _RAPIDSymbolPath__max_serialized_size
};

static rosidl_message_type_support_t _RAPIDSymbolPath__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RAPIDSymbolPath__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abb_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_robot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_robot_msgs::msg::RAPIDSymbolPath>()
{
  return &abb_robot_msgs::msg::typesupport_fastrtps_cpp::_RAPIDSymbolPath__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_robot_msgs, msg, RAPIDSymbolPath)() {
  return &abb_robot_msgs::msg::typesupport_fastrtps_cpp::_RAPIDSymbolPath__handle;
}

#ifdef __cplusplus
}
#endif
