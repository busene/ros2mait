// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSetupSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__TRAITS_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EGMSetupSettings & msg,
  std::ostream & out)
{
  out << "{";
  // member: use_filtering
  {
    out << "use_filtering: ";
    rosidl_generator_traits::value_to_yaml(msg.use_filtering, out);
    out << ", ";
  }

  // member: comm_timeout
  {
    out << "comm_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.comm_timeout, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EGMSetupSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: use_filtering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_filtering: ";
    rosidl_generator_traits::value_to_yaml(msg.use_filtering, out);
    out << "\n";
  }

  // member: comm_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comm_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.comm_timeout, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EGMSetupSettings & msg, bool use_flow_style = false)
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
  const abb_rapid_sm_addin_msgs::msg::EGMSetupSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::msg::EGMSetupSettings & msg)
{
  return abb_rapid_sm_addin_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings>()
{
  return "abb_rapid_sm_addin_msgs::msg::EGMSetupSettings";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings>()
{
  return "abb_rapid_sm_addin_msgs/msg/EGMSetupSettings";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__TRAITS_HPP_
