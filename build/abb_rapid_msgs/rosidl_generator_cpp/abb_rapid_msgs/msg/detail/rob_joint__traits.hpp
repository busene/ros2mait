// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_msgs:msg/RobJoint.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__TRAITS_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_msgs/msg/detail/rob_joint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_rapid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobJoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: rax_1
  {
    out << "rax_1: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_1, out);
    out << ", ";
  }

  // member: rax_2
  {
    out << "rax_2: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_2, out);
    out << ", ";
  }

  // member: rax_3
  {
    out << "rax_3: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_3, out);
    out << ", ";
  }

  // member: rax_4
  {
    out << "rax_4: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_4, out);
    out << ", ";
  }

  // member: rax_5
  {
    out << "rax_5: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_5, out);
    out << ", ";
  }

  // member: rax_6
  {
    out << "rax_6: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobJoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rax_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rax_1: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_1, out);
    out << "\n";
  }

  // member: rax_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rax_2: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_2, out);
    out << "\n";
  }

  // member: rax_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rax_3: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_3, out);
    out << "\n";
  }

  // member: rax_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rax_4: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_4, out);
    out << "\n";
  }

  // member: rax_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rax_5: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_5, out);
    out << "\n";
  }

  // member: rax_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rax_6: ";
    rosidl_generator_traits::value_to_yaml(msg.rax_6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobJoint & msg, bool use_flow_style = false)
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
  const abb_rapid_msgs::msg::RobJoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_msgs::msg::RobJoint & msg)
{
  return abb_rapid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_msgs::msg::RobJoint>()
{
  return "abb_rapid_msgs::msg::RobJoint";
}

template<>
inline const char * name<abb_rapid_msgs::msg::RobJoint>()
{
  return "abb_rapid_msgs/msg/RobJoint";
}

template<>
struct has_fixed_size<abb_rapid_msgs::msg::RobJoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_rapid_msgs::msg::RobJoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_rapid_msgs::msg::RobJoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__TRAITS_HPP_
