// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stonefish_ros2:srv/Respawn.idl
// generated code does not contain a copyright notice
#include "stonefish_ros2/srv/detail/respawn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `origin`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
stonefish_ros2__srv__Respawn_Request__init(stonefish_ros2__srv__Respawn_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    stonefish_ros2__srv__Respawn_Request__fini(msg);
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__init(&msg->origin)) {
    stonefish_ros2__srv__Respawn_Request__fini(msg);
    return false;
  }
  return true;
}

void
stonefish_ros2__srv__Respawn_Request__fini(stonefish_ros2__srv__Respawn_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // origin
  geometry_msgs__msg__Pose__fini(&msg->origin);
}

stonefish_ros2__srv__Respawn_Request *
stonefish_ros2__srv__Respawn_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__srv__Respawn_Request * msg = (stonefish_ros2__srv__Respawn_Request *)allocator.allocate(sizeof(stonefish_ros2__srv__Respawn_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stonefish_ros2__srv__Respawn_Request));
  bool success = stonefish_ros2__srv__Respawn_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stonefish_ros2__srv__Respawn_Request__destroy(stonefish_ros2__srv__Respawn_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stonefish_ros2__srv__Respawn_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stonefish_ros2__srv__Respawn_Request__Sequence__init(stonefish_ros2__srv__Respawn_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__srv__Respawn_Request * data = NULL;

  if (size) {
    data = (stonefish_ros2__srv__Respawn_Request *)allocator.zero_allocate(size, sizeof(stonefish_ros2__srv__Respawn_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stonefish_ros2__srv__Respawn_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stonefish_ros2__srv__Respawn_Request__fini(&data[i - 1]);
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
stonefish_ros2__srv__Respawn_Request__Sequence__fini(stonefish_ros2__srv__Respawn_Request__Sequence * array)
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
      stonefish_ros2__srv__Respawn_Request__fini(&array->data[i]);
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

stonefish_ros2__srv__Respawn_Request__Sequence *
stonefish_ros2__srv__Respawn_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__srv__Respawn_Request__Sequence * array = (stonefish_ros2__srv__Respawn_Request__Sequence *)allocator.allocate(sizeof(stonefish_ros2__srv__Respawn_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stonefish_ros2__srv__Respawn_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stonefish_ros2__srv__Respawn_Request__Sequence__destroy(stonefish_ros2__srv__Respawn_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stonefish_ros2__srv__Respawn_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
stonefish_ros2__srv__Respawn_Response__init(stonefish_ros2__srv__Respawn_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    stonefish_ros2__srv__Respawn_Response__fini(msg);
    return false;
  }
  return true;
}

void
stonefish_ros2__srv__Respawn_Response__fini(stonefish_ros2__srv__Respawn_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

stonefish_ros2__srv__Respawn_Response *
stonefish_ros2__srv__Respawn_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__srv__Respawn_Response * msg = (stonefish_ros2__srv__Respawn_Response *)allocator.allocate(sizeof(stonefish_ros2__srv__Respawn_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stonefish_ros2__srv__Respawn_Response));
  bool success = stonefish_ros2__srv__Respawn_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stonefish_ros2__srv__Respawn_Response__destroy(stonefish_ros2__srv__Respawn_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stonefish_ros2__srv__Respawn_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stonefish_ros2__srv__Respawn_Response__Sequence__init(stonefish_ros2__srv__Respawn_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__srv__Respawn_Response * data = NULL;

  if (size) {
    data = (stonefish_ros2__srv__Respawn_Response *)allocator.zero_allocate(size, sizeof(stonefish_ros2__srv__Respawn_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stonefish_ros2__srv__Respawn_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stonefish_ros2__srv__Respawn_Response__fini(&data[i - 1]);
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
stonefish_ros2__srv__Respawn_Response__Sequence__fini(stonefish_ros2__srv__Respawn_Response__Sequence * array)
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
      stonefish_ros2__srv__Respawn_Response__fini(&array->data[i]);
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

stonefish_ros2__srv__Respawn_Response__Sequence *
stonefish_ros2__srv__Respawn_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__srv__Respawn_Response__Sequence * array = (stonefish_ros2__srv__Respawn_Response__Sequence *)allocator.allocate(sizeof(stonefish_ros2__srv__Respawn_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stonefish_ros2__srv__Respawn_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stonefish_ros2__srv__Respawn_Response__Sequence__destroy(stonefish_ros2__srv__Respawn_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stonefish_ros2__srv__Respawn_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
