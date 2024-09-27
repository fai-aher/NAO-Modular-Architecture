// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manipulation_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/move_arm.hpp"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__BUILDER_HPP_
#define MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manipulation_interfaces/srv/detail/move_arm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveArm_Request_target_position
{
public:
  Init_MoveArm_Request_target_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulation_interfaces::srv::MoveArm_Request target_position(::manipulation_interfaces::srv::MoveArm_Request::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::MoveArm_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::MoveArm_Request>()
{
  return manipulation_interfaces::srv::builder::Init_MoveArm_Request_target_position();
}

}  // namespace manipulation_interfaces


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveArm_Response_success
{
public:
  Init_MoveArm_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manipulation_interfaces::srv::MoveArm_Response success(::manipulation_interfaces::srv::MoveArm_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::MoveArm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::MoveArm_Response>()
{
  return manipulation_interfaces::srv::builder::Init_MoveArm_Response_success();
}

}  // namespace manipulation_interfaces


namespace manipulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveArm_Event_response
{
public:
  explicit Init_MoveArm_Event_response(::manipulation_interfaces::srv::MoveArm_Event & msg)
  : msg_(msg)
  {}
  ::manipulation_interfaces::srv::MoveArm_Event response(::manipulation_interfaces::srv::MoveArm_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manipulation_interfaces::srv::MoveArm_Event msg_;
};

class Init_MoveArm_Event_request
{
public:
  explicit Init_MoveArm_Event_request(::manipulation_interfaces::srv::MoveArm_Event & msg)
  : msg_(msg)
  {}
  Init_MoveArm_Event_response request(::manipulation_interfaces::srv::MoveArm_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveArm_Event_response(msg_);
  }

private:
  ::manipulation_interfaces::srv::MoveArm_Event msg_;
};

class Init_MoveArm_Event_info
{
public:
  Init_MoveArm_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_Event_request info(::manipulation_interfaces::srv::MoveArm_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveArm_Event_request(msg_);
  }

private:
  ::manipulation_interfaces::srv::MoveArm_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manipulation_interfaces::srv::MoveArm_Event>()
{
  return manipulation_interfaces::srv::builder::Init_MoveArm_Event_info();
}

}  // namespace manipulation_interfaces

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__BUILDER_HPP_
