// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_msgs:msg/ToolData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__TOOL_DATA__TRAITS_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__TOOL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_msgs/msg/detail/tool_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tframe'
#include "abb_rapid_msgs/msg/detail/pose__traits.hpp"
// Member 'tload'
#include "abb_rapid_msgs/msg/detail/load_data__traits.hpp"

namespace abb_rapid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ToolData & msg,
  std::ostream & out)
{
  out << "{";
  // member: robhold
  {
    out << "robhold: ";
    rosidl_generator_traits::value_to_yaml(msg.robhold, out);
    out << ", ";
  }

  // member: tframe
  {
    out << "tframe: ";
    to_flow_style_yaml(msg.tframe, out);
    out << ", ";
  }

  // member: tload
  {
    out << "tload: ";
    to_flow_style_yaml(msg.tload, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToolData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robhold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robhold: ";
    rosidl_generator_traits::value_to_yaml(msg.robhold, out);
    out << "\n";
  }

  // member: tframe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tframe:\n";
    to_block_style_yaml(msg.tframe, out, indentation + 2);
  }

  // member: tload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tload:\n";
    to_block_style_yaml(msg.tload, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToolData & msg, bool use_flow_style = false)
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

}  // namespace abb_rapid_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_rapid_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_rapid_msgs::msg::ToolData & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_msgs::msg::ToolData & msg)
{
  return abb_rapid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_msgs::msg::ToolData>()
{
  return "abb_rapid_msgs::msg::ToolData";
}

template<>
inline const char * name<abb_rapid_msgs::msg::ToolData>()
{
  return "abb_rapid_msgs/msg/ToolData";
}

template<>
struct has_fixed_size<abb_rapid_msgs::msg::ToolData>
  : std::integral_constant<bool, has_fixed_size<abb_rapid_msgs::msg::LoadData>::value && has_fixed_size<abb_rapid_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<abb_rapid_msgs::msg::ToolData>
  : std::integral_constant<bool, has_bounded_size<abb_rapid_msgs::msg::LoadData>::value && has_bounded_size<abb_rapid_msgs::msg::Pose>::value> {};

template<>
struct is_message<abb_rapid_msgs::msg::ToolData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__TOOL_DATA__TRAITS_HPP_
