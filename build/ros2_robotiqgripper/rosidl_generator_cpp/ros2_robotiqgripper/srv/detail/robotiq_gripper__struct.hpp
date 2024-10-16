// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_robotiqgripper:srv/RobotiqGripper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__STRUCT_HPP_
#define ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_robotiqgripper__srv__RobotiqGripper_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_robotiqgripper__srv__RobotiqGripper_Request __declspec(deprecated)
#endif

namespace ros2_robotiqgripper
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotiqGripper_Request_
{
  using Type = RobotiqGripper_Request_<ContainerAllocator>;

  explicit RobotiqGripper_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
    }
  }

  explicit RobotiqGripper_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
    }
  }

  // field types and members
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _action_type action;

  // setters for named parameter idiom
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_robotiqgripper__srv__RobotiqGripper_Request
    std::shared_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_robotiqgripper__srv__RobotiqGripper_Request
    std::shared_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotiqGripper_Request_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotiqGripper_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotiqGripper_Request_

// alias to use template instance with default allocator
using RobotiqGripper_Request =
  ros2_robotiqgripper::srv::RobotiqGripper_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_robotiqgripper


#ifndef _WIN32
# define DEPRECATED__ros2_robotiqgripper__srv__RobotiqGripper_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_robotiqgripper__srv__RobotiqGripper_Response __declspec(deprecated)
#endif

namespace ros2_robotiqgripper
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotiqGripper_Response_
{
  using Type = RobotiqGripper_Response_<ContainerAllocator>;

  explicit RobotiqGripper_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->value = 0ll;
      this->average = 0.0f;
      this->message = "";
    }
  }

  explicit RobotiqGripper_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->value = 0ll;
      this->average = 0.0f;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _value_type =
    int64_t;
  _value_type value;
  using _average_type =
    float;
  _average_type average;
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
  Type & set__value(
    const int64_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__average(
    const float & _arg)
  {
    this->average = _arg;
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
    ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_robotiqgripper__srv__RobotiqGripper_Response
    std::shared_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_robotiqgripper__srv__RobotiqGripper_Response
    std::shared_ptr<ros2_robotiqgripper::srv::RobotiqGripper_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotiqGripper_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->average != other.average) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotiqGripper_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotiqGripper_Response_

// alias to use template instance with default allocator
using RobotiqGripper_Response =
  ros2_robotiqgripper::srv::RobotiqGripper_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_robotiqgripper

namespace ros2_robotiqgripper
{

namespace srv
{

struct RobotiqGripper
{
  using Request = ros2_robotiqgripper::srv::RobotiqGripper_Request;
  using Response = ros2_robotiqgripper::srv::RobotiqGripper_Response;
};

}  // namespace srv

}  // namespace ros2_robotiqgripper

#endif  // ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__STRUCT_HPP_
