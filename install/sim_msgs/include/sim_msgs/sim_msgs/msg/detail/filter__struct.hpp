// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_msgs:msg/Filter.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__FILTER__STRUCT_HPP_
#define SIM_MSGS__MSG__DETAIL__FILTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_currents'
#include "sim_msgs/msg/detail/joint_current__struct.hpp"
// Member 'endeffector_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"
// Member 'j_tf'
#include "tf2_msgs/msg/detail/tf_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sim_msgs__msg__Filter __attribute__((deprecated))
#else
# define DEPRECATED__sim_msgs__msg__Filter __declspec(deprecated)
#endif

namespace sim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Filter_
{
  using Type = Filter_<ContainerAllocator>;

  explicit Filter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_currents(_init),
    endeffector_pose(_init),
    joint_states(_init),
    j_tf(_init)
  {
    (void)_init;
  }

  explicit Filter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_currents(_alloc, _init),
    endeffector_pose(_alloc, _init),
    joint_states(_alloc, _init),
    j_tf(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joint_currents_type =
    sim_msgs::msg::JointCurrent_<ContainerAllocator>;
  _joint_currents_type joint_currents;
  using _endeffector_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _endeffector_pose_type endeffector_pose;
  using _joint_states_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_states_type joint_states;
  using _j_tf_type =
    tf2_msgs::msg::TFMessage_<ContainerAllocator>;
  _j_tf_type j_tf;

  // setters for named parameter idiom
  Type & set__joint_currents(
    const sim_msgs::msg::JointCurrent_<ContainerAllocator> & _arg)
  {
    this->joint_currents = _arg;
    return *this;
  }
  Type & set__endeffector_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->endeffector_pose = _arg;
    return *this;
  }
  Type & set__joint_states(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_states = _arg;
    return *this;
  }
  Type & set__j_tf(
    const tf2_msgs::msg::TFMessage_<ContainerAllocator> & _arg)
  {
    this->j_tf = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_msgs::msg::Filter_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_msgs::msg::Filter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_msgs::msg::Filter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_msgs::msg::Filter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_msgs::msg::Filter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_msgs::msg::Filter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_msgs::msg::Filter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_msgs::msg::Filter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_msgs::msg::Filter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_msgs::msg::Filter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_msgs__msg__Filter
    std::shared_ptr<sim_msgs::msg::Filter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_msgs__msg__Filter
    std::shared_ptr<sim_msgs::msg::Filter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Filter_ & other) const
  {
    if (this->joint_currents != other.joint_currents) {
      return false;
    }
    if (this->endeffector_pose != other.endeffector_pose) {
      return false;
    }
    if (this->joint_states != other.joint_states) {
      return false;
    }
    if (this->j_tf != other.j_tf) {
      return false;
    }
    return true;
  }
  bool operator!=(const Filter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Filter_

// alias to use template instance with default allocator
using Filter =
  sim_msgs::msg::Filter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_msgs

#endif  // SIM_MSGS__MSG__DETAIL__FILTER__STRUCT_HPP_
