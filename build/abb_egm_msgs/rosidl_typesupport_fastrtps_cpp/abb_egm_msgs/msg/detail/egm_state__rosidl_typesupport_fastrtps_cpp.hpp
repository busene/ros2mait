// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from abb_egm_msgs:msg/EGMState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "abb_egm_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "abb_egm_msgs/msg/detail/egm_state__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace abb_egm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_egm_msgs
cdr_serialize(
  const abb_egm_msgs::msg::EGMState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_egm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_egm_msgs::msg::EGMState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_egm_msgs
get_serialized_size(
  const abb_egm_msgs::msg::EGMState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_egm_msgs
max_serialized_size_EGMState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abb_egm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_egm_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_egm_msgs, msg, EGMState)();

#ifdef __cplusplus
}
#endif

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
