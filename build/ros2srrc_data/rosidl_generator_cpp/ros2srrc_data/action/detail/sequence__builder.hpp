// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:action/Sequence.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__ACTION__DETAIL__SEQUENCE__BUILDER_HPP_
#define ROS2SRRC_DATA__ACTION__DETAIL__SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/action/detail/sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Sequence_Goal_environment
{
public:
  explicit Init_Sequence_Goal_environment(::ros2srrc_data::action::Sequence_Goal & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Sequence_Goal environment(::ros2srrc_data::action::Sequence_Goal::_environment_type arg)
  {
    msg_.environment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_Goal msg_;
};

class Init_Sequence_Goal_endeffector
{
public:
  explicit Init_Sequence_Goal_endeffector(::ros2srrc_data::action::Sequence_Goal & msg)
  : msg_(msg)
  {}
  Init_Sequence_Goal_environment endeffector(::ros2srrc_data::action::Sequence_Goal::_endeffector_type arg)
  {
    msg_.endeffector = std::move(arg);
    return Init_Sequence_Goal_environment(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_Goal msg_;
};

class Init_Sequence_Goal_robot
{
public:
  explicit Init_Sequence_Goal_robot(::ros2srrc_data::action::Sequence_Goal & msg)
  : msg_(msg)
  {}
  Init_Sequence_Goal_endeffector robot(::ros2srrc_data::action::Sequence_Goal::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return Init_Sequence_Goal_endeffector(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_Goal msg_;
};

class Init_Sequence_Goal_sequence
{
public:
  Init_Sequence_Goal_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequence_Goal_robot sequence(::ros2srrc_data::action::Sequence_Goal::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_Sequence_Goal_robot(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Sequence_Goal>()
{
  return ros2srrc_data::action::builder::Init_Sequence_Goal_sequence();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Sequence_Result_result
{
public:
  Init_Sequence_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2srrc_data::action::Sequence_Result result(::ros2srrc_data::action::Sequence_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Sequence_Result>()
{
  return ros2srrc_data::action::builder::Init_Sequence_Result_result();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Sequence_Feedback_feedback
{
public:
  Init_Sequence_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2srrc_data::action::Sequence_Feedback feedback(::ros2srrc_data::action::Sequence_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Sequence_Feedback>()
{
  return ros2srrc_data::action::builder::Init_Sequence_Feedback_feedback();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Sequence_SendGoal_Request_goal
{
public:
  explicit Init_Sequence_SendGoal_Request_goal(::ros2srrc_data::action::Sequence_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Sequence_SendGoal_Request goal(::ros2srrc_data::action::Sequence_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_SendGoal_Request msg_;
};

class Init_Sequence_SendGoal_Request_goal_id
{
public:
  Init_Sequence_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequence_SendGoal_Request_goal goal_id(::ros2srrc_data::action::Sequence_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Sequence_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Sequence_SendGoal_Request>()
{
  return ros2srrc_data::action::builder::Init_Sequence_SendGoal_Request_goal_id();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Sequence_SendGoal_Response_stamp
{
public:
  explicit Init_Sequence_SendGoal_Response_stamp(::ros2srrc_data::action::Sequence_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Sequence_SendGoal_Response stamp(::ros2srrc_data::action::Sequence_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_SendGoal_Response msg_;
};

class Init_Sequence_SendGoal_Response_accepted
{
public:
  Init_Sequence_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequence_SendGoal_Response_stamp accepted(::ros2srrc_data::action::Sequence_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Sequence_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Sequence_SendGoal_Response>()
{
  return ros2srrc_data::action::builder::Init_Sequence_SendGoal_Response_accepted();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Sequence_GetResult_Request_goal_id
{
public:
  Init_Sequence_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2srrc_data::action::Sequence_GetResult_Request goal_id(::ros2srrc_data::action::Sequence_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Sequence_GetResult_Request>()
{
  return ros2srrc_data::action::builder::Init_Sequence_GetResult_Request_goal_id();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Sequence_GetResult_Response_result
{
public:
  explicit Init_Sequence_GetResult_Response_result(::ros2srrc_data::action::Sequence_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Sequence_GetResult_Response result(::ros2srrc_data::action::Sequence_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_GetResult_Response msg_;
};

class Init_Sequence_GetResult_Response_status
{
public:
  Init_Sequence_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequence_GetResult_Response_result status(::ros2srrc_data::action::Sequence_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Sequence_GetResult_Response_result(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Sequence_GetResult_Response>()
{
  return ros2srrc_data::action::builder::Init_Sequence_GetResult_Response_status();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Sequence_FeedbackMessage_feedback
{
public:
  explicit Init_Sequence_FeedbackMessage_feedback(::ros2srrc_data::action::Sequence_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Sequence_FeedbackMessage feedback(::ros2srrc_data::action::Sequence_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_FeedbackMessage msg_;
};

class Init_Sequence_FeedbackMessage_goal_id
{
public:
  Init_Sequence_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequence_FeedbackMessage_feedback goal_id(::ros2srrc_data::action::Sequence_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Sequence_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2srrc_data::action::Sequence_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Sequence_FeedbackMessage>()
{
  return ros2srrc_data::action::builder::Init_Sequence_FeedbackMessage_goal_id();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__ACTION__DETAIL__SEQUENCE__BUILDER_HPP_
