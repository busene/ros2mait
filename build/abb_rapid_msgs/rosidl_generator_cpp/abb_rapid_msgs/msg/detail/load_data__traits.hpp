// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_msgs:msg/LoadData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__TRAITS_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_msgs/msg/detail/load_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cog'
#include "abb_rapid_msgs/msg/detail/pos__traits.hpp"
// Member 'aom'
#include "abb_rapid_msgs/msg/detail/orient__traits.hpp"

namespace abb_rapid_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoadData & msg,
  std::ostream & out)
{
  out << "{";
  // member: mass
  {
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << ", ";
  }

  // member: cog
  {
    out << "cog: ";
    to_flow_style_yaml(msg.cog, out);
    out << ", ";
  }

  // member: aom
  {
    out << "aom: ";
    to_flow_style_yaml(msg.aom, out);
    out << ", ";
  }

  // member: ix
  {
    out << "ix: ";
    rosidl_generator_traits::value_to_yaml(msg.ix, out);
    out << ", ";
  }

  // member: iy
  {
    out << "iy: ";
    rosidl_generator_traits::value_to_yaml(msg.iy, out);
    out << ", ";
  }

  // member: iz
  {
    out << "iz: ";
    rosidl_generator_traits::value_to_yaml(msg.iz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << "\n";
  }

  // member: cog
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cog:\n";
    to_block_style_yaml(msg.cog, out, indentation + 2);
  }

  // member: aom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aom:\n";
    to_block_style_yaml(msg.aom, out, indentation + 2);
  }

  // member: ix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ix: ";
    rosidl_generator_traits::value_to_yaml(msg.ix, out);
    out << "\n";
  }

  // member: iy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iy: ";
    rosidl_generator_traits::value_to_yaml(msg.iy, out);
    out << "\n";
  }

  // member: iz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iz: ";
    rosidl_generator_traits::value_to_yaml(msg.iz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadData & msg, bool use_flow_style = false)
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
  const abb_rapid_msgs::msg::LoadData & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_msgs::msg::LoadData & msg)
{
  return abb_rapid_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_msgs::msg::LoadData>()
{
  return "abb_rapid_msgs::msg::LoadData";
}

template<>
inline const char * name<abb_rapid_msgs::msg::LoadData>()
{
  return "abb_rapid_msgs/msg/LoadData";
}

template<>
struct has_fixed_size<abb_rapid_msgs::msg::LoadData>
  : std::integral_constant<bool, has_fixed_size<abb_rapid_msgs::msg::Orient>::value && has_fixed_size<abb_rapid_msgs::msg::Pos>::value> {};

template<>
struct has_bounded_size<abb_rapid_msgs::msg::LoadData>
  : std::integral_constant<bool, has_bounded_size<abb_rapid_msgs::msg::Orient>::value && has_bounded_size<abb_rapid_msgs::msg::Pos>::value> {};

template<>
struct is_message<abb_rapid_msgs::msg::LoadData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__TRAITS_HPP_
