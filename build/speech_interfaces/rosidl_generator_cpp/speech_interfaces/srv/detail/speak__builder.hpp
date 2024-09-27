// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from speech_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "speech_interfaces/srv/speak.hpp"


#ifndef SPEECH_INTERFACES__SRV__DETAIL__SPEAK__BUILDER_HPP_
#define SPEECH_INTERFACES__SRV__DETAIL__SPEAK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "speech_interfaces/srv/detail/speak__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace speech_interfaces
{

namespace srv
{

namespace builder
{

class Init_Speak_Request_text
{
public:
  Init_Speak_Request_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::speech_interfaces::srv::Speak_Request text(::speech_interfaces::srv::Speak_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_interfaces::srv::Speak_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_interfaces::srv::Speak_Request>()
{
  return speech_interfaces::srv::builder::Init_Speak_Request_text();
}

}  // namespace speech_interfaces


namespace speech_interfaces
{

namespace srv
{

namespace builder
{

class Init_Speak_Response_success
{
public:
  Init_Speak_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::speech_interfaces::srv::Speak_Response success(::speech_interfaces::srv::Speak_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_interfaces::srv::Speak_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_interfaces::srv::Speak_Response>()
{
  return speech_interfaces::srv::builder::Init_Speak_Response_success();
}

}  // namespace speech_interfaces


namespace speech_interfaces
{

namespace srv
{

namespace builder
{

class Init_Speak_Event_response
{
public:
  explicit Init_Speak_Event_response(::speech_interfaces::srv::Speak_Event & msg)
  : msg_(msg)
  {}
  ::speech_interfaces::srv::Speak_Event response(::speech_interfaces::srv::Speak_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_interfaces::srv::Speak_Event msg_;
};

class Init_Speak_Event_request
{
public:
  explicit Init_Speak_Event_request(::speech_interfaces::srv::Speak_Event & msg)
  : msg_(msg)
  {}
  Init_Speak_Event_response request(::speech_interfaces::srv::Speak_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Speak_Event_response(msg_);
  }

private:
  ::speech_interfaces::srv::Speak_Event msg_;
};

class Init_Speak_Event_info
{
public:
  Init_Speak_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speak_Event_request info(::speech_interfaces::srv::Speak_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Speak_Event_request(msg_);
  }

private:
  ::speech_interfaces::srv::Speak_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_interfaces::srv::Speak_Event>()
{
  return speech_interfaces::srv::builder::Init_Speak_Event_info();
}

}  // namespace speech_interfaces

#endif  // SPEECH_INTERFACES__SRV__DETAIL__SPEAK__BUILDER_HPP_
