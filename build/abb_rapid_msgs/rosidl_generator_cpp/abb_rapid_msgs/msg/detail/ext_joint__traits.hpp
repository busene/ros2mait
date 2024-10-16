// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_msgs:msg/ExtJoint.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__TRAITS_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_msgs/msg/detail/ext_joint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_rapid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExtJoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: eax_a
  {
    out << "eax_a: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_a, out);
    out << ", ";
  }

  // member: eax_b
  {
    out << "eax_b: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_b, out);
    out << ", ";
  }

  // member: eax_c
  {
    out << "eax_c: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_c, out);
    out << ", ";
  }

  // member: eax_d
  {
    out << "eax_d: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_d, out);
    out << ", ";
  }

  // member: eax_e
  {
    out << "eax_e: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_e, out);
    out << ", ";
  }

  // member: eax_f
  {
    out << "eax_f: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_f, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExtJoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: eax_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eax_a: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_a, out);
    out << "\n";
  }

  // member: eax_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eax_b: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_b, out);
    out << "\n";
  }

  // member: eax_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eax_c: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_c, out);
    out << "\n";
  }

  // member: eax_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eax_d: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_d, out);
    out << "\n";
  }

  // member: eax_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eax_e: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_e, out);
    out << "\n";
  }

  // member: eax_f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eax_f: ";
    rosidl_generator_traits::value_to_yaml(msg.eax_f, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExtJoint & msg, bool use_flow_style = false)
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
  const abb_rapid_msgs::msg::ExtJoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_msgs::msg::ExtJoint & msg)
{
  return abb_rapid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_msgs::msg::ExtJoint>()
{
  return "abb_rapid_msgs::msg::ExtJoint";
}

template<>
inline const char * name<abb_rapid_msgs::msg::ExtJoint>()
{
  return "abb_rapid_msgs/msg/ExtJoint";
}

template<>
struct has_fixed_size<abb_rapid_msgs::msg::ExtJoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_rapid_msgs::msg::ExtJoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_rapid_msgs::msg::ExtJoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__TRAITS_HPP_
