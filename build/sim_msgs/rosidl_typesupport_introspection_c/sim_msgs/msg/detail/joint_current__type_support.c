// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sim_msgs:msg/JointCurrent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sim_msgs/msg/detail/joint_current__rosidl_typesupport_introspection_c.h"
#include "sim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sim_msgs/msg/detail/joint_current__functions.h"
#include "sim_msgs/msg/detail/joint_current__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `current`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sim_msgs__msg__JointCurrent__init(message_memory);
}

void sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_fini_function(void * message_memory)
{
  sim_msgs__msg__JointCurrent__fini(message_memory);
}

size_t sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__size_function__JointCurrent__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_const_function__JointCurrent__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_function__JointCurrent__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__fetch_function__JointCurrent__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_const_function__JointCurrent__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__assign_function__JointCurrent__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_function__JointCurrent__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__resize_function__JointCurrent__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__size_function__JointCurrent__current(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_const_function__JointCurrent__current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_function__JointCurrent__current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__fetch_function__JointCurrent__current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_const_function__JointCurrent__current(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__assign_function__JointCurrent__current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_function__JointCurrent__current(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__resize_function__JointCurrent__current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_msgs__msg__JointCurrent, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_msgs__msg__JointCurrent, name),  // bytes offset in struct
    NULL,  // default value
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__size_function__JointCurrent__name,  // size() function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_const_function__JointCurrent__name,  // get_const(index) function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_function__JointCurrent__name,  // get(index) function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__fetch_function__JointCurrent__name,  // fetch(index, &value) function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__assign_function__JointCurrent__name,  // assign(index, value) function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__resize_function__JointCurrent__name  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_msgs__msg__JointCurrent, current),  // bytes offset in struct
    NULL,  // default value
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__size_function__JointCurrent__current,  // size() function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_const_function__JointCurrent__current,  // get_const(index) function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__get_function__JointCurrent__current,  // get(index) function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__fetch_function__JointCurrent__current,  // fetch(index, &value) function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__assign_function__JointCurrent__current,  // assign(index, value) function pointer
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__resize_function__JointCurrent__current  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_message_members = {
  "sim_msgs__msg",  // message namespace
  "JointCurrent",  // message name
  3,  // number of fields
  sizeof(sim_msgs__msg__JointCurrent),
  sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_message_member_array,  // message members
  sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_init_function,  // function to initialize message memory (memory has to be allocated)
  sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_message_type_support_handle = {
  0,
  &sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sim_msgs, msg, JointCurrent)() {
  sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_message_type_support_handle.typesupport_identifier) {
    sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sim_msgs__msg__JointCurrent__rosidl_typesupport_introspection_c__JointCurrent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
