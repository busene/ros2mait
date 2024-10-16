// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2srrc_data:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__JOINT__TRAITS_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__JOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2srrc_data/msg/detail/joint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2srrc_data
{

namespace msg
{

inline void to_flow_style_yaml(
  const Joint & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint
  {
    out << "joint: ";
    rosidl_generator_traits::value_to_yaml(msg.joint, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Joint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint: ";
    rosidl_generator_traits::value_to_yaml(msg.joint, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Joint & msg, bool use_flow_style = false)
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

}  // namespace ros2srrc_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2srrc_data::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2srrc_data::msg::Joint & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::msg::Joint & msg)
{
  return ros2srrc_data::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::msg::Joint>()
{
  return "ros2srrc_data::msg::Joint";
}

template<>
inline const char * name<ros2srrc_data::msg::Joint>()
{
  return "ros2srrc_data/msg/Joint";
}

template<>
struct has_fixed_size<ros2srrc_data::msg::Joint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2srrc_data::msg::Joint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2srrc_data::msg::Joint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2SRRC_DATA__MSG__DETAIL__JOINT__TRAITS_HPP_
