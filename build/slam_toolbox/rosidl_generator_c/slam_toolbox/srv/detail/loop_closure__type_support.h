// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from slam_toolbox:srv/LoopClosure.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/srv/loop_closure.h"


#ifndef SLAM_TOOLBOX__SRV__DETAIL__LOOP_CLOSURE__TYPE_SUPPORT_H_
#define SLAM_TOOLBOX__SRV__DETAIL__LOOP_CLOSURE__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "slam_toolbox/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  slam_toolbox,
  srv,
  LoopClosure_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  slam_toolbox,
  srv,
  LoopClosure_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  slam_toolbox,
  srv,
  LoopClosure_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  slam_toolbox,
  srv,
  LoopClosure
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  slam_toolbox,
  srv,
  LoopClosure
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  slam_toolbox,
  srv,
  LoopClosure
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__SRV__DETAIL__LOOP_CLOSURE__TYPE_SUPPORT_H_
