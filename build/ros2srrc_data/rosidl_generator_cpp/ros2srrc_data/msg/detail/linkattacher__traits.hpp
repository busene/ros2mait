// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2srrc_data:msg/Linkattacher.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__TRAITS_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2srrc_data/msg/detail/linkattacher__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2srrc_data
{

namespace msg
{

inline void to_flow_style_yaml(
  const Linkattacher & msg,
  std::ostream & out)
{
  out << "{";
  // member: model1_name
  {
    out << "model1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model1_name, out);
    out << ", ";
  }

  // member: link1_name
  {
    out << "link1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link1_name, out);
    out << ", ";
  }

  // member: model2_name
  {
    out << "model2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model2_name, out);
    out << ", ";
  }

  // member: link2_name
  {
    out << "link2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link2_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Linkattacher & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model1_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model1_name, out);
    out << "\n";
  }

  // member: link1_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link1_name, out);
    out << "\n";
  }

  // member: model2_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model2_name, out);
    out << "\n";
  }

  // member: link2_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link2_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Linkattacher & msg, bool use_flow_style = false)
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
  const ros2srrc_data::msg::Linkattacher & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::msg::Linkattacher & msg)
{
  return ros2srrc_data::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::msg::Linkattacher>()
{
  return "ros2srrc_data::msg::Linkattacher";
}

template<>
inline const char * name<ros2srrc_data::msg::Linkattacher>()
{
  return "ros2srrc_data/msg/Linkattacher";
}

template<>
struct has_fixed_size<ros2srrc_data::msg::Linkattacher>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2srrc_data::msg::Linkattacher>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2srrc_data::msg::Linkattacher>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__TRAITS_HPP_
