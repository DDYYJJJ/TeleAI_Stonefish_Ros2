// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stonefish_ros2:msg/ThrusterState.idl
// generated code does not contain a copyright notice
#include "stonefish_ros2/msg/detail/thruster_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `setpoint`
// Member `rpm`
// Member `thrust`
// Member `torque`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
stonefish_ros2__msg__ThrusterState__init(stonefish_ros2__msg__ThrusterState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    stonefish_ros2__msg__ThrusterState__fini(msg);
    return false;
  }
  // setpoint
  if (!rosidl_runtime_c__double__Sequence__init(&msg->setpoint, 0)) {
    stonefish_ros2__msg__ThrusterState__fini(msg);
    return false;
  }
  // rpm
  if (!rosidl_runtime_c__double__Sequence__init(&msg->rpm, 0)) {
    stonefish_ros2__msg__ThrusterState__fini(msg);
    return false;
  }
  // thrust
  if (!rosidl_runtime_c__double__Sequence__init(&msg->thrust, 0)) {
    stonefish_ros2__msg__ThrusterState__fini(msg);
    return false;
  }
  // torque
  if (!rosidl_runtime_c__double__Sequence__init(&msg->torque, 0)) {
    stonefish_ros2__msg__ThrusterState__fini(msg);
    return false;
  }
  return true;
}

void
stonefish_ros2__msg__ThrusterState__fini(stonefish_ros2__msg__ThrusterState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // setpoint
  rosidl_runtime_c__double__Sequence__fini(&msg->setpoint);
  // rpm
  rosidl_runtime_c__double__Sequence__fini(&msg->rpm);
  // thrust
  rosidl_runtime_c__double__Sequence__fini(&msg->thrust);
  // torque
  rosidl_runtime_c__double__Sequence__fini(&msg->torque);
}

stonefish_ros2__msg__ThrusterState *
stonefish_ros2__msg__ThrusterState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__ThrusterState * msg = (stonefish_ros2__msg__ThrusterState *)allocator.allocate(sizeof(stonefish_ros2__msg__ThrusterState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stonefish_ros2__msg__ThrusterState));
  bool success = stonefish_ros2__msg__ThrusterState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stonefish_ros2__msg__ThrusterState__destroy(stonefish_ros2__msg__ThrusterState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stonefish_ros2__msg__ThrusterState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stonefish_ros2__msg__ThrusterState__Sequence__init(stonefish_ros2__msg__ThrusterState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__ThrusterState * data = NULL;

  if (size) {
    data = (stonefish_ros2__msg__ThrusterState *)allocator.zero_allocate(size, sizeof(stonefish_ros2__msg__ThrusterState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stonefish_ros2__msg__ThrusterState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stonefish_ros2__msg__ThrusterState__fini(&data[i - 1]);
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
stonefish_ros2__msg__ThrusterState__Sequence__fini(stonefish_ros2__msg__ThrusterState__Sequence * array)
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
      stonefish_ros2__msg__ThrusterState__fini(&array->data[i]);
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

stonefish_ros2__msg__ThrusterState__Sequence *
stonefish_ros2__msg__ThrusterState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__ThrusterState__Sequence * array = (stonefish_ros2__msg__ThrusterState__Sequence *)allocator.allocate(sizeof(stonefish_ros2__msg__ThrusterState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stonefish_ros2__msg__ThrusterState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stonefish_ros2__msg__ThrusterState__Sequence__destroy(stonefish_ros2__msg__ThrusterState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stonefish_ros2__msg__ThrusterState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
