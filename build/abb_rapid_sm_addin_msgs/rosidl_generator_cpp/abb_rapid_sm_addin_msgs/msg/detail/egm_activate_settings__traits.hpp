// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__TRAITS_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tool'
#include "abb_rapid_msgs/msg/detail/tool_data__traits.hpp"
// Member 'wobj'
#include "abb_rapid_msgs/msg/detail/w_obj_data__traits.hpp"
// Member 'correction_frame'
// Member 'sensor_frame'
#include "abb_rapid_msgs/msg/detail/pose__traits.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EGMActivateSettings & msg,
  std::ostream & out)
{
  out << "{";
  // member: tool
  {
    out << "tool: ";
    to_flow_style_yaml(msg.tool, out);
    out << ", ";
  }

  // member: wobj
  {
    out << "wobj: ";
    to_flow_style_yaml(msg.wobj, out);
    out << ", ";
  }

  // member: correction_frame
  {
    out << "correction_frame: ";
    to_flow_style_yaml(msg.correction_frame, out);
    out << ", ";
  }

  // member: sensor_frame
  {
    out << "sensor_frame: ";
    to_flow_style_yaml(msg.sensor_frame, out);
    out << ", ";
  }

  // member: cond_min_max
  {
    out << "cond_min_max: ";
    rosidl_generator_traits::value_to_yaml(msg.cond_min_max, out);
    out << ", ";
  }

  // member: lp_filter
  {
    out << "lp_filter: ";
    rosidl_generator_traits::value_to_yaml(msg.lp_filter, out);
    out << ", ";
  }

  // member: sample_rate
  {
    out << "sample_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_rate, out);
    out << ", ";
  }

  // member: max_speed_deviation
  {
    out << "max_speed_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed_deviation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EGMActivateSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool:\n";
    to_block_style_yaml(msg.tool, out, indentation + 2);
  }

  // member: wobj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wobj:\n";
    to_block_style_yaml(msg.wobj, out, indentation + 2);
  }

  // member: correction_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "correction_frame:\n";
    to_block_style_yaml(msg.correction_frame, out, indentation + 2);
  }

  // member: sensor_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_frame:\n";
    to_block_style_yaml(msg.sensor_frame, out, indentation + 2);
  }

  // member: cond_min_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cond_min_max: ";
    rosidl_generator_traits::value_to_yaml(msg.cond_min_max, out);
    out << "\n";
  }

  // member: lp_filter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lp_filter: ";
    rosidl_generator_traits::value_to_yaml(msg.lp_filter, out);
    out << "\n";
  }

  // member: sample_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_rate, out);
    out << "\n";
  }

  // member: max_speed_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_speed_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed_deviation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EGMActivateSettings & msg, bool use_flow_style = false)
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
  const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & msg)
{
  return abb_rapid_sm_addin_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings>()
{
  return "abb_rapid_sm_addin_msgs::msg::EGMActivateSettings";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings>()
{
  return "abb_rapid_sm_addin_msgs/msg/EGMActivateSettings";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings>
  : std::integral_constant<bool, has_fixed_size<abb_rapid_msgs::msg::Pose>::value && has_fixed_size<abb_rapid_msgs::msg::ToolData>::value && has_fixed_size<abb_rapid_msgs::msg::WObjData>::value> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings>
  : std::integral_constant<bool, has_bounded_size<abb_rapid_msgs::msg::Pose>::value && has_bounded_size<abb_rapid_msgs::msg::ToolData>::value && has_bounded_size<abb_rapid_msgs::msg::WObjData>::value> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__TRAITS_HPP_
