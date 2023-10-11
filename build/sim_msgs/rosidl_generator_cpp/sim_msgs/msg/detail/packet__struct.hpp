// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_msgs:msg/Packet.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__PACKET__STRUCT_HPP_
#define SIM_MSGS__MSG__DETAIL__PACKET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sim_msgs__msg__Packet __attribute__((deprecated))
#else
# define DEPRECATED__sim_msgs__msg__Packet __declspec(deprecated)
#endif

namespace sim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Packet_
{
  using Type = Packet_<ContainerAllocator>;

  explicit Packet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->packet_id = 0;
    }
  }

  explicit Packet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->packet_id = 0;
    }
  }

  // field types and members
  using _device_id_type =
    uint8_t;
  _device_id_type device_id;
  using _packet_id_type =
    uint8_t;
  _packet_id_type packet_id;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__device_id(
    const uint8_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__packet_id(
    const uint8_t & _arg)
  {
    this->packet_id = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_msgs::msg::Packet_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_msgs::msg::Packet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_msgs::msg::Packet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_msgs::msg::Packet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_msgs::msg::Packet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_msgs::msg::Packet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_msgs::msg::Packet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_msgs::msg::Packet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_msgs::msg::Packet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_msgs::msg::Packet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_msgs__msg__Packet
    std::shared_ptr<sim_msgs::msg::Packet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_msgs__msg__Packet
    std::shared_ptr<sim_msgs::msg::Packet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Packet_ & other) const
  {
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->packet_id != other.packet_id) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Packet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Packet_

// alias to use template instance with default allocator
using Packet =
  sim_msgs::msg::Packet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_msgs

#endif  // SIM_MSGS__MSG__DETAIL__PACKET__STRUCT_HPP_
