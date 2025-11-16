// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:srv/SaveMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/srv/save_map.h"


#ifndef SLAM_TOOLBOX__SRV__DETAIL__SAVE_MAP__STRUCT_H_
#define SLAM_TOOLBOX__SRV__DETAIL__SAVE_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/SaveMap in the package slam_toolbox.
typedef struct slam_toolbox__srv__SaveMap_Request
{
  std_msgs__msg__String name;
} slam_toolbox__srv__SaveMap_Request;

// Struct for a sequence of slam_toolbox__srv__SaveMap_Request.
typedef struct slam_toolbox__srv__SaveMap_Request__Sequence
{
  slam_toolbox__srv__SaveMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__srv__SaveMap_Request__Sequence;

// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  slam_toolbox__srv__SaveMap_Response__RESULT_SUCCESS = 0
};

/// Constant 'RESULT_NO_MAP_RECEIEVD'.
enum
{
  slam_toolbox__srv__SaveMap_Response__RESULT_NO_MAP_RECEIEVD = 1
};

/// Constant 'RESULT_UNDEFINED_FAILURE'.
enum
{
  slam_toolbox__srv__SaveMap_Response__RESULT_UNDEFINED_FAILURE = 255
};

/// Struct defined in srv/SaveMap in the package slam_toolbox.
typedef struct slam_toolbox__srv__SaveMap_Response
{
  uint8_t result;
} slam_toolbox__srv__SaveMap_Response;

// Struct for a sequence of slam_toolbox__srv__SaveMap_Response.
typedef struct slam_toolbox__srv__SaveMap_Response__Sequence
{
  slam_toolbox__srv__SaveMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__srv__SaveMap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  slam_toolbox__srv__SaveMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  slam_toolbox__srv__SaveMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SaveMap in the package slam_toolbox.
typedef struct slam_toolbox__srv__SaveMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  slam_toolbox__srv__SaveMap_Request__Sequence request;
  slam_toolbox__srv__SaveMap_Response__Sequence response;
} slam_toolbox__srv__SaveMap_Event;

// Struct for a sequence of slam_toolbox__srv__SaveMap_Event.
typedef struct slam_toolbox__srv__SaveMap_Event__Sequence
{
  slam_toolbox__srv__SaveMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__srv__SaveMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__SRV__DETAIL__SAVE_MAP__STRUCT_H_
