// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sim_msgs:msg/Filter.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__FILTER__TRAITS_HPP_
#define SIM_MSGS__MSG__DETAIL__FILTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sim_msgs/msg/detail/filter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_currents'
#include "sim_msgs/msg/detail/joint_current__traits.hpp"
// Member 'endeffector_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"
// Member 'j_tf'
#include "tf2_msgs/msg/detail/tf_message__traits.hpp"

namespace sim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Filter & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_currents
  {
    out << "joint_currents: ";
    to_flow_style_yaml(msg.joint_currents, out);
    out << ", ";
  }

  // member: endeffector_pose
  {
    out << "endeffector_pose: ";
    to_flow_style_yaml(msg.endeffector_pose, out);
    out << ", ";
  }

  // member: joint_states
  {
    out << "joint_states: ";
    to_flow_style_yaml(msg.joint_states, out);
    out << ", ";
  }

  // member: j_tf
  {
    out << "j_tf: ";
    to_flow_style_yaml(msg.j_tf, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Filter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_currents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_currents:\n";
    to_block_style_yaml(msg.joint_currents, out, indentation + 2);
  }

  // member: endeffector_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endeffector_pose:\n";
    to_block_style_yaml(msg.endeffector_pose, out, indentation + 2);
  }

  // member: joint_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_states:\n";
    to_block_style_yaml(msg.joint_states, out, indentation + 2);
  }

  // member: j_tf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j_tf:\n";
    to_block_style_yaml(msg.j_tf, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Filter & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sim_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sim_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sim_msgs::msg::Filter & msg,
  std::ostream & out, size_t indentation = 0)
{
  sim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sim_msgs::msg::Filter & msg)
{
  return sim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sim_msgs::msg::Filter>()
{
  return "sim_msgs::msg::Filter";
}

template<>
inline const char * name<sim_msgs::msg::Filter>()
{
  return "sim_msgs/msg/Filter";
}

template<>
struct has_fixed_size<sim_msgs::msg::Filter>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<sensor_msgs::msg::JointState>::value && has_fixed_size<sim_msgs::msg::JointCurrent>::value && has_fixed_size<tf2_msgs::msg::TFMessage>::value> {};

template<>
struct has_bounded_size<sim_msgs::msg::Filter>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<sensor_msgs::msg::JointState>::value && has_bounded_size<sim_msgs::msg::JointCurrent>::value && has_bounded_size<tf2_msgs::msg::TFMessage>::value> {};

template<>
struct is_message<sim_msgs::msg::Filter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIM_MSGS__MSG__DETAIL__FILTER__TRAITS_HPP_
