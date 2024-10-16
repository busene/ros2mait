// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2srrc_data:msg/Ypr.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__YPR__TRAITS_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__YPR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2srrc_data/msg/detail/ypr__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2srrc_data
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ypr & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ypr & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ypr & msg, bool use_flow_style = false)
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
  const ros2srrc_data::msg::Ypr & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::msg::Ypr & msg)
{
  return ros2srrc_data::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::msg::Ypr>()
{
  return "ros2srrc_data::msg::Ypr";
}

template<>
inline const char * name<ros2srrc_data::msg::Ypr>()
{
  return "ros2srrc_data/msg/Ypr";
}

template<>
struct has_fixed_size<ros2srrc_data::msg::Ypr>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2srrc_data::msg::Ypr>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2srrc_data::msg::Ypr>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2SRRC_DATA__MSG__DETAIL__YPR__TRAITS_HPP_
