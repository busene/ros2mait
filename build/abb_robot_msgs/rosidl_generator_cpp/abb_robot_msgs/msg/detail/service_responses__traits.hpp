// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_robot_msgs:msg/ServiceResponses.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__SERVICE_RESPONSES__TRAITS_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__SERVICE_RESPONSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_robot_msgs/msg/detail/service_responses__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServiceResponses & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceResponses & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceResponses & msg, bool use_flow_style = false)
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
  const abb_robot_msgs::msg::ServiceResponses & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_robot_msgs::msg::ServiceResponses & msg)
{
  return abb_robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_robot_msgs::msg::ServiceResponses>()
{
  return "abb_robot_msgs::msg::ServiceResponses";
}

template<>
inline const char * name<abb_robot_msgs::msg::ServiceResponses>()
{
  return "abb_robot_msgs/msg/ServiceResponses";
}

template<>
struct has_fixed_size<abb_robot_msgs::msg::ServiceResponses>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_robot_msgs::msg::ServiceResponses>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_robot_msgs::msg::ServiceResponses>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__SERVICE_RESPONSES__TRAITS_HPP_
