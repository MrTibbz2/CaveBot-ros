// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:srv/ToggleInteractive.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/srv/toggle_interactive.hpp"


#ifndef SLAM_TOOLBOX__SRV__DETAIL__TOGGLE_INTERACTIVE__BUILDER_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__TOGGLE_INTERACTIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slam_toolbox/srv/detail/toggle_interactive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slam_toolbox
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::ToggleInteractive_Request>()
{
  return ::slam_toolbox::srv::ToggleInteractive_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace slam_toolbox


namespace slam_toolbox
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::ToggleInteractive_Response>()
{
  return ::slam_toolbox::srv::ToggleInteractive_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace slam_toolbox


namespace slam_toolbox
{

namespace srv
{

namespace builder
{

class Init_ToggleInteractive_Event_response
{
public:
  explicit Init_ToggleInteractive_Event_response(::slam_toolbox::srv::ToggleInteractive_Event & msg)
  : msg_(msg)
  {}
  ::slam_toolbox::srv::ToggleInteractive_Event response(::slam_toolbox::srv::ToggleInteractive_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::srv::ToggleInteractive_Event msg_;
};

class Init_ToggleInteractive_Event_request
{
public:
  explicit Init_ToggleInteractive_Event_request(::slam_toolbox::srv::ToggleInteractive_Event & msg)
  : msg_(msg)
  {}
  Init_ToggleInteractive_Event_response request(::slam_toolbox::srv::ToggleInteractive_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ToggleInteractive_Event_response(msg_);
  }

private:
  ::slam_toolbox::srv::ToggleInteractive_Event msg_;
};

class Init_ToggleInteractive_Event_info
{
public:
  Init_ToggleInteractive_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleInteractive_Event_request info(::slam_toolbox::srv::ToggleInteractive_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ToggleInteractive_Event_request(msg_);
  }

private:
  ::slam_toolbox::srv::ToggleInteractive_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::ToggleInteractive_Event>()
{
  return slam_toolbox::srv::builder::Init_ToggleInteractive_Event_info();
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__SRV__DETAIL__TOGGLE_INTERACTIVE__BUILDER_HPP_
