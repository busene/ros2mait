// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSetupSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__struct.hpp"

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

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_serialize(
  const abb_rapid_sm_addin_msgs::msg::EGMSetupSettings & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_rapid_sm_addin_msgs::msg::EGMSetupSettings & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::EGMSetupSettings & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
max_serialized_size_EGMSetupSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, msg, EGMSetupSettings)();

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
