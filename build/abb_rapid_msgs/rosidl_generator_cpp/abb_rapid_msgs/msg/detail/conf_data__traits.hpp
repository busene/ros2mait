// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_msgs:msg/ConfData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__TRAITS_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_msgs/msg/detail/conf_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_rapid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConfData & msg,
  std::ostream & out)
{
  out << "{";
  // member: cf1
  {
    out << "cf1: ";
    rosidl_generator_traits::value_to_yaml(msg.cf1, out);
    out << ", ";
  }

  // member: cf4
  {
    out << "cf4: ";
    rosidl_generator_traits::value_to_yaml(msg.cf4, out);
    out << ", ";
  }

  // member: cf6
  {
    out << "cf6: ";
    rosidl_generator_traits::value_to_yaml(msg.cf6, out);
    out << ", ";
  }

  // member: cfx
  {
    out << "cfx: ";
    rosidl_generator_traits::value_to_yaml(msg.cfx, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cf1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cf1: ";
    rosidl_generator_traits::value_to_yaml(msg.cf1, out);
    out << "\n";
  }

  // member: cf4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cf4: ";
    rosidl_generator_traits::value_to_yaml(msg.cf4, out);
    out << "\n";
  }

  // member: cf6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cf6: ";
    rosidl_generator_traits::value_to_yaml(msg.cf6, out);
    out << "\n";
  }

  // member: cfx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cfx: ";
    rosidl_generator_traits::value_to_yaml(msg.cfx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfData & msg, bool use_flow_style = false)
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
  const abb_rapid_msgs::msg::ConfData & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_msgs::msg::ConfData & msg)
{
  return abb_rapid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_msgs::msg::ConfData>()
{
  return "abb_rapid_msgs::msg::ConfData";
}

template<>
inline const char * name<abb_rapid_msgs::msg::ConfData>()
{
  return "abb_rapid_msgs/msg/ConfData";
}

template<>
struct has_fixed_size<abb_rapid_msgs::msg::ConfData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_rapid_msgs::msg::ConfData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_rapid_msgs::msg::ConfData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__TRAITS_HPP_
