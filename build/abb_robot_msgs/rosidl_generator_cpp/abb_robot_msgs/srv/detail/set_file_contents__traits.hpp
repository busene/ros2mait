// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abb_robot_msgs:srv/SetFileContents.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__SET_FILE_CONTENTS__TRAITS_HPP_
#define ABB_ROBOT_MSGS__SRV__DETAIL__SET_FILE_CONTENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abb_robot_msgs/srv/detail/set_file_contents__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abb_robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetFileContents_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filename
  {
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << ", ";
  }

  // member: contents
  {
    out << "contents: ";
    rosidl_generator_traits::value_to_yaml(msg.contents, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetFileContents_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << "\n";
  }

  // member: contents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contents: ";
    rosidl_generator_traits::value_to_yaml(msg.contents, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetFileContents_Request & msg, bool use_flow_style = false)
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

}  // namespace abb_robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_robot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_robot_msgs::srv::SetFileContents_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const abb_robot_msgs::srv::SetFileContents_Request & msg)
{
  return abb_robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<abb_robot_msgs::srv::SetFileContents_Request>()
{
  return "abb_robot_msgs::srv::SetFileContents_Request";
}

template<>
inline const char * name<abb_robot_msgs::srv::SetFileContents_Request>()
{
  return "abb_robot_msgs/srv/SetFileContents_Request";
}

template<>
struct has_fixed_size<abb_robot_msgs::srv::SetFileContents_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_robot_msgs::srv::SetFileContents_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_robot_msgs::srv::SetFileContents_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace abb_robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetFileContents_Response & msg,
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
  const SetFileContents_Response & msg,
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

inline std::string to_yaml(const SetFileContents_Response & msg, bool use_flow_style = false)
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

}  // namespace abb_robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use abb_robot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abb_robot_msgs::srv::SetFileContents_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  abb_robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abb_robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const abb_robot_msgs::srv::SetFileContents_Response & msg)
{
  return abb_robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<abb_robot_msgs::srv::SetFileContents_Response>()
{
  return "abb_robot_msgs::srv::SetFileContents_Response";
}

template<>
inline const char * name<abb_robot_msgs::srv::SetFileContents_Response>()
{
  return "abb_robot_msgs/srv/SetFileContents_Response";
}

template<>
struct has_fixed_size<abb_robot_msgs::srv::SetFileContents_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abb_robot_msgs::srv::SetFileContents_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abb_robot_msgs::srv::SetFileContents_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<abb_robot_msgs::srv::SetFileContents>()
{
  return "abb_robot_msgs::srv::SetFileContents";
}

template<>
inline const char * name<abb_robot_msgs::srv::SetFileContents>()
{
  return "abb_robot_msgs/srv/SetFileContents";
}

template<>
struct has_fixed_size<abb_robot_msgs::srv::SetFileContents>
  : std::integral_constant<
    bool,
    has_fixed_size<abb_robot_msgs::srv::SetFileContents_Request>::value &&
    has_fixed_size<abb_robot_msgs::srv::SetFileContents_Response>::value
  >
{
};

template<>
struct has_bounded_size<abb_robot_msgs::srv::SetFileContents>
  : std::integral_constant<
    bool,
    has_bounded_size<abb_robot_msgs::srv::SetFileContents_Request>::value &&
    has_bounded_size<abb_robot_msgs::srv::SetFileContents_Response>::value
  >
{
};

template<>
struct is_service<abb_robot_msgs::srv::SetFileContents>
  : std::true_type
{
};

template<>
struct is_service_request<abb_robot_msgs::srv::SetFileContents_Request>
  : std::true_type
{
};

template<>
struct is_service_response<abb_robot_msgs::srv::SetFileContents_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__SET_FILE_CONTENTS__TRAITS_HPP_
