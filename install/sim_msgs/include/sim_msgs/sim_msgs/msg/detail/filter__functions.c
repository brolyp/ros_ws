// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_msgs:msg/Filter.idl
// generated code does not contain a copyright notice
#include "sim_msgs/msg/detail/filter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_currents`
#include "sim_msgs/msg/detail/joint_current__functions.h"
// Member `endeffector_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `joint_states`
#include "sensor_msgs/msg/detail/joint_state__functions.h"
// Member `j_tf`
#include "tf2_msgs/msg/detail/tf_message__functions.h"

bool
sim_msgs__msg__Filter__init(sim_msgs__msg__Filter * msg)
{
  if (!msg) {
    return false;
  }
  // joint_currents
  if (!sim_msgs__msg__JointCurrent__init(&msg->joint_currents)) {
    sim_msgs__msg__Filter__fini(msg);
    return false;
  }
  // endeffector_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->endeffector_pose)) {
    sim_msgs__msg__Filter__fini(msg);
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__init(&msg->joint_states)) {
    sim_msgs__msg__Filter__fini(msg);
    return false;
  }
  // j_tf
  if (!tf2_msgs__msg__TFMessage__init(&msg->j_tf)) {
    sim_msgs__msg__Filter__fini(msg);
    return false;
  }
  return true;
}

void
sim_msgs__msg__Filter__fini(sim_msgs__msg__Filter * msg)
{
  if (!msg) {
    return;
  }
  // joint_currents
  sim_msgs__msg__JointCurrent__fini(&msg->joint_currents);
  // endeffector_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->endeffector_pose);
  // joint_states
  sensor_msgs__msg__JointState__fini(&msg->joint_states);
  // j_tf
  tf2_msgs__msg__TFMessage__fini(&msg->j_tf);
}

bool
sim_msgs__msg__Filter__are_equal(const sim_msgs__msg__Filter * lhs, const sim_msgs__msg__Filter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_currents
  if (!sim_msgs__msg__JointCurrent__are_equal(
      &(lhs->joint_currents), &(rhs->joint_currents)))
  {
    return false;
  }
  // endeffector_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->endeffector_pose), &(rhs->endeffector_pose)))
  {
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->joint_states), &(rhs->joint_states)))
  {
    return false;
  }
  // j_tf
  if (!tf2_msgs__msg__TFMessage__are_equal(
      &(lhs->j_tf), &(rhs->j_tf)))
  {
    return false;
  }
  return true;
}

bool
sim_msgs__msg__Filter__copy(
  const sim_msgs__msg__Filter * input,
  sim_msgs__msg__Filter * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_currents
  if (!sim_msgs__msg__JointCurrent__copy(
      &(input->joint_currents), &(output->joint_currents)))
  {
    return false;
  }
  // endeffector_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->endeffector_pose), &(output->endeffector_pose)))
  {
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__copy(
      &(input->joint_states), &(output->joint_states)))
  {
    return false;
  }
  // j_tf
  if (!tf2_msgs__msg__TFMessage__copy(
      &(input->j_tf), &(output->j_tf)))
  {
    return false;
  }
  return true;
}

sim_msgs__msg__Filter *
sim_msgs__msg__Filter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_msgs__msg__Filter * msg = (sim_msgs__msg__Filter *)allocator.allocate(sizeof(sim_msgs__msg__Filter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_msgs__msg__Filter));
  bool success = sim_msgs__msg__Filter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_msgs__msg__Filter__destroy(sim_msgs__msg__Filter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_msgs__msg__Filter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_msgs__msg__Filter__Sequence__init(sim_msgs__msg__Filter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_msgs__msg__Filter * data = NULL;

  if (size) {
    data = (sim_msgs__msg__Filter *)allocator.zero_allocate(size, sizeof(sim_msgs__msg__Filter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_msgs__msg__Filter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_msgs__msg__Filter__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sim_msgs__msg__Filter__Sequence__fini(sim_msgs__msg__Filter__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sim_msgs__msg__Filter__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sim_msgs__msg__Filter__Sequence *
sim_msgs__msg__Filter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_msgs__msg__Filter__Sequence * array = (sim_msgs__msg__Filter__Sequence *)allocator.allocate(sizeof(sim_msgs__msg__Filter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_msgs__msg__Filter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_msgs__msg__Filter__Sequence__destroy(sim_msgs__msg__Filter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_msgs__msg__Filter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_msgs__msg__Filter__Sequence__are_equal(const sim_msgs__msg__Filter__Sequence * lhs, const sim_msgs__msg__Filter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_msgs__msg__Filter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_msgs__msg__Filter__Sequence__copy(
  const sim_msgs__msg__Filter__Sequence * input,
  sim_msgs__msg__Filter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_msgs__msg__Filter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_msgs__msg__Filter * data =
      (sim_msgs__msg__Filter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_msgs__msg__Filter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_msgs__msg__Filter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_msgs__msg__Filter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
