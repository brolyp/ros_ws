// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_msgs:msg/JointCurrent.idl
// generated code does not contain a copyright notice
#include "sim_msgs/msg/detail/joint_current__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `current`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sim_msgs__msg__JointCurrent__init(sim_msgs__msg__JointCurrent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sim_msgs__msg__JointCurrent__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    sim_msgs__msg__JointCurrent__fini(msg);
    return false;
  }
  // current
  if (!rosidl_runtime_c__double__Sequence__init(&msg->current, 0)) {
    sim_msgs__msg__JointCurrent__fini(msg);
    return false;
  }
  return true;
}

void
sim_msgs__msg__JointCurrent__fini(sim_msgs__msg__JointCurrent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // current
  rosidl_runtime_c__double__Sequence__fini(&msg->current);
}

bool
sim_msgs__msg__JointCurrent__are_equal(const sim_msgs__msg__JointCurrent * lhs, const sim_msgs__msg__JointCurrent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // current
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->current), &(rhs->current)))
  {
    return false;
  }
  return true;
}

bool
sim_msgs__msg__JointCurrent__copy(
  const sim_msgs__msg__JointCurrent * input,
  sim_msgs__msg__JointCurrent * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // current
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->current), &(output->current)))
  {
    return false;
  }
  return true;
}

sim_msgs__msg__JointCurrent *
sim_msgs__msg__JointCurrent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_msgs__msg__JointCurrent * msg = (sim_msgs__msg__JointCurrent *)allocator.allocate(sizeof(sim_msgs__msg__JointCurrent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_msgs__msg__JointCurrent));
  bool success = sim_msgs__msg__JointCurrent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_msgs__msg__JointCurrent__destroy(sim_msgs__msg__JointCurrent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_msgs__msg__JointCurrent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_msgs__msg__JointCurrent__Sequence__init(sim_msgs__msg__JointCurrent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_msgs__msg__JointCurrent * data = NULL;

  if (size) {
    data = (sim_msgs__msg__JointCurrent *)allocator.zero_allocate(size, sizeof(sim_msgs__msg__JointCurrent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_msgs__msg__JointCurrent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_msgs__msg__JointCurrent__fini(&data[i - 1]);
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
sim_msgs__msg__JointCurrent__Sequence__fini(sim_msgs__msg__JointCurrent__Sequence * array)
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
      sim_msgs__msg__JointCurrent__fini(&array->data[i]);
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

sim_msgs__msg__JointCurrent__Sequence *
sim_msgs__msg__JointCurrent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_msgs__msg__JointCurrent__Sequence * array = (sim_msgs__msg__JointCurrent__Sequence *)allocator.allocate(sizeof(sim_msgs__msg__JointCurrent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_msgs__msg__JointCurrent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_msgs__msg__JointCurrent__Sequence__destroy(sim_msgs__msg__JointCurrent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_msgs__msg__JointCurrent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_msgs__msg__JointCurrent__Sequence__are_equal(const sim_msgs__msg__JointCurrent__Sequence * lhs, const sim_msgs__msg__JointCurrent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_msgs__msg__JointCurrent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_msgs__msg__JointCurrent__Sequence__copy(
  const sim_msgs__msg__JointCurrent__Sequence * input,
  sim_msgs__msg__JointCurrent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_msgs__msg__JointCurrent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_msgs__msg__JointCurrent * data =
      (sim_msgs__msg__JointCurrent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_msgs__msg__JointCurrent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_msgs__msg__JointCurrent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_msgs__msg__JointCurrent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
