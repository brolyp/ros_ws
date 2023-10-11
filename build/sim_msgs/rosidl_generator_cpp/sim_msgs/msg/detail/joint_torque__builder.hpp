// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_msgs:msg/JointTorque.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__JOINT_TORQUE__BUILDER_HPP_
#define SIM_MSGS__MSG__DETAIL__JOINT_TORQUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_msgs/msg/detail/joint_torque__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTorque_torque
{
public:
  explicit Init_JointTorque_torque(::sim_msgs::msg::JointTorque & msg)
  : msg_(msg)
  {}
  ::sim_msgs::msg::JointTorque torque(::sim_msgs::msg::JointTorque::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_msgs::msg::JointTorque msg_;
};

class Init_JointTorque_name
{
public:
  explicit Init_JointTorque_name(::sim_msgs::msg::JointTorque & msg)
  : msg_(msg)
  {}
  Init_JointTorque_torque name(::sim_msgs::msg::JointTorque::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointTorque_torque(msg_);
  }

private:
  ::sim_msgs::msg::JointTorque msg_;
};

class Init_JointTorque_header
{
public:
  Init_JointTorque_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTorque_name header(::sim_msgs::msg::JointTorque::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointTorque_name(msg_);
  }

private:
  ::sim_msgs::msg::JointTorque msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_msgs::msg::JointTorque>()
{
  return sim_msgs::msg::builder::Init_JointTorque_header();
}

}  // namespace sim_msgs

#endif  // SIM_MSGS__MSG__DETAIL__JOINT_TORQUE__BUILDER_HPP_
