// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2srrc_data:msg/Linkattacher.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__STRUCT_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__msg__Linkattacher __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__msg__Linkattacher __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Linkattacher_
{
  using Type = Linkattacher_<ContainerAllocator>;

  explicit Linkattacher_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model1_name = "";
      this->link1_name = "";
      this->model2_name = "";
      this->link2_name = "";
    }
  }

  explicit Linkattacher_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model1_name(_alloc),
    link1_name(_alloc),
    model2_name(_alloc),
    link2_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model1_name = "";
      this->link1_name = "";
      this->model2_name = "";
      this->link2_name = "";
    }
  }

  // field types and members
  using _model1_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model1_name_type model1_name;
  using _link1_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link1_name_type link1_name;
  using _model2_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model2_name_type model2_name;
  using _link2_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link2_name_type link2_name;

  // setters for named parameter idiom
  Type & set__model1_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model1_name = _arg;
    return *this;
  }
  Type & set__link1_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link1_name = _arg;
    return *this;
  }
  Type & set__model2_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model2_name = _arg;
    return *this;
  }
  Type & set__link2_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link2_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::msg::Linkattacher_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::msg::Linkattacher_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Linkattacher_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Linkattacher_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Linkattacher_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Linkattacher_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Linkattacher_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Linkattacher_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Linkattacher_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Linkattacher_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__msg__Linkattacher
    std::shared_ptr<ros2srrc_data::msg::Linkattacher_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__msg__Linkattacher
    std::shared_ptr<ros2srrc_data::msg::Linkattacher_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Linkattacher_ & other) const
  {
    if (this->model1_name != other.model1_name) {
      return false;
    }
    if (this->link1_name != other.link1_name) {
      return false;
    }
    if (this->model2_name != other.model2_name) {
      return false;
    }
    if (this->link2_name != other.link2_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Linkattacher_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Linkattacher_

// alias to use template instance with default allocator
using Linkattacher =
  ros2srrc_data::msg::Linkattacher_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__STRUCT_HPP_
