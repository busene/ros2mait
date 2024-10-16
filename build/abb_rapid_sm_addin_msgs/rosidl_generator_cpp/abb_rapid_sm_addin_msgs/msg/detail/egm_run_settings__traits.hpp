// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMRunSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__TRAITS_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'offset'
#include "abb_rapid_msgs/msg/detail/pose__traits.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EGMRunSettings & msg,
  std::ostream & out)
{
  out << "{";
  // member: cond_time
  {
    out << "cond_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cond_time, out);
    out << ", ";
  }

  // member: ramp_in_time
  {
    out << "ramp_in_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_in_time, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    to_flow_style_yaml(msg.offset, out);
    out << ", ";
  }

  // member: pos_corr_gain
  {
    out << "pos_corr_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_corr_gain, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EGMRunSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cond_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cond_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cond_time, out);
    out << "\n";
  }

  // member: ramp_in_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ramp_in_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_in_time, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset:\n";
    to_block_style_yaml(msg.offset, out, indentation + 2);
  }

  // member: pos_corr_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_corr_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_corr_gain, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EGMRunSettings & msg, bool use_flow_style = false)
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
  const abb_rapid_sm_addin_msgs::msg::EGMRunSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::msg::EGMRunSettings & msg)
{
  return abb_rapid_sm_addin_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::msg::EGMRunSettings>()
{
  return "abb_rapid_sm_addin_msgs::msg::EGMRunSettings";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::msg::EGMRunSettings>()
{
  return "abb_rapid_sm_addin_msgs/msg/EGMRunSettings";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::msg::EGMRunSettings>
  : std::integral_constant<bool, has_fixed_size<abb_rapid_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::msg::EGMRunSettings>
  : std::integral_constant<bool, has_bounded_size<abb_rapid_msgs::msg::Pose>::value> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::msg::EGMRunSettings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__TRAITS_HPP_
