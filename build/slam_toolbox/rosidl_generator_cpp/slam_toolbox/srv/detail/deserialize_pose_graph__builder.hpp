// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:srv/DeserializePoseGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/srv/deserialize_pose_graph.hpp"


#ifndef SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__BUILDER_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slam_toolbox/srv/detail/deserialize_pose_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slam_toolbox
{

namespace srv
{

namespace builder
{

class Init_DeserializePoseGraph_Request_initial_pose
{
public:
  explicit Init_DeserializePoseGraph_Request_initial_pose(::slam_toolbox::srv::DeserializePoseGraph_Request & msg)
  : msg_(msg)
  {}
  ::slam_toolbox::srv::DeserializePoseGraph_Request initial_pose(::slam_toolbox::srv::DeserializePoseGraph_Request::_initial_pose_type arg)
  {
    msg_.initial_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::srv::DeserializePoseGraph_Request msg_;
};

class Init_DeserializePoseGraph_Request_match_type
{
public:
  explicit Init_DeserializePoseGraph_Request_match_type(::slam_toolbox::srv::DeserializePoseGraph_Request & msg)
  : msg_(msg)
  {}
  Init_DeserializePoseGraph_Request_initial_pose match_type(::slam_toolbox::srv::DeserializePoseGraph_Request::_match_type_type arg)
  {
    msg_.match_type = std::move(arg);
    return Init_DeserializePoseGraph_Request_initial_pose(msg_);
  }

private:
  ::slam_toolbox::srv::DeserializePoseGraph_Request msg_;
};

class Init_DeserializePoseGraph_Request_filename
{
public:
  Init_DeserializePoseGraph_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeserializePoseGraph_Request_match_type filename(::slam_toolbox::srv::DeserializePoseGraph_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return Init_DeserializePoseGraph_Request_match_type(msg_);
  }

private:
  ::slam_toolbox::srv::DeserializePoseGraph_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::DeserializePoseGraph_Request>()
{
  return slam_toolbox::srv::builder::Init_DeserializePoseGraph_Request_filename();
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
auto build<::slam_toolbox::srv::DeserializePoseGraph_Response>()
{
  return ::slam_toolbox::srv::DeserializePoseGraph_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace slam_toolbox


namespace slam_toolbox
{

namespace srv
{

namespace builder
{

class Init_DeserializePoseGraph_Event_response
{
public:
  explicit Init_DeserializePoseGraph_Event_response(::slam_toolbox::srv::DeserializePoseGraph_Event & msg)
  : msg_(msg)
  {}
  ::slam_toolbox::srv::DeserializePoseGraph_Event response(::slam_toolbox::srv::DeserializePoseGraph_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::srv::DeserializePoseGraph_Event msg_;
};

class Init_DeserializePoseGraph_Event_request
{
public:
  explicit Init_DeserializePoseGraph_Event_request(::slam_toolbox::srv::DeserializePoseGraph_Event & msg)
  : msg_(msg)
  {}
  Init_DeserializePoseGraph_Event_response request(::slam_toolbox::srv::DeserializePoseGraph_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DeserializePoseGraph_Event_response(msg_);
  }

private:
  ::slam_toolbox::srv::DeserializePoseGraph_Event msg_;
};

class Init_DeserializePoseGraph_Event_info
{
public:
  Init_DeserializePoseGraph_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeserializePoseGraph_Event_request info(::slam_toolbox::srv::DeserializePoseGraph_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DeserializePoseGraph_Event_request(msg_);
  }

private:
  ::slam_toolbox::srv::DeserializePoseGraph_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::DeserializePoseGraph_Event>()
{
  return slam_toolbox::srv::builder::Init_DeserializePoseGraph_Event_info();
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__BUILDER_HPP_
