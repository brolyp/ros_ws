// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sim_msgs:msg/JointCurrent.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__JOINT_CURRENT__FUNCTIONS_H_
#define SIM_MSGS__MSG__DETAIL__JOINT_CURRENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sim_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sim_msgs/msg/detail/joint_current__struct.h"

/// Initialize msg/JointCurrent message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sim_msgs__msg__JointCurrent
 * )) before or use
 * sim_msgs__msg__JointCurrent__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__JointCurrent__init(sim_msgs__msg__JointCurrent * msg);

/// Finalize msg/JointCurrent message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
void
sim_msgs__msg__JointCurrent__fini(sim_msgs__msg__JointCurrent * msg);

/// Create msg/JointCurrent message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sim_msgs__msg__JointCurrent__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
sim_msgs__msg__JointCurrent *
sim_msgs__msg__JointCurrent__create();

/// Destroy msg/JointCurrent message.
/**
 * It calls
 * sim_msgs__msg__JointCurrent__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
void
sim_msgs__msg__JointCurrent__destroy(sim_msgs__msg__JointCurrent * msg);

/// Check for msg/JointCurrent message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__JointCurrent__are_equal(const sim_msgs__msg__JointCurrent * lhs, const sim_msgs__msg__JointCurrent * rhs);

/// Copy a msg/JointCurrent message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__JointCurrent__copy(
  const sim_msgs__msg__JointCurrent * input,
  sim_msgs__msg__JointCurrent * output);

/// Initialize array of msg/JointCurrent messages.
/**
 * It allocates the memory for the number of elements and calls
 * sim_msgs__msg__JointCurrent__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__JointCurrent__Sequence__init(sim_msgs__msg__JointCurrent__Sequence * array, size_t size);

/// Finalize array of msg/JointCurrent messages.
/**
 * It calls
 * sim_msgs__msg__JointCurrent__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
void
sim_msgs__msg__JointCurrent__Sequence__fini(sim_msgs__msg__JointCurrent__Sequence * array);

/// Create array of msg/JointCurrent messages.
/**
 * It allocates the memory for the array and calls
 * sim_msgs__msg__JointCurrent__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
sim_msgs__msg__JointCurrent__Sequence *
sim_msgs__msg__JointCurrent__Sequence__create(size_t size);

/// Destroy array of msg/JointCurrent messages.
/**
 * It calls
 * sim_msgs__msg__JointCurrent__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
void
sim_msgs__msg__JointCurrent__Sequence__destroy(sim_msgs__msg__JointCurrent__Sequence * array);

/// Check for msg/JointCurrent message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__JointCurrent__Sequence__are_equal(const sim_msgs__msg__JointCurrent__Sequence * lhs, const sim_msgs__msg__JointCurrent__Sequence * rhs);

/// Copy an array of msg/JointCurrent messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__JointCurrent__Sequence__copy(
  const sim_msgs__msg__JointCurrent__Sequence * input,
  sim_msgs__msg__JointCurrent__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIM_MSGS__MSG__DETAIL__JOINT_CURRENT__FUNCTIONS_H_
