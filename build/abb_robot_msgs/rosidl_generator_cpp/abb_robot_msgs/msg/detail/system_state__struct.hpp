// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_robot_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__STRUCT_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'rapid_tasks'
#include "abb_robot_msgs/msg/detail/rapid_task_state__struct.hpp"
// Member 'mechanical_units'
#include "abb_robot_msgs/msg/detail/mechanical_unit_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_robot_msgs__msg__SystemState __attribute__((deprecated))
#else
# define DEPRECATED__abb_robot_msgs__msg__SystemState __declspec(deprecated)
#endif

namespace abb_robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemState_
{
  using Type = SystemState_<ContainerAllocator>;

  explicit SystemState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motors_on = false;
      this->auto_mode = false;
      this->rapid_running = false;
    }
  }

  explicit SystemState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motors_on = false;
      this->auto_mode = false;
      this->rapid_running = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motors_on_type =
    bool;
  _motors_on_type motors_on;
  using _auto_mode_type =
    bool;
  _auto_mode_type auto_mode;
  using _rapid_running_type =
    bool;
  _rapid_running_type rapid_running;
  using _rapid_tasks_type =
    std::vector<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>>>;
  _rapid_tasks_type rapid_tasks;
  using _mechanical_units_type =
    std::vector<abb_robot_msgs::msg::MechanicalUnitState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<abb_robot_msgs::msg::MechanicalUnitState_<ContainerAllocator>>>;
  _mechanical_units_type mechanical_units;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motors_on(
    const bool & _arg)
  {
    this->motors_on = _arg;
    return *this;
  }
  Type & set__auto_mode(
    const bool & _arg)
  {
    this->auto_mode = _arg;
    return *this;
  }
  Type & set__rapid_running(
    const bool & _arg)
  {
    this->rapid_running = _arg;
    return *this;
  }
  Type & set__rapid_tasks(
    const std::vector<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>>> & _arg)
  {
    this->rapid_tasks = _arg;
    return *this;
  }
  Type & set__mechanical_units(
    const std::vector<abb_robot_msgs::msg::MechanicalUnitState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<abb_robot_msgs::msg::MechanicalUnitState_<ContainerAllocator>>> & _arg)
  {
    this->mechanical_units = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_robot_msgs::msg::SystemState_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_robot_msgs::msg::SystemState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_robot_msgs::msg::SystemState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_robot_msgs::msg::SystemState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::msg::SystemState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::msg::SystemState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::msg::SystemState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::msg::SystemState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_robot_msgs::msg::SystemState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_robot_msgs::msg::SystemState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_robot_msgs__msg__SystemState
    std::shared_ptr<abb_robot_msgs::msg::SystemState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_robot_msgs__msg__SystemState
    std::shared_ptr<abb_robot_msgs::msg::SystemState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motors_on != other.motors_on) {
      return false;
    }
    if (this->auto_mode != other.auto_mode) {
      return false;
    }
    if (this->rapid_running != other.rapid_running) {
      return false;
    }
    if (this->rapid_tasks != other.rapid_tasks) {
      return false;
    }
    if (this->mechanical_units != other.mechanical_units) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemState_

// alias to use template instance with default allocator
using SystemState =
  abb_robot_msgs::msg::SystemState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__STRUCT_HPP_
