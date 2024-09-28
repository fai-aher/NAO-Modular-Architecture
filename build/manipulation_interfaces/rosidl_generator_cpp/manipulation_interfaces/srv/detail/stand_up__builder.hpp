// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manipulation_interfaces:srv/StandUp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/stand_up.hpp"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__STAND_UP__BUILDER_HPP_
#define MANIPULATION_INTERFACES__SRV__DETAIL__STAND_UP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manipulation_interfaces/srv/detail/stand_up__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manipulation_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::StandUp_Request>()
{
  return ::manipulation_interfaces::srv::StandUp_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace manipulation_interfaces


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_StandUp_Response_success
{
public:
  Init_StandUp_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulation_interfaces::srv::StandUp_Response success(::manipulation_interfaces::srv::StandUp_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::StandUp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::StandUp_Response>()
{
  return manipulation_interfaces::srv::builder::Init_StandUp_Response_success();
}

}  // namespace manipulation_interfaces


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_StandUp_Event_response
{
public:
  explicit Init_StandUp_Event_response(::manipulation_interfaces::srv::StandUp_Event & msg)
  : msg_(msg)
  {}
  ::manipulation_interfaces::srv::StandUp_Event response(::manipulation_interfaces::srv::StandUp_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::StandUp_Event msg_;
};

class Init_StandUp_Event_request
{
public:
  explicit Init_StandUp_Event_request(::manipulation_interfaces::srv::StandUp_Event & msg)
  : msg_(msg)
  {}
  Init_StandUp_Event_response request(::manipulation_interfaces::srv::StandUp_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StandUp_Event_response(msg_);
  }

private:
  ::manipulation_interfaces::srv::StandUp_Event msg_;
};

class Init_StandUp_Event_info
{
public:
  Init_StandUp_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StandUp_Event_request info(::manipulation_interfaces::srv::StandUp_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StandUp_Event_request(msg_);
  }

private:
  ::manipulation_interfaces::srv::StandUp_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::StandUp_Event>()
{
  return manipulation_interfaces::srv::builder::Init_StandUp_Event_info();
}

}  // namespace manipulation_interfaces

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__STAND_UP__BUILDER_HPP_
