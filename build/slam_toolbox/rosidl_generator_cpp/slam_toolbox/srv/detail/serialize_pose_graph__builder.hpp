// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:srv/SerializePoseGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/srv/serialize_pose_graph.hpp"


#ifndef SLAM_TOOLBOX__SRV__DETAIL__SERIALIZE_POSE_GRAPH__BUILDER_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__SERIALIZE_POSE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slam_toolbox/srv/detail/serialize_pose_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slam_toolbox
{

namespace srv
{

namespace builder
{

class Init_SerializePoseGraph_Request_filename
{
public:
  Init_SerializePoseGraph_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::slam_toolbox::srv::SerializePoseGraph_Request filename(::slam_toolbox::srv::SerializePoseGraph_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::srv::SerializePoseGraph_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::SerializePoseGraph_Request>()
{
  return slam_toolbox::srv::builder::Init_SerializePoseGraph_Request_filename();
}

}  // namespace slam_toolbox


namespace slam_toolbox
{

namespace srv
{

namespace builder
{

class Init_SerializePoseGraph_Response_result
{
public:
  Init_SerializePoseGraph_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::slam_toolbox::srv::SerializePoseGraph_Response result(::slam_toolbox::srv::SerializePoseGraph_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::srv::SerializePoseGraph_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::SerializePoseGraph_Response>()
{
  return slam_toolbox::srv::builder::Init_SerializePoseGraph_Response_result();
}

}  // namespace slam_toolbox


namespace slam_toolbox
{

namespace srv
{

namespace builder
{

class Init_SerializePoseGraph_Event_response
{
public:
  explicit Init_SerializePoseGraph_Event_response(::slam_toolbox::srv::SerializePoseGraph_Event & msg)
  : msg_(msg)
  {}
  ::slam_toolbox::srv::SerializePoseGraph_Event response(::slam_toolbox::srv::SerializePoseGraph_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::srv::SerializePoseGraph_Event msg_;
};

class Init_SerializePoseGraph_Event_request
{
public:
  explicit Init_SerializePoseGraph_Event_request(::slam_toolbox::srv::SerializePoseGraph_Event & msg)
  : msg_(msg)
  {}
  Init_SerializePoseGraph_Event_response request(::slam_toolbox::srv::SerializePoseGraph_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SerializePoseGraph_Event_response(msg_);
  }

private:
  ::slam_toolbox::srv::SerializePoseGraph_Event msg_;
};

class Init_SerializePoseGraph_Event_info
{
public:
  Init_SerializePoseGraph_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerializePoseGraph_Event_request info(::slam_toolbox::srv::SerializePoseGraph_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SerializePoseGraph_Event_request(msg_);
  }

private:
  ::slam_toolbox::srv::SerializePoseGraph_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::SerializePoseGraph_Event>()
{
  return slam_toolbox::srv::builder::Init_SerializePoseGraph_Event_info();
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__SRV__DETAIL__SERIALIZE_POSE_GRAPH__BUILDER_HPP_
