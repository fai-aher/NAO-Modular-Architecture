// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from manipulation_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/move_arm.hpp"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__STRUCT_HPP_
#define MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__manipulation_interfaces__srv__MoveArm_Request __attribute__((deprecated))
#else
# define DEPRECATED__manipulation_interfaces__srv__MoveArm_Request __declspec(deprecated)
#endif

namespace manipulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveArm_Request_
{
  using Type = MoveArm_Request_<ContainerAllocator>;

  explicit MoveArm_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_init)
  {
    (void)_init;
  }

  explicit MoveArm_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _target_position_type target_position;

  // setters for named parameter idiom
  Type & set__target_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->target_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manipulation_interfaces__srv__MoveArm_Request
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manipulation_interfaces__srv__MoveArm_Request
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_Request_ & other) const
  {
    if (this->target_position != other.target_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_Request_

// alias to use template instance with default allocator
using MoveArm_Request =
  manipulation_interfaces::srv::MoveArm_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace manipulation_interfaces


#ifndef _WIN32
# define DEPRECATED__manipulation_interfaces__srv__MoveArm_Response __attribute__((deprecated))
#else
# define DEPRECATED__manipulation_interfaces__srv__MoveArm_Response __declspec(deprecated)
#endif

namespace manipulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveArm_Response_
{
  using Type = MoveArm_Response_<ContainerAllocator>;

  explicit MoveArm_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveArm_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manipulation_interfaces__srv__MoveArm_Response
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manipulation_interfaces__srv__MoveArm_Response
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_Response_

// alias to use template instance with default allocator
using MoveArm_Response =
  manipulation_interfaces::srv::MoveArm_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace manipulation_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__manipulation_interfaces__srv__MoveArm_Event __attribute__((deprecated))
#else
# define DEPRECATED__manipulation_interfaces__srv__MoveArm_Event __declspec(deprecated)
#endif

namespace manipulation_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveArm_Event_
{
  using Type = MoveArm_Event_<ContainerAllocator>;

  explicit MoveArm_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MoveArm_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<manipulation_interfaces::srv::MoveArm_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<manipulation_interfaces::srv::MoveArm_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manipulation_interfaces__srv__MoveArm_Event
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manipulation_interfaces__srv__MoveArm_Event
    std::shared_ptr<manipulation_interfaces::srv::MoveArm_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_Event_

// alias to use template instance with default allocator
using MoveArm_Event =
  manipulation_interfaces::srv::MoveArm_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace manipulation_interfaces

namespace manipulation_interfaces
{

namespace srv
{

struct MoveArm
{
  using Request = manipulation_interfaces::srv::MoveArm_Request;
  using Response = manipulation_interfaces::srv::MoveArm_Response;
  using Event = manipulation_interfaces::srv::MoveArm_Event;
};

}  // namespace srv

}  // namespace manipulation_interfaces

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__STRUCT_HPP_
