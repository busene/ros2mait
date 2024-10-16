// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abb_egm_msgs:msg/EGMChannelState.idl
// generated code does not contain a copyright notice
#include "abb_egm_msgs/msg/detail/egm_channel_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abb_egm_msgs/msg/detail/egm_channel_state__struct.hpp"

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

namespace abb_egm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_egm_msgs
cdr_serialize(
  const abb_egm_msgs::msg::EGMChannelState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: active
  cdr << (ros_message.active ? true : false);
  // Member: egm_convergence_met
  cdr << (ros_message.egm_convergence_met ? true : false);
  // Member: egm_client_state
  cdr << ros_message.egm_client_state;
  // Member: motor_state
  cdr << ros_message.motor_state;
  // Member: rapid_execution_state
  cdr << ros_message.rapid_execution_state;
  // Member: utilization_rate
  cdr << ros_message.utilization_rate;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_egm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_egm_msgs::msg::EGMChannelState & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active = tmp ? true : false;
  }

  // Member: egm_convergence_met
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.egm_convergence_met = tmp ? true : false;
  }

  // Member: egm_client_state
  cdr >> ros_message.egm_client_state;

  // Member: motor_state
  cdr >> ros_message.motor_state;

  // Member: rapid_execution_state
  cdr >> ros_message.rapid_execution_state;

  // Member: utilization_rate
  cdr >> ros_message.utilization_rate;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_egm_msgs
get_serialized_size(
  const abb_egm_msgs::msg::EGMChannelState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: active
  {
    size_t item_size = sizeof(ros_message.active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: egm_convergence_met
  {
    size_t item_size = sizeof(ros_message.egm_convergence_met);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: egm_client_state
  {
    size_t item_size = sizeof(ros_message.egm_client_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_state
  {
    size_t item_size = sizeof(ros_message.motor_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rapid_execution_state
  {
    size_t item_size = sizeof(ros_message.rapid_execution_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: utilization_rate
  {
    size_t item_size = sizeof(ros_message.utilization_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_egm_msgs
max_serialized_size_EGMChannelState(
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


  // Member: name
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

  // Member: active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: egm_convergence_met
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: egm_client_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rapid_execution_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: utilization_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abb_egm_msgs::msg::EGMChannelState;
    is_plain =
      (
      offsetof(DataType, utilization_rate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EGMChannelState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_egm_msgs::msg::EGMChannelState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EGMChannelState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_egm_msgs::msg::EGMChannelState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EGMChannelState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_egm_msgs::msg::EGMChannelState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EGMChannelState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EGMChannelState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EGMChannelState__callbacks = {
  "abb_egm_msgs::msg",
  "EGMChannelState",
  _EGMChannelState__cdr_serialize,
  _EGMChannelState__cdr_deserialize,
  _EGMChannelState__get_serialized_size,
  _EGMChannelState__max_serialized_size
};

static rosidl_message_type_support_t _EGMChannelState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EGMChannelState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abb_egm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_egm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_egm_msgs::msg::EGMChannelState>()
{
  return &abb_egm_msgs::msg::typesupport_fastrtps_cpp::_EGMChannelState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_egm_msgs, msg, EGMChannelState)() {
  return &abb_egm_msgs::msg::typesupport_fastrtps_cpp::_EGMChannelState__handle;
}

#ifdef __cplusplus
}
#endif
