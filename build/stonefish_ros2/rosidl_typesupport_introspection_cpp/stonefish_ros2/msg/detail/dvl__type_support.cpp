// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from stonefish_ros2:msg/DVL.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "stonefish_ros2/msg/detail/dvl__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace stonefish_ros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DVL_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) stonefish_ros2::msg::DVL(_init);
}

void DVL_fini_function(void * message_memory)
{
  auto typed_message = static_cast<stonefish_ros2::msg::DVL *>(message_memory);
  typed_message->~DVL();
}

size_t size_function__DVL__velocity_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__DVL__velocity_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__DVL__velocity_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

size_t size_function__DVL__beams(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<stonefish_ros2::msg::DVLBeam> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DVL__beams(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<stonefish_ros2::msg::DVLBeam> *>(untyped_member);
  return &member[index];
}

void * get_function__DVL__beams(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<stonefish_ros2::msg::DVLBeam> *>(untyped_member);
  return &member[index];
}

void resize_function__DVL__beams(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<stonefish_ros2::msg::DVLBeam> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DVL_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::DVL, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::DVL, velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::DVL, velocity_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__DVL__velocity_covariance,  // size() function pointer
    get_const_function__DVL__velocity_covariance,  // get_const(index) function pointer
    get_function__DVL__velocity_covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "altitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::DVL, altitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "beams",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<stonefish_ros2::msg::DVLBeam>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::DVL, beams),  // bytes offset in struct
    nullptr,  // default value
    size_function__DVL__beams,  // size() function pointer
    get_const_function__DVL__beams,  // get_const(index) function pointer
    get_function__DVL__beams,  // get(index) function pointer
    resize_function__DVL__beams  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DVL_message_members = {
  "stonefish_ros2::msg",  // message namespace
  "DVL",  // message name
  5,  // number of fields
  sizeof(stonefish_ros2::msg::DVL),
  DVL_message_member_array,  // message members
  DVL_init_function,  // function to initialize message memory (memory has to be allocated)
  DVL_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DVL_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DVL_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace stonefish_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<stonefish_ros2::msg::DVL>()
{
  return &::stonefish_ros2::msg::rosidl_typesupport_introspection_cpp::DVL_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stonefish_ros2, msg, DVL)() {
  return &::stonefish_ros2::msg::rosidl_typesupport_introspection_cpp::DVL_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
