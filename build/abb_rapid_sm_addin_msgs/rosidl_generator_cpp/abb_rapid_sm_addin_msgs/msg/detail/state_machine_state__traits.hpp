// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/StateMachineState.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__TRAITS_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateMachineState & msg,
  std::ostream & out)
{
  out << "{";
  // member: rapid_task
  {
    out << "rapid_task: ";
    rosidl_generator_traits::value_to_yaml(msg.rapid_task, out);
    out << ", ";
  }

  // member: sm_state
  {
    out << "sm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_state, out);
    out << ", ";
  }

  // member: egm_action
  {
    out << "egm_action: ";
    rosidl_generator_traits::value_to_yaml(msg.egm_action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StateMachineState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rapid_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rapid_task: ";
    rosidl_generator_traits::value_to_yaml(msg.rapid_task, out);
    out << "\n";
  }

  // member: sm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_state, out);
    out << "\n";
  }

  // member: egm_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "egm_action: ";
    rosidl_generator_traits::value_to_yaml(msg.egm_action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateMachineState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_rapid_sm_addin_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_rapid_sm_addin_msgs::msg::StateMachineState & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::msg::StateMachineState & msg)
{
  return abb_rapid_sm_addin_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::msg::StateMachineState>()
{
  return "abb_rapid_sm_addin_msgs::msg::StateMachineState";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::msg::StateMachineState>()
{
  return "abb_rapid_sm_addin_msgs/msg/StateMachineState";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::msg::StateMachineState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::msg::StateMachineState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::msg::StateMachineState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__TRAITS_HPP_
