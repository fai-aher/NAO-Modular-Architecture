// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manipulation_interfaces:srv/ToggleAwareness.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/toggle_awareness.hpp"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__TOGGLE_AWARENESS__BUILDER_HPP_
#define MANIPULATION_INTERFACES__SRV__DETAIL__TOGGLE_AWARENESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manipulation_interfaces/srv/detail/toggle_awareness__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleAwareness_Request_enable
{
public:
  Init_ToggleAwareness_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulation_interfaces::srv::ToggleAwareness_Request enable(::manipulation_interfaces::srv::ToggleAwareness_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::ToggleAwareness_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::ToggleAwareness_Request>()
{
  return manipulation_interfaces::srv::builder::Init_ToggleAwareness_Request_enable();
}

}  // namespace manipulation_interfaces


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleAwareness_Response_message
{
public:
  explicit Init_ToggleAwareness_Response_message(::manipulation_interfaces::srv::ToggleAwareness_Response & msg)
  : msg_(msg)
  {}
  ::manipulation_interfaces::srv::ToggleAwareness_Response message(::manipulation_interfaces::srv::ToggleAwareness_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::ToggleAwareness_Response msg_;
};

class Init_ToggleAwareness_Response_success
{
public:
  Init_ToggleAwareness_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleAwareness_Response_message success(::manipulation_interfaces::srv::ToggleAwareness_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ToggleAwareness_Response_message(msg_);
  }

private:
  ::manipulation_interfaces::srv::ToggleAwareness_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::ToggleAwareness_Response>()
{
  return manipulation_interfaces::srv::builder::Init_ToggleAwareness_Response_success();
}

}  // namespace manipulation_interfaces


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleAwareness_Event_response
{
public:
  explicit Init_ToggleAwareness_Event_response(::manipulation_interfaces::srv::ToggleAwareness_Event & msg)
  : msg_(msg)
  {}
  ::manipulation_interfaces::srv::ToggleAwareness_Event response(::manipulation_interfaces::srv::ToggleAwareness_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::ToggleAwareness_Event msg_;
};

class Init_ToggleAwareness_Event_request
{
public:
  explicit Init_ToggleAwareness_Event_request(::manipulation_interfaces::srv::ToggleAwareness_Event & msg)
  : msg_(msg)
  {}
  Init_ToggleAwareness_Event_response request(::manipulation_interfaces::srv::ToggleAwareness_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ToggleAwareness_Event_response(msg_);
  }

private:
  ::manipulation_interfaces::srv::ToggleAwareness_Event msg_;
};

class Init_ToggleAwareness_Event_info
{
public:
  Init_ToggleAwareness_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleAwareness_Event_request info(::manipulation_interfaces::srv::ToggleAwareness_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ToggleAwareness_Event_request(msg_);
  }

private:
  ::manipulation_interfaces::srv::ToggleAwareness_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::ToggleAwareness_Event>()
{
  return manipulation_interfaces::srv::builder::Init_ToggleAwareness_Event_info();
}

}  // namespace manipulation_interfaces

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__TOGGLE_AWARENESS__BUILDER_HPP_
