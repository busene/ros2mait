// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:action/Robmove.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__BUILDER_HPP_
#define ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/action/detail/robmove__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Robmove_Goal_qw
{
public:
  explicit Init_Robmove_Goal_qw(::ros2srrc_data::action::Robmove_Goal & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Robmove_Goal qw(::ros2srrc_data::action::Robmove_Goal::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Goal msg_;
};

class Init_Robmove_Goal_qz
{
public:
  explicit Init_Robmove_Goal_qz(::ros2srrc_data::action::Robmove_Goal & msg)
  : msg_(msg)
  {}
  Init_Robmove_Goal_qw qz(::ros2srrc_data::action::Robmove_Goal::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_Robmove_Goal_qw(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Goal msg_;
};

class Init_Robmove_Goal_qy
{
public:
  explicit Init_Robmove_Goal_qy(::ros2srrc_data::action::Robmove_Goal & msg)
  : msg_(msg)
  {}
  Init_Robmove_Goal_qz qy(::ros2srrc_data::action::Robmove_Goal::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_Robmove_Goal_qz(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Goal msg_;
};

class Init_Robmove_Goal_qx
{
public:
  explicit Init_Robmove_Goal_qx(::ros2srrc_data::action::Robmove_Goal & msg)
  : msg_(msg)
  {}
  Init_Robmove_Goal_qy qx(::ros2srrc_data::action::Robmove_Goal::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_Robmove_Goal_qy(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Goal msg_;
};

class Init_Robmove_Goal_z
{
public:
  explicit Init_Robmove_Goal_z(::ros2srrc_data::action::Robmove_Goal & msg)
  : msg_(msg)
  {}
  Init_Robmove_Goal_qx z(::ros2srrc_data::action::Robmove_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Robmove_Goal_qx(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Goal msg_;
};

class Init_Robmove_Goal_y
{
public:
  explicit Init_Robmove_Goal_y(::ros2srrc_data::action::Robmove_Goal & msg)
  : msg_(msg)
  {}
  Init_Robmove_Goal_z y(::ros2srrc_data::action::Robmove_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Robmove_Goal_z(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Goal msg_;
};

class Init_Robmove_Goal_x
{
public:
  explicit Init_Robmove_Goal_x(::ros2srrc_data::action::Robmove_Goal & msg)
  : msg_(msg)
  {}
  Init_Robmove_Goal_y x(::ros2srrc_data::action::Robmove_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Robmove_Goal_y(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Goal msg_;
};

class Init_Robmove_Goal_speed
{
public:
  explicit Init_Robmove_Goal_speed(::ros2srrc_data::action::Robmove_Goal & msg)
  : msg_(msg)
  {}
  Init_Robmove_Goal_x speed(::ros2srrc_data::action::Robmove_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Robmove_Goal_x(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Goal msg_;
};

class Init_Robmove_Goal_type
{
public:
  Init_Robmove_Goal_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robmove_Goal_speed type(::ros2srrc_data::action::Robmove_Goal::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Robmove_Goal_speed(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Robmove_Goal>()
{
  return ros2srrc_data::action::builder::Init_Robmove_Goal_type();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Robmove_Result_message
{
public:
  explicit Init_Robmove_Result_message(::ros2srrc_data::action::Robmove_Result & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Robmove_Result message(::ros2srrc_data::action::Robmove_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Result msg_;
};

class Init_Robmove_Result_success
{
public:
  Init_Robmove_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robmove_Result_message success(::ros2srrc_data::action::Robmove_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Robmove_Result_message(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Robmove_Result>()
{
  return ros2srrc_data::action::builder::Init_Robmove_Result_success();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Robmove_Feedback_feedback
{
public:
  Init_Robmove_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2srrc_data::action::Robmove_Feedback feedback(::ros2srrc_data::action::Robmove_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Robmove_Feedback>()
{
  return ros2srrc_data::action::builder::Init_Robmove_Feedback_feedback();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Robmove_SendGoal_Request_goal
{
public:
  explicit Init_Robmove_SendGoal_Request_goal(::ros2srrc_data::action::Robmove_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Robmove_SendGoal_Request goal(::ros2srrc_data::action::Robmove_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_SendGoal_Request msg_;
};

class Init_Robmove_SendGoal_Request_goal_id
{
public:
  Init_Robmove_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robmove_SendGoal_Request_goal goal_id(::ros2srrc_data::action::Robmove_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Robmove_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Robmove_SendGoal_Request>()
{
  return ros2srrc_data::action::builder::Init_Robmove_SendGoal_Request_goal_id();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Robmove_SendGoal_Response_stamp
{
public:
  explicit Init_Robmove_SendGoal_Response_stamp(::ros2srrc_data::action::Robmove_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Robmove_SendGoal_Response stamp(::ros2srrc_data::action::Robmove_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_SendGoal_Response msg_;
};

class Init_Robmove_SendGoal_Response_accepted
{
public:
  Init_Robmove_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robmove_SendGoal_Response_stamp accepted(::ros2srrc_data::action::Robmove_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Robmove_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Robmove_SendGoal_Response>()
{
  return ros2srrc_data::action::builder::Init_Robmove_SendGoal_Response_accepted();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Robmove_GetResult_Request_goal_id
{
public:
  Init_Robmove_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2srrc_data::action::Robmove_GetResult_Request goal_id(::ros2srrc_data::action::Robmove_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Robmove_GetResult_Request>()
{
  return ros2srrc_data::action::builder::Init_Robmove_GetResult_Request_goal_id();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Robmove_GetResult_Response_result
{
public:
  explicit Init_Robmove_GetResult_Response_result(::ros2srrc_data::action::Robmove_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Robmove_GetResult_Response result(::ros2srrc_data::action::Robmove_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_GetResult_Response msg_;
};

class Init_Robmove_GetResult_Response_status
{
public:
  Init_Robmove_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robmove_GetResult_Response_result status(::ros2srrc_data::action::Robmove_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Robmove_GetResult_Response_result(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Robmove_GetResult_Response>()
{
  return ros2srrc_data::action::builder::Init_Robmove_GetResult_Response_status();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Robmove_FeedbackMessage_feedback
{
public:
  explicit Init_Robmove_FeedbackMessage_feedback(::ros2srrc_data::action::Robmove_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Robmove_FeedbackMessage feedback(::ros2srrc_data::action::Robmove_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_FeedbackMessage msg_;
};

class Init_Robmove_FeedbackMessage_goal_id
{
public:
  Init_Robmove_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robmove_FeedbackMessage_feedback goal_id(::ros2srrc_data::action::Robmove_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Robmove_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2srrc_data::action::Robmove_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Robmove_FeedbackMessage>()
{
  return ros2srrc_data::action::builder::Init_Robmove_FeedbackMessage_goal_id();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__BUILDER_HPP_
