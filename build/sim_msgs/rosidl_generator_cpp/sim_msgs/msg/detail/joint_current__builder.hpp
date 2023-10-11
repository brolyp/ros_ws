// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_msgs:msg/JointCurrent.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__JOINT_CURRENT__BUILDER_HPP_
#define SIM_MSGS__MSG__DETAIL__JOINT_CURRENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_msgs/msg/detail/joint_current__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_msgs
{

namespace msg
{

namespace builder
{

class Init_JointCurrent_current
{
public:
  explicit Init_JointCurrent_current(::sim_msgs::msg::JointCurrent & msg)
  : msg_(msg)
  {}
  ::sim_msgs::msg::JointCurrent current(::sim_msgs::msg::JointCurrent::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_msgs::msg::JointCurrent msg_;
};

class Init_JointCurrent_name
{
public:
  explicit Init_JointCurrent_name(::sim_msgs::msg::JointCurrent & msg)
  : msg_(msg)
  {}
  Init_JointCurrent_current name(::sim_msgs::msg::JointCurrent::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointCurrent_current(msg_);
  }

private:
  ::sim_msgs::msg::JointCurrent msg_;
};

class Init_JointCurrent_header
{
public:
  Init_JointCurrent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCurrent_name header(::sim_msgs::msg::JointCurrent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointCurrent_name(msg_);
  }

private:
  ::sim_msgs::msg::JointCurrent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_msgs::msg::JointCurrent>()
{
  return sim_msgs::msg::builder::Init_JointCurrent_header();
}

}  // namespace sim_msgs

#endif  // SIM_MSGS__MSG__DETAIL__JOINT_CURRENT__BUILDER_HPP_
