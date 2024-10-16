// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/RuntimeState.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__RUNTIME_STATE__TRAITS_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__RUNTIME_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_sm_addin_msgs/msg/detail/runtime_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'state_machines'
#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__traits.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RuntimeState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: state_machines
  {
    if (msg.state_machines.size() == 0) {
      out << "state_machines: []";
    } else {
      out << "state_machines: [";
      size_t pending_items = msg.state_machines.size();
      for (auto item : msg.state_machines) {
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
  const RuntimeState & msg,
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

  // member: state_machines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_machines.size() == 0) {
      out << "state_machines: []\n";
    } else {
      out << "state_machines:\n";
      for (auto item : msg.state_machines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RuntimeState & msg, bool use_flow_style = false)
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

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_rapid_sm_addin_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_rapid_sm_addin_msgs::msg::RuntimeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::msg::RuntimeState & msg)
{
  return abb_rapid_sm_addin_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::msg::RuntimeState>()
{
  return "abb_rapid_sm_addin_msgs::msg::RuntimeState";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::msg::RuntimeState>()
{
  return "abb_rapid_sm_addin_msgs/msg/RuntimeState";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::msg::RuntimeState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::msg::RuntimeState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::msg::RuntimeState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__RUNTIME_STATE__TRAITS_HPP_
