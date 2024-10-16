// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_robotiqgripper:srv/RobotiqGripper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__TRAITS_HPP_
#define ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_robotiqgripper/srv/detail/robotiq_gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_robotiqgripper
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotiqGripper_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotiqGripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotiqGripper_Request & msg, bool use_flow_style = false)
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

}  // namespace ros2_robotiqgripper

namespace rosidl_generator_traits
{

[[deprecated("use ros2_robotiqgripper::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_robotiqgripper::srv::RobotiqGripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_robotiqgripper::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_robotiqgripper::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_robotiqgripper::srv::RobotiqGripper_Request & msg)
{
  return ros2_robotiqgripper::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_robotiqgripper::srv::RobotiqGripper_Request>()
{
  return "ros2_robotiqgripper::srv::RobotiqGripper_Request";
}

template<>
inline const char * name<ros2_robotiqgripper::srv::RobotiqGripper_Request>()
{
  return "ros2_robotiqgripper/srv/RobotiqGripper_Request";
}

template<>
struct has_fixed_size<ros2_robotiqgripper::srv::RobotiqGripper_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_robotiqgripper::srv::RobotiqGripper_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_robotiqgripper::srv::RobotiqGripper_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros2_robotiqgripper
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotiqGripper_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: average
  {
    out << "average: ";
    rosidl_generator_traits::value_to_yaml(msg.average, out);
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
  const RobotiqGripper_Response & msg,
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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: average
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average: ";
    rosidl_generator_traits::value_to_yaml(msg.average, out);
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

inline std::string to_yaml(const RobotiqGripper_Response & msg, bool use_flow_style = false)
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

}  // namespace ros2_robotiqgripper

namespace rosidl_generator_traits
{

[[deprecated("use ros2_robotiqgripper::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_robotiqgripper::srv::RobotiqGripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_robotiqgripper::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_robotiqgripper::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_robotiqgripper::srv::RobotiqGripper_Response & msg)
{
  return ros2_robotiqgripper::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_robotiqgripper::srv::RobotiqGripper_Response>()
{
  return "ros2_robotiqgripper::srv::RobotiqGripper_Response";
}

template<>
inline const char * name<ros2_robotiqgripper::srv::RobotiqGripper_Response>()
{
  return "ros2_robotiqgripper/srv/RobotiqGripper_Response";
}

template<>
struct has_fixed_size<ros2_robotiqgripper::srv::RobotiqGripper_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_robotiqgripper::srv::RobotiqGripper_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_robotiqgripper::srv::RobotiqGripper_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_robotiqgripper::srv::RobotiqGripper>()
{
  return "ros2_robotiqgripper::srv::RobotiqGripper";
}

template<>
inline const char * name<ros2_robotiqgripper::srv::RobotiqGripper>()
{
  return "ros2_robotiqgripper/srv/RobotiqGripper";
}

template<>
struct has_fixed_size<ros2_robotiqgripper::srv::RobotiqGripper>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_robotiqgripper::srv::RobotiqGripper_Request>::value &&
    has_fixed_size<ros2_robotiqgripper::srv::RobotiqGripper_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_robotiqgripper::srv::RobotiqGripper>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_robotiqgripper::srv::RobotiqGripper_Request>::value &&
    has_bounded_size<ros2_robotiqgripper::srv::RobotiqGripper_Response>::value
  >
{
};

template<>
struct is_service<ros2_robotiqgripper::srv::RobotiqGripper>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_robotiqgripper::srv::RobotiqGripper_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_robotiqgripper::srv::RobotiqGripper_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__TRAITS_HPP_
