// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2srrc_data:msg/Specs.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__SPECS__TRAITS_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__SPECS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2srrc_data/msg/detail/specs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2srrc_data
{

namespace msg
{

inline void to_flow_style_yaml(
  const Specs & msg,
  std::ostream & out)
{
  out << "{";
  // member: ee_max
  {
    out << "ee_max: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_max, out);
    out << ", ";
  }

  // member: ee_min
  {
    out << "ee_min: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_min, out);
    out << ", ";
  }

  // member: ee_vector
  {
    if (msg.ee_vector.size() == 0) {
      out << "ee_vector: []";
    } else {
      out << "ee_vector: [";
      size_t pending_items = msg.ee_vector.size();
      for (auto item : msg.ee_vector) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_max
  {
    if (msg.robot_max.size() == 0) {
      out << "robot_max: []";
    } else {
      out << "robot_max: [";
      size_t pending_items = msg.robot_max.size();
      for (auto item : msg.robot_max) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_min
  {
    if (msg.robot_min.size() == 0) {
      out << "robot_min: []";
    } else {
      out << "robot_min: [";
      size_t pending_items = msg.robot_min.size();
      for (auto item : msg.robot_min) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Specs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ee_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_max: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_max, out);
    out << "\n";
  }

  // member: ee_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_min: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_min, out);
    out << "\n";
  }

  // member: ee_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ee_vector.size() == 0) {
      out << "ee_vector: []\n";
    } else {
      out << "ee_vector:\n";
      for (auto item : msg.ee_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_max.size() == 0) {
      out << "robot_max: []\n";
    } else {
      out << "robot_max:\n";
      for (auto item : msg.robot_max) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_min.size() == 0) {
      out << "robot_min: []\n";
    } else {
      out << "robot_min:\n";
      for (auto item : msg.robot_min) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Specs & msg, bool use_flow_style = false)
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
  const ros2srrc_data::msg::Specs & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::msg::Specs & msg)
{
  return ros2srrc_data::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::msg::Specs>()
{
  return "ros2srrc_data::msg::Specs";
}

template<>
inline const char * name<ros2srrc_data::msg::Specs>()
{
  return "ros2srrc_data/msg/Specs";
}

template<>
struct has_fixed_size<ros2srrc_data::msg::Specs>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2srrc_data::msg::Specs>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2srrc_data::msg::Specs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2SRRC_DATA__MSG__DETAIL__SPECS__TRAITS_HPP_
