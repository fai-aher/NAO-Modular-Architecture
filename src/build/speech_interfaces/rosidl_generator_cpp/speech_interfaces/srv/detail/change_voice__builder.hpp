// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from speech_interfaces:srv/ChangeVoice.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "speech_interfaces/srv/change_voice.hpp"


#ifndef SPEECH_INTERFACES__SRV__DETAIL__CHANGE_VOICE__BUILDER_HPP_
#define SPEECH_INTERFACES__SRV__DETAIL__CHANGE_VOICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "speech_interfaces/srv/detail/change_voice__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace speech_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeVoice_Request_voice_name
{
public:
  Init_ChangeVoice_Request_voice_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::speech_interfaces::srv::ChangeVoice_Request voice_name(::speech_interfaces::srv::ChangeVoice_Request::_voice_name_type arg)
  {
    msg_.voice_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_interfaces::srv::ChangeVoice_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_interfaces::srv::ChangeVoice_Request>()
{
  return speech_interfaces::srv::builder::Init_ChangeVoice_Request_voice_name();
}

}  // namespace speech_interfaces


namespace speech_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeVoice_Response_message
{
public:
  explicit Init_ChangeVoice_Response_message(::speech_interfaces::srv::ChangeVoice_Response & msg)
  : msg_(msg)
  {}
  ::speech_interfaces::srv::ChangeVoice_Response message(::speech_interfaces::srv::ChangeVoice_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_interfaces::srv::ChangeVoice_Response msg_;
};

class Init_ChangeVoice_Response_success
{
public:
  Init_ChangeVoice_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeVoice_Response_message success(::speech_interfaces::srv::ChangeVoice_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ChangeVoice_Response_message(msg_);
  }

private:
  ::speech_interfaces::srv::ChangeVoice_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_interfaces::srv::ChangeVoice_Response>()
{
  return speech_interfaces::srv::builder::Init_ChangeVoice_Response_success();
}

}  // namespace speech_interfaces


namespace speech_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeVoice_Event_response
{
public:
  explicit Init_ChangeVoice_Event_response(::speech_interfaces::srv::ChangeVoice_Event & msg)
  : msg_(msg)
  {}
  ::speech_interfaces::srv::ChangeVoice_Event response(::speech_interfaces::srv::ChangeVoice_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_interfaces::srv::ChangeVoice_Event msg_;
};

class Init_ChangeVoice_Event_request
{
public:
  explicit Init_ChangeVoice_Event_request(::speech_interfaces::srv::ChangeVoice_Event & msg)
  : msg_(msg)
  {}
  Init_ChangeVoice_Event_response request(::speech_interfaces::srv::ChangeVoice_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChangeVoice_Event_response(msg_);
  }

private:
  ::speech_interfaces::srv::ChangeVoice_Event msg_;
};

class Init_ChangeVoice_Event_info
{
public:
  Init_ChangeVoice_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeVoice_Event_request info(::speech_interfaces::srv::ChangeVoice_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChangeVoice_Event_request(msg_);
  }

private:
  ::speech_interfaces::srv::ChangeVoice_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_interfaces::srv::ChangeVoice_Event>()
{
  return speech_interfaces::srv::builder::Init_ChangeVoice_Event_info();
}

}  // namespace speech_interfaces

#endif  // SPEECH_INTERFACES__SRV__DETAIL__CHANGE_VOICE__BUILDER_HPP_
