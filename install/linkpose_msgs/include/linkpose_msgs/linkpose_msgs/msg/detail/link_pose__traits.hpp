// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from linkpose_msgs:msg/LinkPose.idl
// generated code does not contain a copyright notice

#ifndef LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__TRAITS_HPP_
#define LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "linkpose_msgs/msg/detail/link_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace linkpose_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LinkPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: modelname
  {
    out << "modelname: ";
    rosidl_generator_traits::value_to_yaml(msg.modelname, out);
    out << ", ";
  }

  // member: linkname
  {
    out << "linkname: ";
    rosidl_generator_traits::value_to_yaml(msg.linkname, out);
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
  const LinkPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: modelname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modelname: ";
    rosidl_generator_traits::value_to_yaml(msg.modelname, out);
    out << "\n";
  }

  // member: linkname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linkname: ";
    rosidl_generator_traits::value_to_yaml(msg.linkname, out);
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

inline std::string to_yaml(const LinkPose & msg, bool use_flow_style = false)
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

}  // namespace linkpose_msgs

namespace rosidl_generator_traits
{

[[deprecated("use linkpose_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const linkpose_msgs::msg::LinkPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  linkpose_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use linkpose_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const linkpose_msgs::msg::LinkPose & msg)
{
  return linkpose_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<linkpose_msgs::msg::LinkPose>()
{
  return "linkpose_msgs::msg::LinkPose";
}

template<>
inline const char * name<linkpose_msgs::msg::LinkPose>()
{
  return "linkpose_msgs/msg/LinkPose";
}

template<>
struct has_fixed_size<linkpose_msgs::msg::LinkPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<linkpose_msgs::msg::LinkPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<linkpose_msgs::msg::LinkPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__TRAITS_HPP_
