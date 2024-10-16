// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_robot_msgs:msg/RAPIDTaskState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__TRAITS_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_robot_msgs/msg/detail/rapid_task_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RAPIDTaskState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: activated
  {
    out << "activated: ";
    rosidl_generator_traits::value_to_yaml(msg.activated, out);
    out << ", ";
  }

  // member: execution_state
  {
    out << "execution_state: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_state, out);
    out << ", ";
  }

  // member: motion_task
  {
    out << "motion_task: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_task, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RAPIDTaskState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: activated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activated: ";
    rosidl_generator_traits::value_to_yaml(msg.activated, out);
    out << "\n";
  }

  // member: execution_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execution_state: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_state, out);
    out << "\n";
  }

  // member: motion_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_task: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_task, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RAPIDTaskState & msg, bool use_flow_style = false)
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
  const abb_robot_msgs::msg::RAPIDTaskState & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_robot_msgs::msg::RAPIDTaskState & msg)
{
  return abb_robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_robot_msgs::msg::RAPIDTaskState>()
{
  return "abb_robot_msgs::msg::RAPIDTaskState";
}

template<>
inline const char * name<abb_robot_msgs::msg::RAPIDTaskState>()
{
  return "abb_robot_msgs/msg/RAPIDTaskState";
}

template<>
struct has_fixed_size<abb_robot_msgs::msg::RAPIDTaskState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_robot_msgs::msg::RAPIDTaskState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_robot_msgs::msg::RAPIDTaskState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__TRAITS_HPP_
