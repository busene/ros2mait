// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_egm_msgs:msg/EGMState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__TRAITS_HPP_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_egm_msgs/msg/detail/egm_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'egm_channels'
#include "abb_egm_msgs/msg/detail/egm_channel_state__traits.hpp"

namespace abb_egm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EGMState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: egm_channels
  {
    if (msg.egm_channels.size() == 0) {
      out << "egm_channels: []";
    } else {
      out << "egm_channels: [";
      size_t pending_items = msg.egm_channels.size();
      for (auto item : msg.egm_channels) {
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
  const EGMState & msg,
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

  // member: egm_channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.egm_channels.size() == 0) {
      out << "egm_channels: []\n";
    } else {
      out << "egm_channels:\n";
      for (auto item : msg.egm_channels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EGMState & msg, bool use_flow_style = false)
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

}  // namespace abb_egm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_egm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_egm_msgs::msg::EGMState & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_egm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_egm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_egm_msgs::msg::EGMState & msg)
{
  return abb_egm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_egm_msgs::msg::EGMState>()
{
  return "abb_egm_msgs::msg::EGMState";
}

template<>
inline const char * name<abb_egm_msgs::msg::EGMState>()
{
  return "abb_egm_msgs/msg/EGMState";
}

template<>
struct has_fixed_size<abb_egm_msgs::msg::EGMState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_egm_msgs::msg::EGMState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_egm_msgs::msg::EGMState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__TRAITS_HPP_
