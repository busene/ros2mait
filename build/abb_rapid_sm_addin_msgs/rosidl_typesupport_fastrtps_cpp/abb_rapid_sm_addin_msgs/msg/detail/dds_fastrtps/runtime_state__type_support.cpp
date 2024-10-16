// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abb_rapid_sm_addin_msgs:msg/RuntimeState.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/runtime_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abb_rapid_sm_addin_msgs/msg/detail/runtime_state__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace abb_rapid_sm_addin_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const abb_rapid_sm_addin_msgs::msg::StateMachineState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_sm_addin_msgs::msg::StateMachineState &);
size_t get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::StateMachineState &,
  size_t current_alignment);
size_t
max_serialized_size_StateMachineState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_sm_addin_msgs


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_serialize(
  const abb_rapid_sm_addin_msgs::msg::RuntimeState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: state_machines
  {
    size_t size = ros_message.state_machines.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.state_machines[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_rapid_sm_addin_msgs::msg::RuntimeState & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: state_machines
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.state_machines.resize(size);
    for (size_t i = 0; i < size; i++) {
      abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.state_machines[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::RuntimeState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: state_machines
  {
    size_t array_size = ros_message.state_machines.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.state_machines[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
max_serialized_size_RuntimeState(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: state_machines
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
      size_t inner_size =
        abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_StateMachineState(
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
    using DataType = abb_rapid_sm_addin_msgs::msg::RuntimeState;
    is_plain =
      (
      offsetof(DataType, state_machines) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RuntimeState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::msg::RuntimeState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RuntimeState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_rapid_sm_addin_msgs::msg::RuntimeState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RuntimeState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::msg::RuntimeState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RuntimeState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RuntimeState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RuntimeState__callbacks = {
  "abb_rapid_sm_addin_msgs::msg",
  "RuntimeState",
  _RuntimeState__cdr_serialize,
  _RuntimeState__cdr_deserialize,
  _RuntimeState__get_serialized_size,
  _RuntimeState__max_serialized_size
};

static rosidl_message_type_support_t _RuntimeState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RuntimeState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_rapid_sm_addin_msgs::msg::RuntimeState>()
{
  return &abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::_RuntimeState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, msg, RuntimeState)() {
  return &abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::_RuntimeState__handle;
}

#ifdef __cplusplus
}
#endif
