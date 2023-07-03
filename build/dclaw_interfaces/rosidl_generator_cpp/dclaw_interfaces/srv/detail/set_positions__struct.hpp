// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dclaw_interfaces:srv/SetPositions.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__STRUCT_HPP_
#define DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__dclaw_interfaces__srv__SetPositions_Request __attribute__((deprecated))
#else
# define DEPRECATED__dclaw_interfaces__srv__SetPositions_Request __declspec(deprecated)
#endif

namespace dclaw_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPositions_Request_
{
  using Type = SetPositions_Request_<ContainerAllocator>;

  explicit SetPositions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->position = 0.0f;
    }
  }

  explicit SetPositions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->position = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _position_type =
    float;
  _position_type position;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position(
    const float & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dclaw_interfaces__srv__SetPositions_Request
    std::shared_ptr<dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dclaw_interfaces__srv__SetPositions_Request
    std::shared_ptr<dclaw_interfaces::srv::SetPositions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPositions_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPositions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPositions_Request_

// alias to use template instance with default allocator
using SetPositions_Request =
  dclaw_interfaces::srv::SetPositions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dclaw_interfaces


#ifndef _WIN32
# define DEPRECATED__dclaw_interfaces__srv__SetPositions_Response __attribute__((deprecated))
#else
# define DEPRECATED__dclaw_interfaces__srv__SetPositions_Response __declspec(deprecated)
#endif

namespace dclaw_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPositions_Response_
{
  using Type = SetPositions_Response_<ContainerAllocator>;

  explicit SetPositions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
    }
  }

  explicit SetPositions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
    }
  }

  // field types and members
  using _position_type =
    float;
  _position_type position;

  // setters for named parameter idiom
  Type & set__position(
    const float & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dclaw_interfaces__srv__SetPositions_Response
    std::shared_ptr<dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dclaw_interfaces__srv__SetPositions_Response
    std::shared_ptr<dclaw_interfaces::srv::SetPositions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPositions_Response_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPositions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPositions_Response_

// alias to use template instance with default allocator
using SetPositions_Response =
  dclaw_interfaces::srv::SetPositions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dclaw_interfaces

namespace dclaw_interfaces
{

namespace srv
{

struct SetPositions
{
  using Request = dclaw_interfaces::srv::SetPositions_Request;
  using Response = dclaw_interfaces::srv::SetPositions_Response;
};

}  // namespace srv

}  // namespace dclaw_interfaces

#endif  // DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__STRUCT_HPP_
