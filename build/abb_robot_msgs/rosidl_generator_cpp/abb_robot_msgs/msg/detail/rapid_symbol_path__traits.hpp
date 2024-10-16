// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_robot_msgs:msg/RAPIDSymbolPath.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__TRAITS_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_robot_msgs/msg/detail/rapid_symbol_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RAPIDSymbolPath & msg,
  std::ostream & out)
{
  out << "{";
  // member: task
  {
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
    out << ", ";
  }

  // member: module
  {
    out << "module: ";
    rosidl_generator_traits::value_to_yaml(msg.module, out);
    out << ", ";
  }

  // member: symbol
  {
    out << "symbol: ";
    rosidl_generator_traits::value_to_yaml(msg.symbol, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RAPIDSymbolPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
    out << "\n";
  }

  // member: module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module: ";
    rosidl_generator_traits::value_to_yaml(msg.module, out);
    out << "\n";
  }

  // member: symbol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "symbol: ";
    rosidl_generator_traits::value_to_yaml(msg.symbol, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RAPIDSymbolPath & msg, bool use_flow_style = false)
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

}  // namespace abb_robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_robot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_robot_msgs::msg::RAPIDSymbolPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_robot_msgs::msg::RAPIDSymbolPath & msg)
{
  return abb_robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_robot_msgs::msg::RAPIDSymbolPath>()
{
  return "abb_robot_msgs::msg::RAPIDSymbolPath";
}

template<>
inline const char * name<abb_robot_msgs::msg::RAPIDSymbolPath>()
{
  return "abb_robot_msgs/msg/RAPIDSymbolPath";
}

template<>
struct has_fixed_size<abb_robot_msgs::msg::RAPIDSymbolPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_robot_msgs::msg::RAPIDSymbolPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_robot_msgs::msg::RAPIDSymbolPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__TRAITS_HPP_
