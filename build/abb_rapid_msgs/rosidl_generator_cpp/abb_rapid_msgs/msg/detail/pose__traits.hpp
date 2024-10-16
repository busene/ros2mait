// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__POSE__TRAITS_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_msgs/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trans'
#include "abb_rapid_msgs/msg/detail/pos__traits.hpp"
// Member 'rot'
#include "abb_rapid_msgs/msg/detail/orient__traits.hpp"

namespace abb_rapid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose & msg,
  std::ostream & out)
{
  out << "{";
  // member: trans
  {
    out << "trans: ";
    to_flow_style_yaml(msg.trans, out);
    out << ", ";
  }

  // member: rot
  {
    out << "rot: ";
    to_flow_style_yaml(msg.rot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trans:\n";
    to_block_style_yaml(msg.trans, out, indentation + 2);
  }

  // member: rot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rot:\n";
    to_block_style_yaml(msg.rot, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose & msg, bool use_flow_style = false)
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
  const abb_rapid_msgs::msg::Pose & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_msgs::msg::Pose & msg)
{
  return abb_rapid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_msgs::msg::Pose>()
{
  return "abb_rapid_msgs::msg::Pose";
}

template<>
inline const char * name<abb_rapid_msgs::msg::Pose>()
{
  return "abb_rapid_msgs/msg/Pose";
}

template<>
struct has_fixed_size<abb_rapid_msgs::msg::Pose>
  : std::integral_constant<bool, has_fixed_size<abb_rapid_msgs::msg::Orient>::value && has_fixed_size<abb_rapid_msgs::msg::Pos>::value> {};

template<>
struct has_bounded_size<abb_rapid_msgs::msg::Pose>
  : std::integral_constant<bool, has_bounded_size<abb_rapid_msgs::msg::Orient>::value && has_bounded_size<abb_rapid_msgs::msg::Pos>::value> {};

template<>
struct is_message<abb_rapid_msgs::msg::Pose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__POSE__TRAITS_HPP_
