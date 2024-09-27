// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "perception_interfaces/srv/detect_objects.hpp"


#ifndef PERCEPTION_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__BUILDER_HPP_
#define PERCEPTION_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_interfaces/srv/detail/detect_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_interfaces::srv::DetectObjects_Request>()
{
  return ::perception_interfaces::srv::DetectObjects_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace perception_interfaces


namespace perception_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectObjects_Response_object_poses
{
public:
  explicit Init_DetectObjects_Response_object_poses(::perception_interfaces::srv::DetectObjects_Response & msg)
  : msg_(msg)
  {}
  ::perception_interfaces::srv::DetectObjects_Response object_poses(::perception_interfaces::srv::DetectObjects_Response::_object_poses_type arg)
  {
    msg_.object_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_interfaces::srv::DetectObjects_Response msg_;
};

class Init_DetectObjects_Response_object_names
{
public:
  explicit Init_DetectObjects_Response_object_names(::perception_interfaces::srv::DetectObjects_Response & msg)
  : msg_(msg)
  {}
  Init_DetectObjects_Response_object_poses object_names(::perception_interfaces::srv::DetectObjects_Response::_object_names_type arg)
  {
    msg_.object_names = std::move(arg);
    return Init_DetectObjects_Response_object_poses(msg_);
  }

private:
  ::perception_interfaces::srv::DetectObjects_Response msg_;
};

class Init_DetectObjects_Response_success
{
public:
  Init_DetectObjects_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_Response_object_names success(::perception_interfaces::srv::DetectObjects_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DetectObjects_Response_object_names(msg_);
  }

private:
  ::perception_interfaces::srv::DetectObjects_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_interfaces::srv::DetectObjects_Response>()
{
  return perception_interfaces::srv::builder::Init_DetectObjects_Response_success();
}

}  // namespace perception_interfaces


namespace perception_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectObjects_Event_response
{
public:
  explicit Init_DetectObjects_Event_response(::perception_interfaces::srv::DetectObjects_Event & msg)
  : msg_(msg)
  {}
  ::perception_interfaces::srv::DetectObjects_Event response(::perception_interfaces::srv::DetectObjects_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_interfaces::srv::DetectObjects_Event msg_;
};

class Init_DetectObjects_Event_request
{
public:
  explicit Init_DetectObjects_Event_request(::perception_interfaces::srv::DetectObjects_Event & msg)
  : msg_(msg)
  {}
  Init_DetectObjects_Event_response request(::perception_interfaces::srv::DetectObjects_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DetectObjects_Event_response(msg_);
  }

private:
  ::perception_interfaces::srv::DetectObjects_Event msg_;
};

class Init_DetectObjects_Event_info
{
public:
  Init_DetectObjects_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_Event_request info(::perception_interfaces::srv::DetectObjects_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DetectObjects_Event_request(msg_);
  }

private:
  ::perception_interfaces::srv::DetectObjects_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_interfaces::srv::DetectObjects_Event>()
{
  return perception_interfaces::srv::builder::Init_DetectObjects_Event_info();
}

}  // namespace perception_interfaces

#endif  // PERCEPTION_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__BUILDER_HPP_
