// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2srrc_data:msg/Specs.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__SPECS__STRUCT_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__SPECS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__msg__Specs __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__msg__Specs __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Specs_
{
  using Type = Specs_<ContainerAllocator>;

  explicit Specs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ee_max = 0.0;
      this->ee_min = 0.0;
    }
  }

  explicit Specs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ee_max = 0.0;
      this->ee_min = 0.0;
    }
  }

  // field types and members
  using _ee_max_type =
    double;
  _ee_max_type ee_max;
  using _ee_min_type =
    double;
  _ee_min_type ee_min;
  using _ee_vector_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ee_vector_type ee_vector;
  using _robot_max_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _robot_max_type robot_max;
  using _robot_min_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _robot_min_type robot_min;

  // setters for named parameter idiom
  Type & set__ee_max(
    const double & _arg)
  {
    this->ee_max = _arg;
    return *this;
  }
  Type & set__ee_min(
    const double & _arg)
  {
    this->ee_min = _arg;
    return *this;
  }
  Type & set__ee_vector(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ee_vector = _arg;
    return *this;
  }
  Type & set__robot_max(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->robot_max = _arg;
    return *this;
  }
  Type & set__robot_min(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->robot_min = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::msg::Specs_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::msg::Specs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Specs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Specs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Specs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Specs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Specs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Specs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Specs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Specs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__msg__Specs
    std::shared_ptr<ros2srrc_data::msg::Specs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__msg__Specs
    std::shared_ptr<ros2srrc_data::msg::Specs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Specs_ & other) const
  {
    if (this->ee_max != other.ee_max) {
      return false;
    }
    if (this->ee_min != other.ee_min) {
      return false;
    }
    if (this->ee_vector != other.ee_vector) {
      return false;
    }
    if (this->robot_max != other.robot_max) {
      return false;
    }
    if (this->robot_min != other.robot_min) {
      return false;
    }
    return true;
  }
  bool operator!=(const Specs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Specs_

// alias to use template instance with default allocator
using Specs =
  ros2srrc_data::msg::Specs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__SPECS__STRUCT_HPP_
