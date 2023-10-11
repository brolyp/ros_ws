// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_msgs:msg/JointTorque.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__JOINT_TORQUE__STRUCT_H_
#define SIM_MSGS__MSG__DETAIL__JOINT_TORQUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'torque'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointTorque in the package sim_msgs.
typedef struct sim_msgs__msg__JointTorque
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence torque;
} sim_msgs__msg__JointTorque;

// Struct for a sequence of sim_msgs__msg__JointTorque.
typedef struct sim_msgs__msg__JointTorque__Sequence
{
  sim_msgs__msg__JointTorque * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_msgs__msg__JointTorque__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_MSGS__MSG__DETAIL__JOINT_TORQUE__STRUCT_H_
