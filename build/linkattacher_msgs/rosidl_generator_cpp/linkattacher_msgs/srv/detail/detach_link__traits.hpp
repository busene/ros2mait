// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from linkattacher_msgs:srv/DetachLink.idl
// generated code does not contain a copyright notice

#ifndef LINKATTACHER_MSGS__SRV__DETAIL__DETACH_LINK__TRAITS_HPP_
#define LINKATTACHER_MSGS__SRV__DETAIL__DETACH_LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "linkattacher_msgs/srv/detail/detach_link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace linkattacher_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetachLink_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: model1_name
  {
    out << "model1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model1_name, out);
    out << ", ";
  }

  // member: link1_name
  {
    out << "link1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link1_name, out);
    out << ", ";
  }

  // member: model2_name
  {
    out << "model2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model2_name, out);
    out << ", ";
  }

  // member: link2_name
  {
    out << "link2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link2_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetachLink_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model1_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model1_name, out);
    out << "\n";
  }

  // member: link1_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link1_name, out);
    out << "\n";
  }

  // member: model2_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model2_name, out);
    out << "\n";
  }

  // member: link2_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link2_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetachLink_Request & msg, bool use_flow_style = false)
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

}  // namespace linkattacher_msgs

namespace rosidl_generator_traits
{

[[deprecated("use linkattacher_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const linkattacher_msgs::srv::DetachLink_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  linkattacher_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use linkattacher_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const linkattacher_msgs::srv::DetachLink_Request & msg)
{
  return linkattacher_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<linkattacher_msgs::srv::DetachLink_Request>()
{
  return "linkattacher_msgs::srv::DetachLink_Request";
}

template<>
inline const char * name<linkattacher_msgs::srv::DetachLink_Request>()
{
  return "linkattacher_msgs/srv/DetachLink_Request";
}

template<>
struct has_fixed_size<linkattacher_msgs::srv::DetachLink_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<linkattacher_msgs::srv::DetachLink_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<linkattacher_msgs::srv::DetachLink_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace linkattacher_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetachLink_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const DetachLink_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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

inline std::string to_yaml(const DetachLink_Response & msg, bool use_flow_style = false)
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

}  // namespace linkattacher_msgs

namespace rosidl_generator_traits
{

[[deprecated("use linkattacher_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const linkattacher_msgs::srv::DetachLink_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  linkattacher_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use linkattacher_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const linkattacher_msgs::srv::DetachLink_Response & msg)
{
  return linkattacher_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<linkattacher_msgs::srv::DetachLink_Response>()
{
  return "linkattacher_msgs::srv::DetachLink_Response";
}

template<>
inline const char * name<linkattacher_msgs::srv::DetachLink_Response>()
{
  return "linkattacher_msgs/srv/DetachLink_Response";
}

template<>
struct has_fixed_size<linkattacher_msgs::srv::DetachLink_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<linkattacher_msgs::srv::DetachLink_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<linkattacher_msgs::srv::DetachLink_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<linkattacher_msgs::srv::DetachLink>()
{
  return "linkattacher_msgs::srv::DetachLink";
}

template<>
inline const char * name<linkattacher_msgs::srv::DetachLink>()
{
  return "linkattacher_msgs/srv/DetachLink";
}

template<>
struct has_fixed_size<linkattacher_msgs::srv::DetachLink>
  : std::integral_constant<
    bool,
    has_fixed_size<linkattacher_msgs::srv::DetachLink_Request>::value &&
    has_fixed_size<linkattacher_msgs::srv::DetachLink_Response>::value
  >
{
};

template<>
struct has_bounded_size<linkattacher_msgs::srv::DetachLink>
  : std::integral_constant<
    bool,
    has_bounded_size<linkattacher_msgs::srv::DetachLink_Request>::value &&
    has_bounded_size<linkattacher_msgs::srv::DetachLink_Response>::value
  >
{
};

template<>
struct is_service<linkattacher_msgs::srv::DetachLink>
  : std::true_type
{
};

template<>
struct is_service_request<linkattacher_msgs::srv::DetachLink_Request>
  : std::true_type
{
};

template<>
struct is_service_response<linkattacher_msgs::srv::DetachLink_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LINKATTACHER_MSGS__SRV__DETAIL__DETACH_LINK__TRAITS_HPP_
