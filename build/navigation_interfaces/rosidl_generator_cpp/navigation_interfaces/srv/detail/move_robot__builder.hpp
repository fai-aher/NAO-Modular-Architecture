// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigation_interfaces:srv/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navigation_interfaces/srv/move_robot.hpp"


#ifndef NAVIGATION_INTERFACES__SRV__DETAIL__MOVE_ROBOT__BUILDER_HPP_
#define NAVIGATION_INTERFACES__SRV__DETAIL__MOVE_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigation_interfaces/srv/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveRobot_Request_theta
{
public:
  explicit Init_MoveRobot_Request_theta(::navigation_interfaces::srv::MoveRobot_Request & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces::srv::MoveRobot_Request theta(::navigation_interfaces::srv::MoveRobot_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces::srv::MoveRobot_Request msg_;
};

class Init_MoveRobot_Request_y
{
public:
  explicit Init_MoveRobot_Request_y(::navigation_interfaces::srv::MoveRobot_Request & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_Request_theta y(::navigation_interfaces::srv::MoveRobot_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MoveRobot_Request_theta(msg_);
  }

private:
  ::navigation_interfaces::srv::MoveRobot_Request msg_;
};

class Init_MoveRobot_Request_x
{
public:
  Init_MoveRobot_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Request_y x(::navigation_interfaces::srv::MoveRobot_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveRobot_Request_y(msg_);
  }

private:
  ::navigation_interfaces::srv::MoveRobot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces::srv::MoveRobot_Request>()
{
  return navigation_interfaces::srv::builder::Init_MoveRobot_Request_x();
}

}  // namespace navigation_interfaces


namespace navigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveRobot_Response_message
{
public:
  explicit Init_MoveRobot_Response_message(::navigation_interfaces::srv::MoveRobot_Response & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces::srv::MoveRobot_Response message(::navigation_interfaces::srv::MoveRobot_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces::srv::MoveRobot_Response msg_;
};

class Init_MoveRobot_Response_success
{
public:
  Init_MoveRobot_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Response_message success(::navigation_interfaces::srv::MoveRobot_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveRobot_Response_message(msg_);
  }

private:
  ::navigation_interfaces::srv::MoveRobot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces::srv::MoveRobot_Response>()
{
  return navigation_interfaces::srv::builder::Init_MoveRobot_Response_success();
}

}  // namespace navigation_interfaces


namespace navigation_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveRobot_Event_response
{
public:
  explicit Init_MoveRobot_Event_response(::navigation_interfaces::srv::MoveRobot_Event & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces::srv::MoveRobot_Event response(::navigation_interfaces::srv::MoveRobot_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces::srv::MoveRobot_Event msg_;
};

class Init_MoveRobot_Event_request
{
public:
  explicit Init_MoveRobot_Event_request(::navigation_interfaces::srv::MoveRobot_Event & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_Event_response request(::navigation_interfaces::srv::MoveRobot_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveRobot_Event_response(msg_);
  }

private:
  ::navigation_interfaces::srv::MoveRobot_Event msg_;
};

class Init_MoveRobot_Event_info
{
public:
  Init_MoveRobot_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Event_request info(::navigation_interfaces::srv::MoveRobot_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveRobot_Event_request(msg_);
  }

private:
  ::navigation_interfaces::srv::MoveRobot_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces::srv::MoveRobot_Event>()
{
  return navigation_interfaces::srv::builder::Init_MoveRobot_Event_info();
}

}  // namespace navigation_interfaces

#endif  // NAVIGATION_INTERFACES__SRV__DETAIL__MOVE_ROBOT__BUILDER_HPP_
