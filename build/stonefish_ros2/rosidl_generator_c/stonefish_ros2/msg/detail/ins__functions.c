// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stonefish_ros2:msg/INS.idl
// generated code does not contain a copyright notice
#include "stonefish_ros2/msg/detail/ins__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
// Member `pose_variance`
#include "stonefish_ros2/msg/detail/ned_pose__functions.h"
// Member `body_velocity`
// Member `rpy_rate`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
stonefish_ros2__msg__INS__init(stonefish_ros2__msg__INS * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    stonefish_ros2__msg__INS__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // origin_latitude
  // origin_longitude
  // pose
  if (!stonefish_ros2__msg__NEDPose__init(&msg->pose)) {
    stonefish_ros2__msg__INS__fini(msg);
    return false;
  }
  // pose_variance
  if (!stonefish_ros2__msg__NEDPose__init(&msg->pose_variance)) {
    stonefish_ros2__msg__INS__fini(msg);
    return false;
  }
  // altitude
  // body_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->body_velocity)) {
    stonefish_ros2__msg__INS__fini(msg);
    return false;
  }
  // rpy_rate
  if (!geometry_msgs__msg__Vector3__init(&msg->rpy_rate)) {
    stonefish_ros2__msg__INS__fini(msg);
    return false;
  }
  return true;
}

void
stonefish_ros2__msg__INS__fini(stonefish_ros2__msg__INS * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // latitude
  // longitude
  // origin_latitude
  // origin_longitude
  // pose
  stonefish_ros2__msg__NEDPose__fini(&msg->pose);
  // pose_variance
  stonefish_ros2__msg__NEDPose__fini(&msg->pose_variance);
  // altitude
  // body_velocity
  geometry_msgs__msg__Vector3__fini(&msg->body_velocity);
  // rpy_rate
  geometry_msgs__msg__Vector3__fini(&msg->rpy_rate);
}

stonefish_ros2__msg__INS *
stonefish_ros2__msg__INS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__INS * msg = (stonefish_ros2__msg__INS *)allocator.allocate(sizeof(stonefish_ros2__msg__INS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stonefish_ros2__msg__INS));
  bool success = stonefish_ros2__msg__INS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stonefish_ros2__msg__INS__destroy(stonefish_ros2__msg__INS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stonefish_ros2__msg__INS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stonefish_ros2__msg__INS__Sequence__init(stonefish_ros2__msg__INS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__INS * data = NULL;

  if (size) {
    data = (stonefish_ros2__msg__INS *)allocator.zero_allocate(size, sizeof(stonefish_ros2__msg__INS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stonefish_ros2__msg__INS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stonefish_ros2__msg__INS__fini(&data[i - 1]);
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
stonefish_ros2__msg__INS__Sequence__fini(stonefish_ros2__msg__INS__Sequence * array)
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
      stonefish_ros2__msg__INS__fini(&array->data[i]);
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

stonefish_ros2__msg__INS__Sequence *
stonefish_ros2__msg__INS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__INS__Sequence * array = (stonefish_ros2__msg__INS__Sequence *)allocator.allocate(sizeof(stonefish_ros2__msg__INS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stonefish_ros2__msg__INS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stonefish_ros2__msg__INS__Sequence__destroy(stonefish_ros2__msg__INS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stonefish_ros2__msg__INS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
