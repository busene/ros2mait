// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2srrc_data:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__ACTION__TRAITS_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2srrc_data/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'movej'
#include "ros2srrc_data/msg/detail/joints__traits.hpp"
// Member 'mover'
#include "ros2srrc_data/msg/detail/joint__traits.hpp"
// Member 'movel'
// Member 'movexyz'
#include "ros2srrc_data/msg/detail/xyz__traits.hpp"
// Member 'movexyzw'
// Member 'moverp'
#include "ros2srrc_data/msg/detail/xyzypr__traits.hpp"
// Member 'moveypr'
// Member 'moverot'
#include "ros2srrc_data/msg/detail/ypr__traits.hpp"
// Member 'attach'
// Member 'detach'
#include "ros2srrc_data/msg/detail/linkattacher__traits.hpp"

namespace ros2srrc_data
{

namespace msg
{

inline void to_flow_style_yaml(
  const Action & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: movej
  {
    out << "movej: ";
    to_flow_style_yaml(msg.movej, out);
    out << ", ";
  }

  // member: mover
  {
    out << "mover: ";
    to_flow_style_yaml(msg.mover, out);
    out << ", ";
  }

  // member: movel
  {
    out << "movel: ";
    to_flow_style_yaml(msg.movel, out);
    out << ", ";
  }

  // member: movexyzw
  {
    out << "movexyzw: ";
    to_flow_style_yaml(msg.movexyzw, out);
    out << ", ";
  }

  // member: movexyz
  {
    out << "movexyz: ";
    to_flow_style_yaml(msg.movexyz, out);
    out << ", ";
  }

  // member: moveypr
  {
    out << "moveypr: ";
    to_flow_style_yaml(msg.moveypr, out);
    out << ", ";
  }

  // member: moverot
  {
    out << "moverot: ";
    to_flow_style_yaml(msg.moverot, out);
    out << ", ";
  }

  // member: moverp
  {
    out << "moverp: ";
    to_flow_style_yaml(msg.moverp, out);
    out << ", ";
  }

  // member: moveg
  {
    out << "moveg: ";
    rosidl_generator_traits::value_to_yaml(msg.moveg, out);
    out << ", ";
  }

  // member: attach
  {
    out << "attach: ";
    to_flow_style_yaml(msg.attach, out);
    out << ", ";
  }

  // member: detach
  {
    out << "detach: ";
    to_flow_style_yaml(msg.detach, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: movej
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movej:\n";
    to_block_style_yaml(msg.movej, out, indentation + 2);
  }

  // member: mover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mover:\n";
    to_block_style_yaml(msg.mover, out, indentation + 2);
  }

  // member: movel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movel:\n";
    to_block_style_yaml(msg.movel, out, indentation + 2);
  }

  // member: movexyzw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movexyzw:\n";
    to_block_style_yaml(msg.movexyzw, out, indentation + 2);
  }

  // member: movexyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movexyz:\n";
    to_block_style_yaml(msg.movexyz, out, indentation + 2);
  }

  // member: moveypr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moveypr:\n";
    to_block_style_yaml(msg.moveypr, out, indentation + 2);
  }

  // member: moverot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moverot:\n";
    to_block_style_yaml(msg.moverot, out, indentation + 2);
  }

  // member: moverp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moverp:\n";
    to_block_style_yaml(msg.moverp, out, indentation + 2);
  }

  // member: moveg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moveg: ";
    rosidl_generator_traits::value_to_yaml(msg.moveg, out);
    out << "\n";
  }

  // member: attach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attach:\n";
    to_block_style_yaml(msg.attach, out, indentation + 2);
  }

  // member: detach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detach:\n";
    to_block_style_yaml(msg.detach, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action & msg, bool use_flow_style = false)
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
  const ros2srrc_data::msg::Action & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::msg::Action & msg)
{
  return ros2srrc_data::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::msg::Action>()
{
  return "ros2srrc_data::msg::Action";
}

template<>
inline const char * name<ros2srrc_data::msg::Action>()
{
  return "ros2srrc_data/msg/Action";
}

template<>
struct has_fixed_size<ros2srrc_data::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2srrc_data::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2srrc_data::msg::Action>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2SRRC_DATA__MSG__DETAIL__ACTION__TRAITS_HPP_
