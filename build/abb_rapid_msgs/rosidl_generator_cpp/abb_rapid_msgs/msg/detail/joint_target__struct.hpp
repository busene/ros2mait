// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_msgs:msg/JointTarget.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__STRUCT_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robax'
#include "abb_rapid_msgs/msg/detail/rob_joint__struct.hpp"
// Member 'extax'
#include "abb_rapid_msgs/msg/detail/ext_joint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_rapid_msgs__msg__JointTarget __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_msgs__msg__JointTarget __declspec(deprecated)
#endif

namespace abb_rapid_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointTarget_
{
  using Type = JointTarget_<ContainerAllocator>;

  explicit JointTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robax(_init),
    extax(_init)
  {
    (void)_init;
  }

  explicit JointTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robax(_alloc, _init),
    extax(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robax_type =
    abb_rapid_msgs::msg::RobJoint_<ContainerAllocator>;
  _robax_type robax;
  using _extax_type =
    abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator>;
  _extax_type extax;

  // setters for named parameter idiom
  Type & set__robax(
    const abb_rapid_msgs::msg::RobJoint_<ContainerAllocator> & _arg)
  {
    this->robax = _arg;
    return *this;
  }
  Type & set__extax(
    const abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator> & _arg)
  {
    this->extax = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_msgs::msg::JointTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_msgs::msg::JointTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::JointTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::JointTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::JointTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::JointTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::JointTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::JointTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::JointTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::JointTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_msgs__msg__JointTarget
    std::shared_ptr<abb_rapid_msgs::msg::JointTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_msgs__msg__JointTarget
    std::shared_ptr<abb_rapid_msgs::msg::JointTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTarget_ & other) const
  {
    if (this->robax != other.robax) {
      return false;
    }
    if (this->extax != other.extax) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTarget_

// alias to use template instance with default allocator
using JointTarget =
  abb_rapid_msgs::msg::JointTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__STRUCT_HPP_
