// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from stonefish_ros2:srv/SonarSettings2.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "stonefish_ros2/srv/detail/sonar_settings2__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace stonefish_ros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SonarSettings2_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SonarSettings2_Request_type_support_ids_t;

static const _SonarSettings2_Request_type_support_ids_t _SonarSettings2_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SonarSettings2_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SonarSettings2_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SonarSettings2_Request_type_support_symbol_names_t _SonarSettings2_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stonefish_ros2, srv, SonarSettings2_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stonefish_ros2, srv, SonarSettings2_Request)),
  }
};

typedef struct _SonarSettings2_Request_type_support_data_t
{
  void * data[2];
} _SonarSettings2_Request_type_support_data_t;

static _SonarSettings2_Request_type_support_data_t _SonarSettings2_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SonarSettings2_Request_message_typesupport_map = {
  2,
  "stonefish_ros2",
  &_SonarSettings2_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SonarSettings2_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SonarSettings2_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SonarSettings2_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SonarSettings2_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace stonefish_ros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<stonefish_ros2::srv::SonarSettings2_Request>()
{
  return &::stonefish_ros2::srv::rosidl_typesupport_cpp::SonarSettings2_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, stonefish_ros2, srv, SonarSettings2_Request)() {
  return get_message_type_support_handle<stonefish_ros2::srv::SonarSettings2_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings2__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace stonefish_ros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SonarSettings2_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SonarSettings2_Response_type_support_ids_t;

static const _SonarSettings2_Response_type_support_ids_t _SonarSettings2_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SonarSettings2_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SonarSettings2_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SonarSettings2_Response_type_support_symbol_names_t _SonarSettings2_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stonefish_ros2, srv, SonarSettings2_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stonefish_ros2, srv, SonarSettings2_Response)),
  }
};

typedef struct _SonarSettings2_Response_type_support_data_t
{
  void * data[2];
} _SonarSettings2_Response_type_support_data_t;

static _SonarSettings2_Response_type_support_data_t _SonarSettings2_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SonarSettings2_Response_message_typesupport_map = {
  2,
  "stonefish_ros2",
  &_SonarSettings2_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SonarSettings2_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SonarSettings2_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SonarSettings2_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SonarSettings2_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace stonefish_ros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<stonefish_ros2::srv::SonarSettings2_Response>()
{
  return &::stonefish_ros2::srv::rosidl_typesupport_cpp::SonarSettings2_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, stonefish_ros2, srv, SonarSettings2_Response)() {
  return get_message_type_support_handle<stonefish_ros2::srv::SonarSettings2_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings2__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace stonefish_ros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SonarSettings2_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SonarSettings2_type_support_ids_t;

static const _SonarSettings2_type_support_ids_t _SonarSettings2_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SonarSettings2_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SonarSettings2_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SonarSettings2_type_support_symbol_names_t _SonarSettings2_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stonefish_ros2, srv, SonarSettings2)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stonefish_ros2, srv, SonarSettings2)),
  }
};

typedef struct _SonarSettings2_type_support_data_t
{
  void * data[2];
} _SonarSettings2_type_support_data_t;

static _SonarSettings2_type_support_data_t _SonarSettings2_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SonarSettings2_service_typesupport_map = {
  2,
  "stonefish_ros2",
  &_SonarSettings2_service_typesupport_ids.typesupport_identifier[0],
  &_SonarSettings2_service_typesupport_symbol_names.symbol_name[0],
  &_SonarSettings2_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SonarSettings2_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SonarSettings2_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace stonefish_ros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<stonefish_ros2::srv::SonarSettings2>()
{
  return &::stonefish_ros2::srv::rosidl_typesupport_cpp::SonarSettings2_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
