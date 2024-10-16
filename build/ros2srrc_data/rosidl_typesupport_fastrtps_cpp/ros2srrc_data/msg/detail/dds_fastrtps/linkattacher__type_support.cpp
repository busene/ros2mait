// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2srrc_data:msg/Linkattacher.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/linkattacher__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2srrc_data/msg/detail/linkattacher__struct.hpp"

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

namespace ros2srrc_data
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2srrc_data
cdr_serialize(
  const ros2srrc_data::msg::Linkattacher & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: model1_name
  cdr << ros_message.model1_name;
  // Member: link1_name
  cdr << ros_message.link1_name;
  // Member: model2_name
  cdr << ros_message.model2_name;
  // Member: link2_name
  cdr << ros_message.link2_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2srrc_data
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2srrc_data::msg::Linkattacher & ros_message)
{
  // Member: model1_name
  cdr >> ros_message.model1_name;

  // Member: link1_name
  cdr >> ros_message.link1_name;

  // Member: model2_name
  cdr >> ros_message.model2_name;

  // Member: link2_name
  cdr >> ros_message.link2_name;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2srrc_data
get_serialized_size(
  const ros2srrc_data::msg::Linkattacher & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: model1_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.model1_name.size() + 1);
  // Member: link1_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.link1_name.size() + 1);
  // Member: model2_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.model2_name.size() + 1);
  // Member: link2_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.link2_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2srrc_data
max_serialized_size_Linkattacher(
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


  // Member: model1_name
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

  // Member: link1_name
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

  // Member: model2_name
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

  // Member: link2_name
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
    using DataType = ros2srrc_data::msg::Linkattacher;
    is_plain =
      (
      offsetof(DataType, link2_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Linkattacher__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2srrc_data::msg::Linkattacher *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Linkattacher__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2srrc_data::msg::Linkattacher *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Linkattacher__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2srrc_data::msg::Linkattacher *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Linkattacher__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Linkattacher(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Linkattacher__callbacks = {
  "ros2srrc_data::msg",
  "Linkattacher",
  _Linkattacher__cdr_serialize,
  _Linkattacher__cdr_deserialize,
  _Linkattacher__get_serialized_size,
  _Linkattacher__max_serialized_size
};

static rosidl_message_type_support_t _Linkattacher__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Linkattacher__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2srrc_data

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2srrc_data
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2srrc_data::msg::Linkattacher>()
{
  return &ros2srrc_data::msg::typesupport_fastrtps_cpp::_Linkattacher__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2srrc_data, msg, Linkattacher)() {
  return &ros2srrc_data::msg::typesupport_fastrtps_cpp::_Linkattacher__handle;
}

#ifdef __cplusplus
}
#endif
