// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_msgs:msg/Orient.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ORIENT__TRAITS_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__ORIENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_msgs/msg/detail/orient__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_rapid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Orient & msg,
  std::ostream & out)
{
  out << "{";
  // member: q1
  {
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << ", ";
  }

  // member: q2
  {
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << ", ";
  }

  // member: q3
  {
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
    out << ", ";
  }

  // member: q4
  {
    out << "q4: ";
    rosidl_generator_traits::value_to_yaml(msg.q4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Orient & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: q1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << "\n";
  }

  // member: q2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << "\n";
  }

  // member: q3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
    out << "\n";
  }

  // member: q4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q4: ";
    rosidl_generator_traits::value_to_yaml(msg.q4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Orient & msg, bool use_flow_style = false)
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
  const abb_rapid_msgs::msg::Orient & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_msgs::msg::Orient & msg)
{
  return abb_rapid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_msgs::msg::Orient>()
{
  return "abb_rapid_msgs::msg::Orient";
}

template<>
inline const char * name<abb_rapid_msgs::msg::Orient>()
{
  return "abb_rapid_msgs/msg/Orient";
}

template<>
struct has_fixed_size<abb_rapid_msgs::msg::Orient>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_rapid_msgs::msg::Orient>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_rapid_msgs::msg::Orient>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ORIENT__TRAITS_HPP_
