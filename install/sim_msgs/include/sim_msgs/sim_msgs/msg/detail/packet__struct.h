// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_msgs:msg/Packet.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__PACKET__STRUCT_H_
#define SIM_MSGS__MSG__DETAIL__PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Packet in the package sim_msgs.
typedef struct sim_msgs__msg__Packet
{
  uint8_t device_id;
  uint8_t packet_id;
  rosidl_runtime_c__uint8__Sequence data;
} sim_msgs__msg__Packet;

// Struct for a sequence of sim_msgs__msg__Packet.
typedef struct sim_msgs__msg__Packet__Sequence
{
  sim_msgs__msg__Packet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_msgs__msg__Packet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_MSGS__MSG__DETAIL__PACKET__STRUCT_H_
