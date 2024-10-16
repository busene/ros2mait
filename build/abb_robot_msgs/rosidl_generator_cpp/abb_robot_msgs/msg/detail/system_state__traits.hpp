// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_robot_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__TRAITS_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_robot_msgs/msg/detail/system_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'rapid_tasks'
#include "abb_robot_msgs/msg/detail/rapid_task_state__traits.hpp"
// Member 'mechanical_units'
#include "abb_robot_msgs/msg/detail/mechanical_unit_state__traits.hpp"

namespace abb_robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: motors_on
  {
    out << "motors_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motors_on, out);
    out << ", ";
  }

  // member: auto_mode
  {
    out << "auto_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mode, out);
    out << ", ";
  }

  // member: rapid_running
  {
    out << "rapid_running: ";
    rosidl_generator_traits::value_to_yaml(msg.rapid_running, out);
    out << ", ";
  }

  // member: rapid_tasks
  {
    if (msg.rapid_tasks.size() == 0) {
      out << "rapid_tasks: []";
    } else {
      out << "rapid_tasks: [";
      size_t pending_items = msg.rapid_tasks.size();
      for (auto item : msg.rapid_tasks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mechanical_units
  {
    if (msg.mechanical_units.size() == 0) {
      out << "mechanical_units: []";
    } else {
      out << "mechanical_units: [";
      size_t pending_items = msg.mechanical_units.size();
      for (auto item : msg.mechanical_units) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: motors_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motors_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motors_on, out);
    out << "\n";
  }

  // member: auto_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mode, out);
    out << "\n";
  }

  // member: rapid_running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rapid_running: ";
    rosidl_generator_traits::value_to_yaml(msg.rapid_running, out);
    out << "\n";
  }

  // member: rapid_tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rapid_tasks.size() == 0) {
      out << "rapid_tasks: []\n";
    } else {
      out << "rapid_tasks:\n";
      for (auto item : msg.rapid_tasks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: mechanical_units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mechanical_units.size() == 0) {
      out << "mechanical_units: []\n";
    } else {
      out << "mechanical_units:\n";
      for (auto item : msg.mechanical_units) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemState & msg, bool use_flow_style = false)
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
  const abb_robot_msgs::msg::SystemState & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_robot_msgs::msg::SystemState & msg)
{
  return abb_robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_robot_msgs::msg::SystemState>()
{
  return "abb_robot_msgs::msg::SystemState";
}

template<>
inline const char * name<abb_robot_msgs::msg::SystemState>()
{
  return "abb_robot_msgs/msg/SystemState";
}

template<>
struct has_fixed_size<abb_robot_msgs::msg::SystemState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_robot_msgs::msg::SystemState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_robot_msgs::msg::SystemState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__TRAITS_HPP_
