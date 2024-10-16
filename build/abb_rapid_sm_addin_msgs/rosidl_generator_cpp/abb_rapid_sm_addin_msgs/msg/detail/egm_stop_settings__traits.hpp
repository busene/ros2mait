// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMStopSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_STOP_SETTINGS__TRAITS_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_STOP_SETTINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EGMStopSettings & msg,
  std::ostream & out)
{
  out << "{";
  // member: ramp_out_time
  {
    out << "ramp_out_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_out_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EGMStopSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ramp_out_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ramp_out_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_out_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EGMStopSettings & msg, bool use_flow_style = false)
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
  const abb_rapid_sm_addin_msgs::msg::EGMStopSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::msg::EGMStopSettings & msg)
{
  return abb_rapid_sm_addin_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::msg::EGMStopSettings>()
{
  return "abb_rapid_sm_addin_msgs::msg::EGMStopSettings";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::msg::EGMStopSettings>()
{
  return "abb_rapid_sm_addin_msgs/msg/EGMStopSettings";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::msg::EGMStopSettings>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::msg::EGMStopSettings>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::msg::EGMStopSettings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_STOP_SETTINGS__TRAITS_HPP_
