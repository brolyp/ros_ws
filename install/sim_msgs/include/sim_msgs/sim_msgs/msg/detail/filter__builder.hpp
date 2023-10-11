// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_msgs:msg/Filter.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__FILTER__BUILDER_HPP_
#define SIM_MSGS__MSG__DETAIL__FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_msgs/msg/detail/filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_msgs
{

namespace msg
{

namespace builder
{

class Init_Filter_j_tf
{
public:
  explicit Init_Filter_j_tf(::sim_msgs::msg::Filter & msg)
  : msg_(msg)
  {}
  ::sim_msgs::msg::Filter j_tf(::sim_msgs::msg::Filter::_j_tf_type arg)
  {
    msg_.j_tf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_msgs::msg::Filter msg_;
};

class Init_Filter_joint_states
{
public:
  explicit Init_Filter_joint_states(::sim_msgs::msg::Filter & msg)
  : msg_(msg)
  {}
  Init_Filter_j_tf joint_states(::sim_msgs::msg::Filter::_joint_states_type arg)
  {
    msg_.joint_states = std::move(arg);
    return Init_Filter_j_tf(msg_);
  }

private:
  ::sim_msgs::msg::Filter msg_;
};

class Init_Filter_endeffector_pose
{
public:
  explicit Init_Filter_endeffector_pose(::sim_msgs::msg::Filter & msg)
  : msg_(msg)
  {}
  Init_Filter_joint_states endeffector_pose(::sim_msgs::msg::Filter::_endeffector_pose_type arg)
  {
    msg_.endeffector_pose = std::move(arg);
    return Init_Filter_joint_states(msg_);
  }

private:
  ::sim_msgs::msg::Filter msg_;
};

class Init_Filter_joint_currents
{
public:
  Init_Filter_joint_currents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Filter_endeffector_pose joint_currents(::sim_msgs::msg::Filter::_joint_currents_type arg)
  {
    msg_.joint_currents = std::move(arg);
    return Init_Filter_endeffector_pose(msg_);
  }

private:
  ::sim_msgs::msg::Filter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_msgs::msg::Filter>()
{
  return sim_msgs::msg::builder::Init_Filter_joint_currents();
}

}  // namespace sim_msgs

#endif  // SIM_MSGS__MSG__DETAIL__FILTER__BUILDER_HPP_
