// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abb_rapid_msgs:msg/WObjData.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/w_obj_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abb_rapid_msgs/msg/detail/w_obj_data__struct.hpp"

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
bool cdr_serialize(
  const abb_rapid_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_msgs::msg::Pose &);
size_t get_serialized_size(
  const abb_rapid_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_msgs

// functions for abb_rapid_msgs::msg::Pose already declared above


namespace abb_rapid_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_msgs
cdr_serialize(
  const abb_rapid_msgs::msg::WObjData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robhold
  cdr << (ros_message.robhold ? true : false);
  // Member: ufprog
  cdr << (ros_message.ufprog ? true : false);
  // Member: ufmec
  cdr << ros_message.ufmec;
  // Member: uframe
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.uframe,
    cdr);
  // Member: oframe
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.oframe,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_rapid_msgs::msg::WObjData & ros_message)
{
  // Member: robhold
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.robhold = tmp ? true : false;
  }

  // Member: ufprog
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ufprog = tmp ? true : false;
  }

  // Member: ufmec
  cdr >> ros_message.ufmec;

  // Member: uframe
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.uframe);

  // Member: oframe
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.oframe);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_msgs
get_serialized_size(
  const abb_rapid_msgs::msg::WObjData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robhold
  {
    size_t item_size = sizeof(ros_message.robhold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ufprog
  {
    size_t item_size = sizeof(ros_message.ufprog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ufmec
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.ufmec.size() + 1);
  // Member: uframe

  current_alignment +=
    abb_rapid_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.uframe, current_alignment);
  // Member: oframe

  current_alignment +=
    abb_rapid_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.oframe, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_msgs
max_serialized_size_WObjData(
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


  // Member: robhold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ufprog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ufmec
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

  // Member: uframe
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: oframe
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
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
    using DataType = abb_rapid_msgs::msg::WObjData;
    is_plain =
      (
      offsetof(DataType, oframe) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _WObjData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_rapid_msgs::msg::WObjData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WObjData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_rapid_msgs::msg::WObjData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WObjData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_rapid_msgs::msg::WObjData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WObjData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WObjData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WObjData__callbacks = {
  "abb_rapid_msgs::msg",
  "WObjData",
  _WObjData__cdr_serialize,
  _WObjData__cdr_deserialize,
  _WObjData__get_serialized_size,
  _WObjData__max_serialized_size
};

static rosidl_message_type_support_t _WObjData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WObjData__callbacks,
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
get_message_type_support_handle<abb_rapid_msgs::msg::WObjData>()
{
  return &abb_rapid_msgs::msg::typesupport_fastrtps_cpp::_WObjData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_msgs, msg, WObjData)() {
  return &abb_rapid_msgs::msg::typesupport_fastrtps_cpp::_WObjData__handle;
}

#ifdef __cplusplus
}
#endif
