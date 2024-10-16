// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2srrc_data:action/Robmove.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__STRUCT_HPP_
#define ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__action__Robmove_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__action__Robmove_Goal __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robmove_Goal_
{
  using Type = Robmove_Goal_<ContainerAllocator>;

  explicit Robmove_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->speed = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qx = 0.0;
      this->qy = 0.0;
      this->qz = 0.0;
      this->qw = 0.0;
    }
  }

  explicit Robmove_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->speed = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qx = 0.0;
      this->qy = 0.0;
      this->qz = 0.0;
      this->qw = 0.0;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _speed_type =
    double;
  _speed_type speed;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _qx_type =
    double;
  _qx_type qx;
  using _qy_type =
    double;
  _qy_type qy;
  using _qz_type =
    double;
  _qz_type qz;
  using _qw_type =
    double;
  _qw_type qw;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__qx(
    const double & _arg)
  {
    this->qx = _arg;
    return *this;
  }
  Type & set__qy(
    const double & _arg)
  {
    this->qy = _arg;
    return *this;
  }
  Type & set__qz(
    const double & _arg)
  {
    this->qz = _arg;
    return *this;
  }
  Type & set__qw(
    const double & _arg)
  {
    this->qw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::action::Robmove_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::action::Robmove_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__action__Robmove_Goal
    std::shared_ptr<ros2srrc_data::action::Robmove_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__action__Robmove_Goal
    std::shared_ptr<ros2srrc_data::action::Robmove_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robmove_Goal_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->qx != other.qx) {
      return false;
    }
    if (this->qy != other.qy) {
      return false;
    }
    if (this->qz != other.qz) {
      return false;
    }
    if (this->qw != other.qw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robmove_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robmove_Goal_

// alias to use template instance with default allocator
using Robmove_Goal =
  ros2srrc_data::action::Robmove_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2srrc_data


#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__action__Robmove_Result __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__action__Robmove_Result __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robmove_Result_
{
  using Type = Robmove_Result_<ContainerAllocator>;

  explicit Robmove_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Robmove_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::action::Robmove_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::action::Robmove_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__action__Robmove_Result
    std::shared_ptr<ros2srrc_data::action::Robmove_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__action__Robmove_Result
    std::shared_ptr<ros2srrc_data::action::Robmove_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robmove_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robmove_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robmove_Result_

// alias to use template instance with default allocator
using Robmove_Result =
  ros2srrc_data::action::Robmove_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2srrc_data


#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__action__Robmove_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__action__Robmove_Feedback __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robmove_Feedback_
{
  using Type = Robmove_Feedback_<ContainerAllocator>;

  explicit Robmove_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  explicit Robmove_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  // field types and members
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__action__Robmove_Feedback
    std::shared_ptr<ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__action__Robmove_Feedback
    std::shared_ptr<ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robmove_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robmove_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robmove_Feedback_

// alias to use template instance with default allocator
using Robmove_Feedback =
  ros2srrc_data::action::Robmove_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2srrc_data


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ros2srrc_data/action/detail/robmove__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__action__Robmove_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__action__Robmove_SendGoal_Request __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robmove_SendGoal_Request_
{
  using Type = Robmove_SendGoal_Request_<ContainerAllocator>;

  explicit Robmove_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Robmove_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    ros2srrc_data::action::Robmove_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ros2srrc_data::action::Robmove_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__action__Robmove_SendGoal_Request
    std::shared_ptr<ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__action__Robmove_SendGoal_Request
    std::shared_ptr<ros2srrc_data::action::Robmove_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robmove_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robmove_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robmove_SendGoal_Request_

// alias to use template instance with default allocator
using Robmove_SendGoal_Request =
  ros2srrc_data::action::Robmove_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2srrc_data


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__action__Robmove_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__action__Robmove_SendGoal_Response __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robmove_SendGoal_Response_
{
  using Type = Robmove_SendGoal_Response_<ContainerAllocator>;

  explicit Robmove_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Robmove_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__action__Robmove_SendGoal_Response
    std::shared_ptr<ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__action__Robmove_SendGoal_Response
    std::shared_ptr<ros2srrc_data::action::Robmove_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robmove_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robmove_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robmove_SendGoal_Response_

// alias to use template instance with default allocator
using Robmove_SendGoal_Response =
  ros2srrc_data::action::Robmove_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2srrc_data

namespace ros2srrc_data
{

namespace action
{

struct Robmove_SendGoal
{
  using Request = ros2srrc_data::action::Robmove_SendGoal_Request;
  using Response = ros2srrc_data::action::Robmove_SendGoal_Response;
};

}  // namespace action

}  // namespace ros2srrc_data


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__action__Robmove_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__action__Robmove_GetResult_Request __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robmove_GetResult_Request_
{
  using Type = Robmove_GetResult_Request_<ContainerAllocator>;

  explicit Robmove_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Robmove_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__action__Robmove_GetResult_Request
    std::shared_ptr<ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__action__Robmove_GetResult_Request
    std::shared_ptr<ros2srrc_data::action::Robmove_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robmove_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robmove_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robmove_GetResult_Request_

// alias to use template instance with default allocator
using Robmove_GetResult_Request =
  ros2srrc_data::action::Robmove_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2srrc_data


// Include directives for member types
// Member 'result'
// already included above
// #include "ros2srrc_data/action/detail/robmove__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__action__Robmove_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__action__Robmove_GetResult_Response __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robmove_GetResult_Response_
{
  using Type = Robmove_GetResult_Response_<ContainerAllocator>;

  explicit Robmove_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Robmove_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    ros2srrc_data::action::Robmove_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ros2srrc_data::action::Robmove_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__action__Robmove_GetResult_Response
    std::shared_ptr<ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__action__Robmove_GetResult_Response
    std::shared_ptr<ros2srrc_data::action::Robmove_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robmove_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robmove_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robmove_GetResult_Response_

// alias to use template instance with default allocator
using Robmove_GetResult_Response =
  ros2srrc_data::action::Robmove_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2srrc_data

namespace ros2srrc_data
{

namespace action
{

struct Robmove_GetResult
{
  using Request = ros2srrc_data::action::Robmove_GetResult_Request;
  using Response = ros2srrc_data::action::Robmove_GetResult_Response;
};

}  // namespace action

}  // namespace ros2srrc_data


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ros2srrc_data/action/detail/robmove__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__action__Robmove_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__action__Robmove_FeedbackMessage __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robmove_FeedbackMessage_
{
  using Type = Robmove_FeedbackMessage_<ContainerAllocator>;

  explicit Robmove_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Robmove_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ros2srrc_data::action::Robmove_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__action__Robmove_FeedbackMessage
    std::shared_ptr<ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__action__Robmove_FeedbackMessage
    std::shared_ptr<ros2srrc_data::action::Robmove_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robmove_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robmove_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robmove_FeedbackMessage_

// alias to use template instance with default allocator
using Robmove_FeedbackMessage =
  ros2srrc_data::action::Robmove_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2srrc_data

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ros2srrc_data
{

namespace action
{

struct Robmove
{
  /// The goal message defined in the action definition.
  using Goal = ros2srrc_data::action::Robmove_Goal;
  /// The result message defined in the action definition.
  using Result = ros2srrc_data::action::Robmove_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ros2srrc_data::action::Robmove_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ros2srrc_data::action::Robmove_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ros2srrc_data::action::Robmove_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ros2srrc_data::action::Robmove_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Robmove Robmove;

}  // namespace action

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__STRUCT_HPP_
