// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_msgs:msg/JointTarget.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__TRAITS_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_msgs/msg/detail/joint_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'robax'
#include "abb_rapid_msgs/msg/detail/rob_joint__traits.hpp"
// Member 'extax'
#include "abb_rapid_msgs/msg/detail/ext_joint__traits.hpp"

namespace abb_rapid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: robax
  {
    out << "robax: ";
    to_flow_style_yaml(msg.robax, out);
    out << ", ";
  }

  // member: extax
  {
    out << "extax: ";
    to_flow_style_yaml(msg.extax, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robax:\n";
    to_block_style_yaml(msg.robax, out, indentation + 2);
  }

  // member: extax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extax:\n";
    to_block_style_yaml(msg.extax, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointTarget & msg, bool use_flow_style = false)
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
  const abb_rapid_msgs::msg::JointTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_msgs::msg::JointTarget & msg)
{
  return abb_rapid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_msgs::msg::JointTarget>()
{
  return "abb_rapid_msgs::msg::JointTarget";
}

template<>
inline const char * name<abb_rapid_msgs::msg::JointTarget>()
{
  return "abb_rapid_msgs/msg/JointTarget";
}

template<>
struct has_fixed_size<abb_rapid_msgs::msg::JointTarget>
  : std::integral_constant<bool, has_fixed_size<abb_rapid_msgs::msg::ExtJoint>::value && has_fixed_size<abb_rapid_msgs::msg::RobJoint>::value> {};

template<>
struct has_bounded_size<abb_rapid_msgs::msg::JointTarget>
  : std::integral_constant<bool, has_bounded_size<abb_rapid_msgs::msg::ExtJoint>::value && has_bounded_size<abb_rapid_msgs::msg::RobJoint>::value> {};

template<>
struct is_message<abb_rapid_msgs::msg::JointTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__TRAITS_HPP_
