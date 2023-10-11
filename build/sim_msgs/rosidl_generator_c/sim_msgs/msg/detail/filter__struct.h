// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_msgs:msg/Filter.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__FILTER__STRUCT_H_
#define SIM_MSGS__MSG__DETAIL__FILTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_currents'
#include "sim_msgs/msg/detail/joint_current__struct.h"
// Member 'endeffector_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__struct.h"
// Member 'j_tf'
#include "tf2_msgs/msg/detail/tf_message__struct.h"

/// Struct defined in msg/Filter in the package sim_msgs.
typedef struct sim_msgs__msg__Filter
{
  sim_msgs__msg__JointCurrent joint_currents;
  geometry_msgs__msg__PoseStamped endeffector_pose;
  sensor_msgs__msg__JointState joint_states;
  tf2_msgs__msg__TFMessage j_tf;
} sim_msgs__msg__Filter;

// Struct for a sequence of sim_msgs__msg__Filter.
typedef struct sim_msgs__msg__Filter__Sequence
{
  sim_msgs__msg__Filter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_msgs__msg__Filter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_MSGS__MSG__DETAIL__FILTER__STRUCT_H_
