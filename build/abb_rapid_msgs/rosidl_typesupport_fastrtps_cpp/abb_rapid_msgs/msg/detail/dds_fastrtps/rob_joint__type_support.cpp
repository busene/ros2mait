// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abb_rapid_msgs:msg/RobJoint.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/rob_joint__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abb_rapid_msgs/msg/detail/rob_joint__struct.hpp"

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

namespace abb_rapid_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_msgs
cdr_serialize(
  const abb_rapid_msgs::msg::RobJoint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rax_1
  cdr << ros_message.rax_1;
  // Member: rax_2
  cdr << ros_message.rax_2;
  // Member: rax_3
  cdr << ros_message.rax_3;
  // Member: rax_4
  cdr << ros_message.rax_4;
  // Member: rax_5
  cdr << ros_message.rax_5;
  // Member: rax_6
  cdr << ros_message.rax_6;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_rapid_msgs::msg::RobJoint & ros_message)
{
  // Member: rax_1
  cdr >> ros_message.rax_1;

  // Member: rax_2
  cdr >> ros_message.rax_2;

  // Member: rax_3
  cdr >> ros_message.rax_3;

  // Member: rax_4
  cdr >> ros_message.rax_4;

  // Member: rax_5
  cdr >> ros_message.rax_5;

  // Member: rax_6
  cdr >> ros_message.rax_6;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_msgs
get_serialized_size(
  const abb_rapid_msgs::msg::RobJoint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rax_1
  {
    size_t item_size = sizeof(ros_message.rax_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rax_2
  {
    size_t item_size = sizeof(ros_message.rax_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rax_3
  {
    size_t item_size = sizeof(ros_message.rax_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rax_4
  {
    size_t item_size = sizeof(ros_message.rax_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rax_5
  {
    size_t item_size = sizeof(ros_message.rax_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rax_6
  {
    size_t item_size = sizeof(ros_message.rax_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_msgs
max_serialized_size_RobJoint(
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


  // Member: rax_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rax_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rax_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rax_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rax_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rax_6
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
    using DataType = abb_rapid_msgs::msg::RobJoint;
    is_plain =
      (
      offsetof(DataType, rax_6) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobJoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_rapid_msgs::msg::RobJoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobJoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_rapid_msgs::msg::RobJoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobJoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_rapid_msgs::msg::RobJoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobJoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobJoint(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobJoint__callbacks = {
  "abb_rapid_msgs::msg",
  "RobJoint",
  _RobJoint__cdr_serialize,
  _RobJoint__cdr_deserialize,
  _RobJoint__get_serialized_size,
  _RobJoint__max_serialized_size
};

static rosidl_message_type_support_t _RobJoint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobJoint__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abb_rapid_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_rapid_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_rapid_msgs::msg::RobJoint>()
{
  return &abb_rapid_msgs::msg::typesupport_fastrtps_cpp::_RobJoint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_msgs, msg, RobJoint)() {
  return &abb_rapid_msgs::msg::typesupport_fastrtps_cpp::_RobJoint__handle;
}

#ifdef __cplusplus
}
#endif
