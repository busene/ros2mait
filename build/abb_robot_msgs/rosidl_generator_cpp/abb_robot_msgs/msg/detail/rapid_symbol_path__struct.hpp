// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_robot_msgs:msg/RAPIDSymbolPath.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__STRUCT_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_robot_msgs__msg__RAPIDSymbolPath __attribute__((deprecated))
#else
# define DEPRECATED__abb_robot_msgs__msg__RAPIDSymbolPath __declspec(deprecated)
#endif

namespace abb_robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RAPIDSymbolPath_
{
  using Type = RAPIDSymbolPath_<ContainerAllocator>;

  explicit RAPIDSymbolPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task = "";
      this->module = "";
      this->symbol = "";
    }
  }

  explicit RAPIDSymbolPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task(_alloc),
    module(_alloc),
    symbol(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task = "";
      this->module = "";
      this->symbol = "";
    }
  }

  // field types and members
  using _task_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_type task;
  using _module_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _module_type module;
  using _symbol_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _symbol_type symbol;

  // setters for named parameter idiom
  Type & set__task(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task = _arg;
    return *this;
  }
  Type & set__module(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->module = _arg;
    return *this;
  }
  Type & set__symbol(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->symbol = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_robot_msgs__msg__RAPIDSymbolPath
    std::shared_ptr<abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_robot_msgs__msg__RAPIDSymbolPath
    std::shared_ptr<abb_robot_msgs::msg::RAPIDSymbolPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RAPIDSymbolPath_ & other) const
  {
    if (this->task != other.task) {
      return false;
    }
    if (this->module != other.module) {
      return false;
    }
    if (this->symbol != other.symbol) {
      return false;
    }
    return true;
  }
  bool operator!=(const RAPIDSymbolPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RAPIDSymbolPath_

// alias to use template instance with default allocator
using RAPIDSymbolPath =
  abb_robot_msgs::msg::RAPIDSymbolPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__STRUCT_HPP_
