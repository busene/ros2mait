// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from objectpose_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

#ifndef OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__TRAITS_HPP_
#define OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "objectpose_msgs/msg/detail/object_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace objectpose_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: objectname
  {
    out << "objectname: ";
    rosidl_generator_traits::value_to_yaml(msg.objectname, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: qx
  {
    out << "qx: ";
    rosidl_generator_traits::value_to_yaml(msg.qx, out);
    out << ", ";
  }

  // member: qy
  {
    out << "qy: ";
    rosidl_generator_traits::value_to_yaml(msg.qy, out);
    out << ", ";
  }

  // member: qz
  {
    out << "qz: ";
    rosidl_generator_traits::value_to_yaml(msg.qz, out);
    out << ", ";
  }

  // member: qw
  {
    out << "qw: ";
    rosidl_generator_traits::value_to_yaml(msg.qw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: objectname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "objectname: ";
    rosidl_generator_traits::value_to_yaml(msg.objectname, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: qx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qx: ";
    rosidl_generator_traits::value_to_yaml(msg.qx, out);
    out << "\n";
  }

  // member: qy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qy: ";
    rosidl_generator_traits::value_to_yaml(msg.qy, out);
    out << "\n";
  }

  // member: qz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qz: ";
    rosidl_generator_traits::value_to_yaml(msg.qz, out);
    out << "\n";
  }

  // member: qw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qw: ";
    rosidl_generator_traits::value_to_yaml(msg.qw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectPose & msg, bool use_flow_style = false)
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

}  // namespace objectpose_msgs

namespace rosidl_generator_traits
{

[[deprecated("use objectpose_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const objectpose_msgs::msg::ObjectPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  objectpose_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use objectpose_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const objectpose_msgs::msg::ObjectPose & msg)
{
  return objectpose_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<objectpose_msgs::msg::ObjectPose>()
{
  return "objectpose_msgs::msg::ObjectPose";
}

template<>
inline const char * name<objectpose_msgs::msg::ObjectPose>()
{
  return "objectpose_msgs/msg/ObjectPose";
}

template<>
struct has_fixed_size<objectpose_msgs::msg::ObjectPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<objectpose_msgs::msg::ObjectPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<objectpose_msgs::msg::ObjectPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__TRAITS_HPP_
