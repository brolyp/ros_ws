// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sim_msgs:msg/Filter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sim_msgs/msg/detail/filter__rosidl_typesupport_introspection_c.h"
#include "sim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sim_msgs/msg/detail/filter__functions.h"
#include "sim_msgs/msg/detail/filter__struct.h"


// Include directives for member types
// Member `joint_currents`
#include "sim_msgs/msg/joint_current.h"
// Member `joint_currents`
#include "sim_msgs/msg/detail/joint_current__rosidl_typesupport_introspection_c.h"
// Member `endeffector_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `endeffector_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `joint_states`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_states`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
// Member `j_tf`
#include "tf2_msgs/msg/tf_message.h"
// Member `j_tf`
#include "tf2_msgs/msg/detail/tf_message__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sim_msgs__msg__Filter__init(message_memory);
}

void sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_fini_function(void * message_memory)
{
  sim_msgs__msg__Filter__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_member_array[4] = {
  {
    "joint_currents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_msgs__msg__Filter, joint_currents),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "endeffector_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_msgs__msg__Filter, endeffector_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_msgs__msg__Filter, joint_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "j_tf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_msgs__msg__Filter, j_tf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_members = {
  "sim_msgs__msg",  // message namespace
  "Filter",  // message name
  4,  // number of fields
  sizeof(sim_msgs__msg__Filter),
  sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_member_array,  // message members
  sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_init_function,  // function to initialize message memory (memory has to be allocated)
  sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_type_support_handle = {
  0,
  &sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sim_msgs, msg, Filter)() {
  sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sim_msgs, msg, JointCurrent)();
  sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_msgs, msg, TFMessage)();
  if (!sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_type_support_handle.typesupport_identifier) {
    sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sim_msgs__msg__Filter__rosidl_typesupport_introspection_c__Filter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
