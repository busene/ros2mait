// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trans'
#include "abb_rapid_msgs/msg/detail/pos__struct.hpp"
// Member 'rot'
#include "abb_rapid_msgs/msg/detail/orient__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_rapid_msgs__msg__Pose __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_msgs__msg__Pose __declspec(deprecated)
#endif

namespace abb_rapid_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose_
{
  using Type = Pose_<ContainerAllocator>;

  explicit Pose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trans(_init),
    rot(_init)
  {
    (void)_init;
  }

  explicit Pose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trans(_alloc, _init),
    rot(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trans_type =
    abb_rapid_msgs::msg::Pos_<ContainerAllocator>;
  _trans_type trans;
  using _rot_type =
    abb_rapid_msgs::msg::Orient_<ContainerAllocator>;
  _rot_type rot;

  // setters for named parameter idiom
  Type & set__trans(
    const abb_rapid_msgs::msg::Pos_<ContainerAllocator> & _arg)
  {
    this->trans = _arg;
    return *this;
  }
  Type & set__rot(
    const abb_rapid_msgs::msg::Orient_<ContainerAllocator> & _arg)
  {
    this->rot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_msgs::msg::Pose_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_msgs::msg::Pose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::Pose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::Pose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::Pose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::Pose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::Pose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::Pose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_msgs__msg__Pose
    std::shared_ptr<abb_rapid_msgs::msg::Pose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_msgs__msg__Pose
    std::shared_ptr<abb_rapid_msgs::msg::Pose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose_ & other) const
  {
    if (this->trans != other.trans) {
      return false;
    }
    if (this->rot != other.rot) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose_

// alias to use template instance with default allocator
using Pose =
  abb_rapid_msgs::msg::Pose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
