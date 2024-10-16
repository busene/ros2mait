// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_rapid_sm_addin_msgs:srv/SetRAPIDRoutine.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_RAPID_ROUTINE__TRAITS_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_RAPID_ROUTINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_rapid_sm_addin_msgs/srv/detail/set_rapid_routine__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetRAPIDRoutine_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: task
  {
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
    out << ", ";
  }

  // member: routine
  {
    out << "routine: ";
    rosidl_generator_traits::value_to_yaml(msg.routine, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetRAPIDRoutine_Request & msg,
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

  // member: routine
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "routine: ";
    rosidl_generator_traits::value_to_yaml(msg.routine, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetRAPIDRoutine_Request & msg, bool use_flow_style = false)
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
  const abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request & msg)
{
  return abb_rapid_sm_addin_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request>()
{
  return "abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request>()
{
  return "abb_rapid_sm_addin_msgs/srv/SetRAPIDRoutine_Request";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetRAPIDRoutine_Response & msg,
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
  const SetRAPIDRoutine_Response & msg,
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

inline std::string to_yaml(const SetRAPIDRoutine_Response & msg, bool use_flow_style = false)
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
  const abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_rapid_sm_addin_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_rapid_sm_addin_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response & msg)
{
  return abb_rapid_sm_addin_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response>()
{
  return "abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response>()
{
  return "abb_rapid_sm_addin_msgs/srv/SetRAPIDRoutine_Response";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine>()
{
  return "abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine";
}

template<>
inline const char * name<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine>()
{
  return "abb_rapid_sm_addin_msgs/srv/SetRAPIDRoutine";
}

template<>
struct has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine>
  : std::integral_constant<
    bool,
    has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request>::value &&
    has_fixed_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response>::value
  >
{
};

template<>
struct has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine>
  : std::integral_constant<
    bool,
    has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request>::value &&
    has_bounded_size<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response>::value
  >
{
};

template<>
struct is_service<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine>
  : std::true_type
{
};

template<>
struct is_service_request<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request>
  : std::true_type
{
};

template<>
struct is_service_response<abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_RAPID_ROUTINE__TRAITS_HPP_
