// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_msgs:msg/RobTarget.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__STRUCT_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__STRUCT_HPP_

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
// Member 'robconf'
#include "abb_rapid_msgs/msg/detail/conf_data__struct.hpp"
// Member 'extax'
#include "abb_rapid_msgs/msg/detail/ext_joint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_rapid_msgs__msg__RobTarget __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_msgs__msg__RobTarget __declspec(deprecated)
#endif

namespace abb_rapid_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobTarget_
{
  using Type = RobTarget_<ContainerAllocator>;

  explicit RobTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trans(_init),
    rot(_init),
    robconf(_init),
    extax(_init)
  {
    (void)_init;
  }

  explicit RobTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trans(_alloc, _init),
    rot(_alloc, _init),
    robconf(_alloc, _init),
    extax(_alloc, _init)
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
  using _robconf_type =
    abb_rapid_msgs::msg::ConfData_<ContainerAllocator>;
  _robconf_type robconf;
  using _extax_type =
    abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator>;
  _extax_type extax;

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
  Type & set__robconf(
    const abb_rapid_msgs::msg::ConfData_<ContainerAllocator> & _arg)
  {
    this->robconf = _arg;
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
    abb_rapid_msgs::msg::RobTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_msgs::msg::RobTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::RobTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::RobTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::RobTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::RobTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::RobTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::RobTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::RobTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::RobTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_msgs__msg__RobTarget
    std::shared_ptr<abb_rapid_msgs::msg::RobTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_msgs__msg__RobTarget
    std::shared_ptr<abb_rapid_msgs::msg::RobTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobTarget_ & other) const
  {
    if (this->trans != other.trans) {
      return false;
    }
    if (this->rot != other.rot) {
      return false;
    }
    if (this->robconf != other.robconf) {
      return false;
    }
    if (this->extax != other.extax) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobTarget_

// alias to use template instance with default allocator
using RobTarget =
  abb_rapid_msgs::msg::RobTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__STRUCT_HPP_
