// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from slam_toolbox:srv/Clear.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "slam_toolbox/srv/detail/clear__functions.h"
#include "slam_toolbox/srv/detail/clear__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace slam_toolbox
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Clear_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Clear_Request_type_support_ids_t;

static const _Clear_Request_type_support_ids_t _Clear_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Clear_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Clear_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Clear_Request_type_support_symbol_names_t _Clear_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slam_toolbox, srv, Clear_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slam_toolbox, srv, Clear_Request)),
  }
};

typedef struct _Clear_Request_type_support_data_t
{
  void * data[2];
} _Clear_Request_type_support_data_t;

static _Clear_Request_type_support_data_t _Clear_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Clear_Request_message_typesupport_map = {
  2,
  "slam_toolbox",
  &_Clear_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Clear_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Clear_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Clear_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Clear_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &slam_toolbox__srv__Clear_Request__get_type_hash,
  &slam_toolbox__srv__Clear_Request__get_type_description,
  &slam_toolbox__srv__Clear_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace slam_toolbox

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slam_toolbox::srv::Clear_Request>()
{
  return &::slam_toolbox::srv::rosidl_typesupport_cpp::Clear_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, slam_toolbox, srv, Clear_Request)() {
  return get_message_type_support_handle<slam_toolbox::srv::Clear_Request>();
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
// #include "slam_toolbox/srv/detail/clear__functions.h"
// already included above
// #include "slam_toolbox/srv/detail/clear__struct.hpp"
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

namespace slam_toolbox
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Clear_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Clear_Response_type_support_ids_t;

static const _Clear_Response_type_support_ids_t _Clear_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Clear_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Clear_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Clear_Response_type_support_symbol_names_t _Clear_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slam_toolbox, srv, Clear_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slam_toolbox, srv, Clear_Response)),
  }
};

typedef struct _Clear_Response_type_support_data_t
{
  void * data[2];
} _Clear_Response_type_support_data_t;

static _Clear_Response_type_support_data_t _Clear_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Clear_Response_message_typesupport_map = {
  2,
  "slam_toolbox",
  &_Clear_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Clear_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Clear_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Clear_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Clear_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &slam_toolbox__srv__Clear_Response__get_type_hash,
  &slam_toolbox__srv__Clear_Response__get_type_description,
  &slam_toolbox__srv__Clear_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace slam_toolbox

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slam_toolbox::srv::Clear_Response>()
{
  return &::slam_toolbox::srv::rosidl_typesupport_cpp::Clear_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, slam_toolbox, srv, Clear_Response)() {
  return get_message_type_support_handle<slam_toolbox::srv::Clear_Response>();
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
// #include "slam_toolbox/srv/detail/clear__functions.h"
// already included above
// #include "slam_toolbox/srv/detail/clear__struct.hpp"
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

namespace slam_toolbox
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Clear_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Clear_Event_type_support_ids_t;

static const _Clear_Event_type_support_ids_t _Clear_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Clear_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Clear_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Clear_Event_type_support_symbol_names_t _Clear_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slam_toolbox, srv, Clear_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slam_toolbox, srv, Clear_Event)),
  }
};

typedef struct _Clear_Event_type_support_data_t
{
  void * data[2];
} _Clear_Event_type_support_data_t;

static _Clear_Event_type_support_data_t _Clear_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Clear_Event_message_typesupport_map = {
  2,
  "slam_toolbox",
  &_Clear_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Clear_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Clear_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Clear_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Clear_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &slam_toolbox__srv__Clear_Event__get_type_hash,
  &slam_toolbox__srv__Clear_Event__get_type_description,
  &slam_toolbox__srv__Clear_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace slam_toolbox

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slam_toolbox::srv::Clear_Event>()
{
  return &::slam_toolbox::srv::rosidl_typesupport_cpp::Clear_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, slam_toolbox, srv, Clear_Event)() {
  return get_message_type_support_handle<slam_toolbox::srv::Clear_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "slam_toolbox/srv/detail/clear__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace slam_toolbox
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Clear_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Clear_type_support_ids_t;

static const _Clear_type_support_ids_t _Clear_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Clear_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Clear_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Clear_type_support_symbol_names_t _Clear_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slam_toolbox, srv, Clear)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slam_toolbox, srv, Clear)),
  }
};

typedef struct _Clear_type_support_data_t
{
  void * data[2];
} _Clear_type_support_data_t;

static _Clear_type_support_data_t _Clear_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Clear_service_typesupport_map = {
  2,
  "slam_toolbox",
  &_Clear_service_typesupport_ids.typesupport_identifier[0],
  &_Clear_service_typesupport_symbol_names.symbol_name[0],
  &_Clear_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Clear_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Clear_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<slam_toolbox::srv::Clear_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<slam_toolbox::srv::Clear_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<slam_toolbox::srv::Clear_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<slam_toolbox::srv::Clear>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<slam_toolbox::srv::Clear>,
  &slam_toolbox__srv__Clear__get_type_hash,
  &slam_toolbox__srv__Clear__get_type_description,
  &slam_toolbox__srv__Clear__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace slam_toolbox

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<slam_toolbox::srv::Clear>()
{
  return &::slam_toolbox::srv::rosidl_typesupport_cpp::Clear_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, slam_toolbox, srv, Clear)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<slam_toolbox::srv::Clear>();
}

#ifdef __cplusplus
}
#endif
