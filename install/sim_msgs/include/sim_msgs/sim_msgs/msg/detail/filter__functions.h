// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sim_msgs:msg/Filter.idl
// generated code does not contain a copyright notice

#ifndef SIM_MSGS__MSG__DETAIL__FILTER__FUNCTIONS_H_
#define SIM_MSGS__MSG__DETAIL__FILTER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sim_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sim_msgs/msg/detail/filter__struct.h"

/// Initialize msg/Filter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sim_msgs__msg__Filter
 * )) before or use
 * sim_msgs__msg__Filter__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__Filter__init(sim_msgs__msg__Filter * msg);

/// Finalize msg/Filter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
void
sim_msgs__msg__Filter__fini(sim_msgs__msg__Filter * msg);

/// Create msg/Filter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sim_msgs__msg__Filter__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
sim_msgs__msg__Filter *
sim_msgs__msg__Filter__create();

/// Destroy msg/Filter message.
/**
 * It calls
 * sim_msgs__msg__Filter__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
void
sim_msgs__msg__Filter__destroy(sim_msgs__msg__Filter * msg);

/// Check for msg/Filter message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__Filter__are_equal(const sim_msgs__msg__Filter * lhs, const sim_msgs__msg__Filter * rhs);

/// Copy a msg/Filter message.
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
sim_msgs__msg__Filter__copy(
  const sim_msgs__msg__Filter * input,
  sim_msgs__msg__Filter * output);

/// Initialize array of msg/Filter messages.
/**
 * It allocates the memory for the number of elements and calls
 * sim_msgs__msg__Filter__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__Filter__Sequence__init(sim_msgs__msg__Filter__Sequence * array, size_t size);

/// Finalize array of msg/Filter messages.
/**
 * It calls
 * sim_msgs__msg__Filter__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
void
sim_msgs__msg__Filter__Sequence__fini(sim_msgs__msg__Filter__Sequence * array);

/// Create array of msg/Filter messages.
/**
 * It allocates the memory for the array and calls
 * sim_msgs__msg__Filter__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
sim_msgs__msg__Filter__Sequence *
sim_msgs__msg__Filter__Sequence__create(size_t size);

/// Destroy array of msg/Filter messages.
/**
 * It calls
 * sim_msgs__msg__Filter__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
void
sim_msgs__msg__Filter__Sequence__destroy(sim_msgs__msg__Filter__Sequence * array);

/// Check for msg/Filter message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_msgs
bool
sim_msgs__msg__Filter__Sequence__are_equal(const sim_msgs__msg__Filter__Sequence * lhs, const sim_msgs__msg__Filter__Sequence * rhs);

/// Copy an array of msg/Filter messages.
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
sim_msgs__msg__Filter__Sequence__copy(
  const sim_msgs__msg__Filter__Sequence * input,
  sim_msgs__msg__Filter__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIM_MSGS__MSG__DETAIL__FILTER__FUNCTIONS_H_
