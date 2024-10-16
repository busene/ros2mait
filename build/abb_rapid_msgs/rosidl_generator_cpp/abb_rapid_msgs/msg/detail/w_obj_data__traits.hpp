// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_msgs:msg/WObjData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__TRAITS_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_msgs/msg/detail/w_obj_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'uframe'
// Member 'oframe'
#include "abb_rapid_msgs/msg/detail/pose__traits.hpp"

namespace abb_rapid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WObjData & msg,
  std::ostream & out)
{
  out << "{";
  // member: robhold
  {
    out << "robhold: ";
    rosidl_generator_traits::value_to_yaml(msg.robhold, out);
    out << ", ";
  }

  // member: ufprog
  {
    out << "ufprog: ";
    rosidl_generator_traits::value_to_yaml(msg.ufprog, out);
    out << ", ";
  }

  // member: ufmec
  {
    out << "ufmec: ";
    rosidl_generator_traits::value_to_yaml(msg.ufmec, out);
    out << ", ";
  }

  // member: uframe
  {
    out << "uframe: ";
    to_flow_style_yaml(msg.uframe, out);
    out << ", ";
  }

  // member: oframe
  {
    out << "oframe: ";
    to_flow_style_yaml(msg.oframe, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WObjData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robhold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robhold: ";
    rosidl_generator_traits::value_to_yaml(msg.robhold, out);
    out << "\n";
  }

  // member: ufprog
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ufprog: ";
    rosidl_generator_traits::value_to_yaml(msg.ufprog, out);
    out << "\n";
  }

  // member: ufmec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ufmec: ";
    rosidl_generator_traits::value_to_yaml(msg.ufmec, out);
    out << "\n";
  }

  // member: uframe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uframe:\n";
    to_block_style_yaml(msg.uframe, out, indentation + 2);
  }

  // member: oframe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oframe:\n";
    to_block_style_yaml(msg.oframe, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WObjData & msg, bool use_flow_style = false)
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

}  // namespace abb_rapid_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_rapid_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_rapid_msgs::msg::WObjData & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_msgs::msg::WObjData & msg)
{
  return abb_rapid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_msgs::msg::WObjData>()
{
  return "abb_rapid_msgs::msg::WObjData";
}

template<>
inline const char * name<abb_rapid_msgs::msg::WObjData>()
{
  return "abb_rapid_msgs/msg/WObjData";
}

template<>
struct has_fixed_size<abb_rapid_msgs::msg::WObjData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_rapid_msgs::msg::WObjData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_rapid_msgs::msg::WObjData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__TRAITS_HPP_
