// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_msgs:msg/Packet.idl
// generated code does not contain a copyright notice
#include "sim_msgs/msg/detail/packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sim_msgs__msg__Packet__init(sim_msgs__msg__Packet * msg)
{
  if (!msg) {
    return false;
  }
  // device_id
  // packet_id
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    sim_msgs__msg__Packet__fini(msg);
    return false;
  }
  return true;
}

void
sim_msgs__msg__Packet__fini(sim_msgs__msg__Packet * msg)
{
  if (!msg) {
    return;
  }
  // device_id
  // packet_id
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
sim_msgs__msg__Packet__are_equal(const sim_msgs__msg__Packet * lhs, const sim_msgs__msg__Packet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // packet_id
  if (lhs->packet_id != rhs->packet_id) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
sim_msgs__msg__Packet__copy(
  const sim_msgs__msg__Packet * input,
  sim_msgs__msg__Packet * output)
{
  if (!input || !output) {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // packet_id
  output->packet_id = input->packet_id;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

sim_msgs__msg__Packet *
sim_msgs__msg__Packet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_msgs__msg__Packet * msg = (sim_msgs__msg__Packet *)allocator.allocate(sizeof(sim_msgs__msg__Packet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_msgs__msg__Packet));
  bool success = sim_msgs__msg__Packet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_msgs__msg__Packet__destroy(sim_msgs__msg__Packet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_msgs__msg__Packet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_msgs__msg__Packet__Sequence__init(sim_msgs__msg__Packet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_msgs__msg__Packet * data = NULL;

  if (size) {
    data = (sim_msgs__msg__Packet *)allocator.zero_allocate(size, sizeof(sim_msgs__msg__Packet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_msgs__msg__Packet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_msgs__msg__Packet__fini(&data[i - 1]);
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
sim_msgs__msg__Packet__Sequence__fini(sim_msgs__msg__Packet__Sequence * array)
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
      sim_msgs__msg__Packet__fini(&array->data[i]);
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

sim_msgs__msg__Packet__Sequence *
sim_msgs__msg__Packet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_msgs__msg__Packet__Sequence * array = (sim_msgs__msg__Packet__Sequence *)allocator.allocate(sizeof(sim_msgs__msg__Packet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_msgs__msg__Packet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_msgs__msg__Packet__Sequence__destroy(sim_msgs__msg__Packet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_msgs__msg__Packet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_msgs__msg__Packet__Sequence__are_equal(const sim_msgs__msg__Packet__Sequence * lhs, const sim_msgs__msg__Packet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_msgs__msg__Packet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_msgs__msg__Packet__Sequence__copy(
  const sim_msgs__msg__Packet__Sequence * input,
  sim_msgs__msg__Packet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_msgs__msg__Packet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_msgs__msg__Packet * data =
      (sim_msgs__msg__Packet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_msgs__msg__Packet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_msgs__msg__Packet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_msgs__msg__Packet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
