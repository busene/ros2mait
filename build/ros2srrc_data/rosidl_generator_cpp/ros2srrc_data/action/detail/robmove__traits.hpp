// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2srrc_data:action/Robmove.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__TRAITS_HPP_
#define ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2srrc_data/action/detail/robmove__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2srrc_data
{

namespace action
{

inline void to_flow_style_yaml(
  const Robmove_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: qx
  {
    out << "qx: ";
    rosidl_generator_traits::value_to_yaml(msg.qx, out);
    out << ", ";
  }

  // member: qy
  {
    out << "qy: ";
    rosidl_generator_traits::value_to_yaml(msg.qy, out);
    out << ", ";
  }

  // member: qz
  {
    out << "qz: ";
    rosidl_generator_traits::value_to_yaml(msg.qz, out);
    out << ", ";
  }

  // member: qw
  {
    out << "qw: ";
    rosidl_generator_traits::value_to_yaml(msg.qw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robmove_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: qx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qx: ";
    rosidl_generator_traits::value_to_yaml(msg.qx, out);
    out << "\n";
  }

  // member: qy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qy: ";
    rosidl_generator_traits::value_to_yaml(msg.qy, out);
    out << "\n";
  }

  // member: qz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qz: ";
    rosidl_generator_traits::value_to_yaml(msg.qz, out);
    out << "\n";
  }

  // member: qw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qw: ";
    rosidl_generator_traits::value_to_yaml(msg.qw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robmove_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2srrc_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2srrc_data::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2srrc_data::action::Robmove_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::action::Robmove_Goal & msg)
{
  return ros2srrc_data::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_Goal>()
{
  return "ros2srrc_data::action::Robmove_Goal";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_Goal>()
{
  return "ros2srrc_data/action/Robmove_Goal";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2srrc_data::action::Robmove_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros2srrc_data
{

namespace action
{

inline void to_flow_style_yaml(
  const Robmove_Result & msg,
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
  const Robmove_Result & msg,
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

inline std::string to_yaml(const Robmove_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2srrc_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2srrc_data::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2srrc_data::action::Robmove_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::action::Robmove_Result & msg)
{
  return ros2srrc_data::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_Result>()
{
  return "ros2srrc_data::action::Robmove_Result";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_Result>()
{
  return "ros2srrc_data/action/Robmove_Result";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2srrc_data::action::Robmove_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros2srrc_data
{

namespace action
{

inline void to_flow_style_yaml(
  const Robmove_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robmove_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robmove_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2srrc_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2srrc_data::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2srrc_data::action::Robmove_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::action::Robmove_Feedback & msg)
{
  return ros2srrc_data::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_Feedback>()
{
  return "ros2srrc_data::action::Robmove_Feedback";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_Feedback>()
{
  return "ros2srrc_data/action/Robmove_Feedback";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2srrc_data::action::Robmove_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ros2srrc_data/action/detail/robmove__traits.hpp"

namespace ros2srrc_data
{

namespace action
{

inline void to_flow_style_yaml(
  const Robmove_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robmove_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robmove_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2srrc_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2srrc_data::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2srrc_data::action::Robmove_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::action::Robmove_SendGoal_Request & msg)
{
  return ros2srrc_data::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_SendGoal_Request>()
{
  return "ros2srrc_data::action::Robmove_SendGoal_Request";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_SendGoal_Request>()
{
  return "ros2srrc_data/action/Robmove_SendGoal_Request";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ros2srrc_data::action::Robmove_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ros2srrc_data::action::Robmove_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2srrc_data::action::Robmove_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ros2srrc_data
{

namespace action
{

inline void to_flow_style_yaml(
  const Robmove_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robmove_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robmove_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2srrc_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2srrc_data::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2srrc_data::action::Robmove_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::action::Robmove_SendGoal_Response & msg)
{
  return ros2srrc_data::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_SendGoal_Response>()
{
  return "ros2srrc_data::action::Robmove_SendGoal_Response";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_SendGoal_Response>()
{
  return "ros2srrc_data/action/Robmove_SendGoal_Response";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ros2srrc_data::action::Robmove_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_SendGoal>()
{
  return "ros2srrc_data::action::Robmove_SendGoal";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_SendGoal>()
{
  return "ros2srrc_data/action/Robmove_SendGoal";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2srrc_data::action::Robmove_SendGoal_Request>::value &&
    has_fixed_size<ros2srrc_data::action::Robmove_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2srrc_data::action::Robmove_SendGoal_Request>::value &&
    has_bounded_size<ros2srrc_data::action::Robmove_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ros2srrc_data::action::Robmove_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ros2srrc_data::action::Robmove_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2srrc_data::action::Robmove_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ros2srrc_data
{

namespace action
{

inline void to_flow_style_yaml(
  const Robmove_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robmove_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robmove_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2srrc_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2srrc_data::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2srrc_data::action::Robmove_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::action::Robmove_GetResult_Request & msg)
{
  return ros2srrc_data::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_GetResult_Request>()
{
  return "ros2srrc_data::action::Robmove_GetResult_Request";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_GetResult_Request>()
{
  return "ros2srrc_data/action/Robmove_GetResult_Request";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2srrc_data::action::Robmove_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2srrc_data/action/detail/robmove__traits.hpp"

namespace ros2srrc_data
{

namespace action
{

inline void to_flow_style_yaml(
  const Robmove_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robmove_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robmove_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2srrc_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2srrc_data::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2srrc_data::action::Robmove_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::action::Robmove_GetResult_Response & msg)
{
  return ros2srrc_data::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_GetResult_Response>()
{
  return "ros2srrc_data::action::Robmove_GetResult_Response";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_GetResult_Response>()
{
  return "ros2srrc_data/action/Robmove_GetResult_Response";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ros2srrc_data::action::Robmove_Result>::value> {};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ros2srrc_data::action::Robmove_Result>::value> {};

template<>
struct is_message<ros2srrc_data::action::Robmove_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_GetResult>()
{
  return "ros2srrc_data::action::Robmove_GetResult";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_GetResult>()
{
  return "ros2srrc_data/action/Robmove_GetResult";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2srrc_data::action::Robmove_GetResult_Request>::value &&
    has_fixed_size<ros2srrc_data::action::Robmove_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2srrc_data::action::Robmove_GetResult_Request>::value &&
    has_bounded_size<ros2srrc_data::action::Robmove_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ros2srrc_data::action::Robmove_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ros2srrc_data::action::Robmove_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2srrc_data::action::Robmove_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ros2srrc_data/action/detail/robmove__traits.hpp"

namespace ros2srrc_data
{

namespace action
{

inline void to_flow_style_yaml(
  const Robmove_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robmove_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robmove_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros2srrc_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2srrc_data::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2srrc_data::action::Robmove_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2srrc_data::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2srrc_data::action::to_yaml() instead")]]
inline std::string to_yaml(const ros2srrc_data::action::Robmove_FeedbackMessage & msg)
{
  return ros2srrc_data::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros2srrc_data::action::Robmove_FeedbackMessage>()
{
  return "ros2srrc_data::action::Robmove_FeedbackMessage";
}

template<>
inline const char * name<ros2srrc_data::action::Robmove_FeedbackMessage>()
{
  return "ros2srrc_data/action/Robmove_FeedbackMessage";
}

template<>
struct has_fixed_size<ros2srrc_data::action::Robmove_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ros2srrc_data::action::Robmove_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2srrc_data::action::Robmove_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ros2srrc_data::action::Robmove_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2srrc_data::action::Robmove_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ros2srrc_data::action::Robmove>
  : std::true_type
{
};

template<>
struct is_action_goal<ros2srrc_data::action::Robmove_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ros2srrc_data::action::Robmove_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ros2srrc_data::action::Robmove_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__TRAITS_HPP_
