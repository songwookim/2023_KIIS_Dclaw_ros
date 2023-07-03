// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dclaw_interfaces:srv/SetPositions.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__BUILDER_HPP_
#define DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__BUILDER_HPP_

#include "dclaw_interfaces/srv/detail/set_positions__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dclaw_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPositions_Request_position
{
public:
  explicit Init_SetPositions_Request_position(::dclaw_interfaces::srv::SetPositions_Request & msg)
  : msg_(msg)
  {}
  ::dclaw_interfaces::srv::SetPositions_Request position(::dclaw_interfaces::srv::SetPositions_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dclaw_interfaces::srv::SetPositions_Request msg_;
};

class Init_SetPositions_Request_id
{
public:
  Init_SetPositions_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPositions_Request_position id(::dclaw_interfaces::srv::SetPositions_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SetPositions_Request_position(msg_);
  }

private:
  ::dclaw_interfaces::srv::SetPositions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dclaw_interfaces::srv::SetPositions_Request>()
{
  return dclaw_interfaces::srv::builder::Init_SetPositions_Request_id();
}

}  // namespace dclaw_interfaces


namespace dclaw_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPositions_Response_position
{
public:
  Init_SetPositions_Response_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dclaw_interfaces::srv::SetPositions_Response position(::dclaw_interfaces::srv::SetPositions_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dclaw_interfaces::srv::SetPositions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dclaw_interfaces::srv::SetPositions_Response>()
{
  return dclaw_interfaces::srv::builder::Init_SetPositions_Response_position();
}

}  // namespace dclaw_interfaces

#endif  // DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__BUILDER_HPP_
