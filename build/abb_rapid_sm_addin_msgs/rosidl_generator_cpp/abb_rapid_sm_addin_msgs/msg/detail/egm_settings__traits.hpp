// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__TRAITS_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'setup_uc'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__traits.hpp"
// Member 'activate'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__traits.hpp"
// Member 'run'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__traits.hpp"
// Member 'stop'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__traits.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EGMSettings & msg,
  std::ostream & out)
{
  out << "{";
  // member: allow_egm_motions
  {
    out << "allow_egm_motions: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_egm_motions, out);
    out << ", ";
  }

  // member: use_presync
  {
    out << "use_presync: ";
    rosidl_generator_traits::value_to_yaml(msg.use_presync, out);
    out << ", ";
  }

  // member: setup_uc
  {
    out << "setup_uc: ";
    to_flow_style_yaml(msg.setup_uc, out);
    out << ", ";
  }

  // member: activate
  {
    out << "activate: ";
    to_flow_style_yaml(msg.activate, out);
    out << ", ";
  }

  // member: run
  {
    out << "run: ";
    to_flow_style_yaml(msg.run, out);
    out << ", ";
  }

  // member: stop
  {
    out << "stop: ";
    to_flow_style_yaml(msg.stop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EGMSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: allow_egm_motions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_egm_motions: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_egm_motions, out);
    out << "\n";
  }

  // member: use_presync
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_presync: ";
    rosidl_generator_traits::value_to_yaml(msg.use_presync, out);
    out << "\n";
  }

  // member: setup_uc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "setup_uc:\n";
    to_block_style_yaml(msg.setup_uc, out, indentation + 2);
  }

  // member: activate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activate:\n";
    to_block_style_yaml(msg.activate, out, indentation + 2);
  }

  // member: run
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run:\n";
    to_block_style_yaml(msg.run, out, indentation + 2);
  }

  // member: stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop:\n";
    to_block_style_yaml(msg.stop, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EGMSettings & msg, bool use_flow_style = false)
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
  const abb_rapid_sm_addin_msgs::msg::EGMSettings & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::msg::EGMSettings & msg)
{
  return abb_rapid_sm_addin_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::msg::EGMSettings>()
{
  return "abb_rapid_sm_addin_msgs::msg::EGMSettings";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::msg::EGMSettings>()
{
  return "abb_rapid_sm_addin_msgs/msg/EGMSettings";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::msg::EGMSettings>
  : std::integral_constant<bool, has_fixed_size<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings>::value && has_fixed_size<abb_rapid_sm_addin_msgs::msg::EGMRunSettings>::value && has_fixed_size<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings>::value && has_fixed_size<abb_rapid_sm_addin_msgs::msg::EGMStopSettings>::value> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::msg::EGMSettings>
  : std::integral_constant<bool, has_bounded_size<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings>::value && has_bounded_size<abb_rapid_sm_addin_msgs::msg::EGMRunSettings>::value && has_bounded_size<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings>::value && has_bounded_size<abb_rapid_sm_addin_msgs::msg::EGMStopSettings>::value> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::msg::EGMSettings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__TRAITS_HPP_
