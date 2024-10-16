// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:action/Move.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define ROS2SRRC_DATA__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Move_Goal_moveg
{
public:
  explicit Init_Move_Goal_moveg(::ros2srrc_data::action::Move_Goal & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Move_Goal moveg(::ros2srrc_data::action::Move_Goal::_moveg_type arg)
  {
    msg_.moveg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Goal msg_;
};

class Init_Move_Goal_moverp
{
public:
  explicit Init_Move_Goal_moverp(::ros2srrc_data::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_moveg moverp(::ros2srrc_data::action::Move_Goal::_moverp_type arg)
  {
    msg_.moverp = std::move(arg);
    return Init_Move_Goal_moveg(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Goal msg_;
};

class Init_Move_Goal_moverot
{
public:
  explicit Init_Move_Goal_moverot(::ros2srrc_data::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_moverp moverot(::ros2srrc_data::action::Move_Goal::_moverot_type arg)
  {
    msg_.moverot = std::move(arg);
    return Init_Move_Goal_moverp(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Goal msg_;
};

class Init_Move_Goal_movel
{
public:
  explicit Init_Move_Goal_movel(::ros2srrc_data::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_moverot movel(::ros2srrc_data::action::Move_Goal::_movel_type arg)
  {
    msg_.movel = std::move(arg);
    return Init_Move_Goal_moverot(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Goal msg_;
};

class Init_Move_Goal_mover
{
public:
  explicit Init_Move_Goal_mover(::ros2srrc_data::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_movel mover(::ros2srrc_data::action::Move_Goal::_mover_type arg)
  {
    msg_.mover = std::move(arg);
    return Init_Move_Goal_movel(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Goal msg_;
};

class Init_Move_Goal_movej
{
public:
  explicit Init_Move_Goal_movej(::ros2srrc_data::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_mover movej(::ros2srrc_data::action::Move_Goal::_movej_type arg)
  {
    msg_.movej = std::move(arg);
    return Init_Move_Goal_mover(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Goal msg_;
};

class Init_Move_Goal_speed
{
public:
  explicit Init_Move_Goal_speed(::ros2srrc_data::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_movej speed(::ros2srrc_data::action::Move_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Move_Goal_movej(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Goal msg_;
};

class Init_Move_Goal_action
{
public:
  Init_Move_Goal_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Goal_speed action(::ros2srrc_data::action::Move_Goal::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Move_Goal_speed(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Move_Goal>()
{
  return ros2srrc_data::action::builder::Init_Move_Goal_action();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Move_Result_result
{
public:
  Init_Move_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2srrc_data::action::Move_Result result(::ros2srrc_data::action::Move_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Move_Result>()
{
  return ros2srrc_data::action::builder::Init_Move_Result_result();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_feedback
{
public:
  Init_Move_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2srrc_data::action::Move_Feedback feedback(::ros2srrc_data::action::Move_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Move_Feedback>()
{
  return ros2srrc_data::action::builder::Init_Move_Feedback_feedback();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::ros2srrc_data::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Move_SendGoal_Request goal(::ros2srrc_data::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::ros2srrc_data::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2srrc_data::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Move_SendGoal_Request>()
{
  return ros2srrc_data::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::ros2srrc_data::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Move_SendGoal_Response stamp(::ros2srrc_data::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::ros2srrc_data::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2srrc_data::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Move_SendGoal_Response>()
{
  return ros2srrc_data::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2srrc_data::action::Move_GetResult_Request goal_id(::ros2srrc_data::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Move_GetResult_Request>()
{
  return ros2srrc_data::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::ros2srrc_data::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Move_GetResult_Response result(::ros2srrc_data::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::ros2srrc_data::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::ros2srrc_data::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Move_GetResult_Response>()
{
  return ros2srrc_data::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace ros2srrc_data


namespace ros2srrc_data
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::ros2srrc_data::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::action::Move_FeedbackMessage feedback(::ros2srrc_data::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::ros2srrc_data::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2srrc_data::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::action::Move_FeedbackMessage>()
{
  return ros2srrc_data::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__ACTION__DETAIL__MOVE__BUILDER_HPP_
