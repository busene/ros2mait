// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_egm_msgs:msg/EGMChannelState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__TRAITS_HPP_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_egm_msgs/msg/detail/egm_channel_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_egm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EGMChannelState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: egm_convergence_met
  {
    out << "egm_convergence_met: ";
    rosidl_generator_traits::value_to_yaml(msg.egm_convergence_met, out);
    out << ", ";
  }

  // member: egm_client_state
  {
    out << "egm_client_state: ";
    rosidl_generator_traits::value_to_yaml(msg.egm_client_state, out);
    out << ", ";
  }

  // member: motor_state
  {
    out << "motor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_state, out);
    out << ", ";
  }

  // member: rapid_execution_state
  {
    out << "rapid_execution_state: ";
    rosidl_generator_traits::value_to_yaml(msg.rapid_execution_state, out);
    out << ", ";
  }

  // member: utilization_rate
  {
    out << "utilization_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.utilization_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EGMChannelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: egm_convergence_met
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "egm_convergence_met: ";
    rosidl_generator_traits::value_to_yaml(msg.egm_convergence_met, out);
    out << "\n";
  }

  // member: egm_client_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "egm_client_state: ";
    rosidl_generator_traits::value_to_yaml(msg.egm_client_state, out);
    out << "\n";
  }

  // member: motor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_state, out);
    out << "\n";
  }

  // member: rapid_execution_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rapid_execution_state: ";
    rosidl_generator_traits::value_to_yaml(msg.rapid_execution_state, out);
    out << "\n";
  }

  // member: utilization_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utilization_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.utilization_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EGMChannelState & msg, bool use_flow_style = false)
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

}  // namespace abb_egm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_egm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_egm_msgs::msg::EGMChannelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_egm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_egm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_egm_msgs::msg::EGMChannelState & msg)
{
  return abb_egm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_egm_msgs::msg::EGMChannelState>()
{
  return "abb_egm_msgs::msg::EGMChannelState";
}

template<>
inline const char * name<abb_egm_msgs::msg::EGMChannelState>()
{
  return "abb_egm_msgs/msg/EGMChannelState";
}

template<>
struct has_fixed_size<abb_egm_msgs::msg::EGMChannelState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_egm_msgs::msg::EGMChannelState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_egm_msgs::msg::EGMChannelState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__TRAITS_HPP_
