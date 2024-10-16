// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_sm_addin_msgs:srv/SetEGMSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_EGM_SETTINGS__TRAITS_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_EGM_SETTINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_sm_addin_msgs/srv/detail/set_egm_settings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'settings'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__traits.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetEGMSettings_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: task
  {
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
    out << ", ";
  }

  // member: settings
  {
    out << "settings: ";
    to_flow_style_yaml(msg.settings, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetEGMSettings_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
    out << "\n";
  }

  // member: settings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "settings:\n";
    to_block_style_yaml(msg.settings, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetEGMSettings_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_rapid_sm_addin_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request & msg)
{
  return abb_rapid_sm_addin_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>()
{
  return "abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>()
{
  return "abb_rapid_sm_addin_msgs/srv/SetEGMSettings_Request";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetEGMSettings_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result_code
  {
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetEGMSettings_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetEGMSettings_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_rapid_sm_addin_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response & msg)
{
  return abb_rapid_sm_addin_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>()
{
  return "abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>()
{
  return "abb_rapid_sm_addin_msgs/srv/SetEGMSettings_Response";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::srv::SetEGMSettings>()
{
  return "abb_rapid_sm_addin_msgs::srv::SetEGMSettings";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::srv::SetEGMSettings>()
{
  return "abb_rapid_sm_addin_msgs/srv/SetEGMSettings";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings>
  : std::integral_constant<
    bool,
    has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>::value &&
    has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>::value
  >
{
};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings>
  : std::integral_constant<
    bool,
    has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>::value &&
    has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>::value
  >
{
};

template<>
struct is_service<abb_rapid_sm_addin_msgs::srv::SetEGMSettings>
  : std::true_type
{
};

template<>
struct is_service_request<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>
  : std::true_type
{
};

template<>
struct is_service_response<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_EGM_SETTINGS__TRAITS_HPP_
