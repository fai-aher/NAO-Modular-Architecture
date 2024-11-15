// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manipulation_interfaces:srv/SetPosture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/set_posture.hpp"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__SET_POSTURE__BUILDER_HPP_
#define MANIPULATION_INTERFACES__SRV__DETAIL__SET_POSTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manipulation_interfaces/srv/detail/set_posture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPosture_Request_posture_name
{
public:
  Init_SetPosture_Request_posture_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulation_interfaces::srv::SetPosture_Request posture_name(::manipulation_interfaces::srv::SetPosture_Request::_posture_name_type arg)
  {
    msg_.posture_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::SetPosture_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::SetPosture_Request>()
{
  return manipulation_interfaces::srv::builder::Init_SetPosture_Request_posture_name();
}

}  // namespace manipulation_interfaces


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPosture_Response_success
{
public:
  Init_SetPosture_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulation_interfaces::srv::SetPosture_Response success(::manipulation_interfaces::srv::SetPosture_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::SetPosture_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::SetPosture_Response>()
{
  return manipulation_interfaces::srv::builder::Init_SetPosture_Response_success();
}

}  // namespace manipulation_interfaces


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPosture_Event_response
{
public:
  explicit Init_SetPosture_Event_response(::manipulation_interfaces::srv::SetPosture_Event & msg)
  : msg_(msg)
  {}
  ::manipulation_interfaces::srv::SetPosture_Event response(::manipulation_interfaces::srv::SetPosture_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::SetPosture_Event msg_;
};

class Init_SetPosture_Event_request
{
public:
  explicit Init_SetPosture_Event_request(::manipulation_interfaces::srv::SetPosture_Event & msg)
  : msg_(msg)
  {}
  Init_SetPosture_Event_response request(::manipulation_interfaces::srv::SetPosture_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetPosture_Event_response(msg_);
  }

private:
  ::manipulation_interfaces::srv::SetPosture_Event msg_;
};

class Init_SetPosture_Event_info
{
public:
  Init_SetPosture_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPosture_Event_request info(::manipulation_interfaces::srv::SetPosture_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetPosture_Event_request(msg_);
  }

private:
  ::manipulation_interfaces::srv::SetPosture_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::SetPosture_Event>()
{
  return manipulation_interfaces::srv::builder::Init_SetPosture_Event_info();
}

}  // namespace manipulation_interfaces

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__SET_POSTURE__BUILDER_HPP_
