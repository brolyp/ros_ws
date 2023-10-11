// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_msgs:msg/Packet.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__PACKET__BUILDER_HPP_
#define SIM_MSGS__MSG__DETAIL__PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_msgs/msg/detail/packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_msgs
{

namespace msg
{

namespace builder
{

class Init_Packet_data
{
public:
  explicit Init_Packet_data(::sim_msgs::msg::Packet & msg)
  : msg_(msg)
  {}
  ::sim_msgs::msg::Packet data(::sim_msgs::msg::Packet::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_msgs::msg::Packet msg_;
};

class Init_Packet_packet_id
{
public:
  explicit Init_Packet_packet_id(::sim_msgs::msg::Packet & msg)
  : msg_(msg)
  {}
  Init_Packet_data packet_id(::sim_msgs::msg::Packet::_packet_id_type arg)
  {
    msg_.packet_id = std::move(arg);
    return Init_Packet_data(msg_);
  }

private:
  ::sim_msgs::msg::Packet msg_;
};

class Init_Packet_device_id
{
public:
  Init_Packet_device_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Packet_packet_id device_id(::sim_msgs::msg::Packet::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_Packet_packet_id(msg_);
  }

private:
  ::sim_msgs::msg::Packet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_msgs::msg::Packet>()
{
  return sim_msgs::msg::builder::Init_Packet_device_id();
}

}  // namespace sim_msgs

#endif  // SIM_MSGS__MSG__DETAIL__PACKET__BUILDER_HPP_
