// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stonefish_ros2:msg/DVLBeam.idl
// generated code does not contain a copyright notice

#ifndef STONEFISH_ROS2__MSG__DETAIL__DVL_BEAM__FUNCTIONS_H_
#define STONEFISH_ROS2__MSG__DETAIL__DVL_BEAM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stonefish_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "stonefish_ros2/msg/detail/dvl_beam__struct.h"

/// Initialize msg/DVLBeam message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stonefish_ros2__msg__DVLBeam
 * )) before or use
 * stonefish_ros2__msg__DVLBeam__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
bool
stonefish_ros2__msg__DVLBeam__init(stonefish_ros2__msg__DVLBeam * msg);

/// Finalize msg/DVLBeam message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
void
stonefish_ros2__msg__DVLBeam__fini(stonefish_ros2__msg__DVLBeam * msg);

/// Create msg/DVLBeam message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stonefish_ros2__msg__DVLBeam__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
stonefish_ros2__msg__DVLBeam *
stonefish_ros2__msg__DVLBeam__create();

/// Destroy msg/DVLBeam message.
/**
 * It calls
 * stonefish_ros2__msg__DVLBeam__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
void
stonefish_ros2__msg__DVLBeam__destroy(stonefish_ros2__msg__DVLBeam * msg);


/// Initialize array of msg/DVLBeam messages.
/**
 * It allocates the memory for the number of elements and calls
 * stonefish_ros2__msg__DVLBeam__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
bool
stonefish_ros2__msg__DVLBeam__Sequence__init(stonefish_ros2__msg__DVLBeam__Sequence * array, size_t size);

/// Finalize array of msg/DVLBeam messages.
/**
 * It calls
 * stonefish_ros2__msg__DVLBeam__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
void
stonefish_ros2__msg__DVLBeam__Sequence__fini(stonefish_ros2__msg__DVLBeam__Sequence * array);

/// Create array of msg/DVLBeam messages.
/**
 * It allocates the memory for the array and calls
 * stonefish_ros2__msg__DVLBeam__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
stonefish_ros2__msg__DVLBeam__Sequence *
stonefish_ros2__msg__DVLBeam__Sequence__create(size_t size);

/// Destroy array of msg/DVLBeam messages.
/**
 * It calls
 * stonefish_ros2__msg__DVLBeam__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
void
stonefish_ros2__msg__DVLBeam__Sequence__destroy(stonefish_ros2__msg__DVLBeam__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // STONEFISH_ROS2__MSG__DETAIL__DVL_BEAM__FUNCTIONS_H_
