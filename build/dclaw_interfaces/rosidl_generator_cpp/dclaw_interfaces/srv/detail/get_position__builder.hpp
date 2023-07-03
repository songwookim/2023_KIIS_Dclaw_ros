// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dclaw_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
#define DCLAW_INTERFACES__SRV__DETAIL__GET_POSITION__BUILDER_HPP_

#include "dclaw_interfaces/srv/detail/get_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dclaw_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Request_id
{
public:
  Init_GetPosition_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dclaw_interfaces::srv::GetPosition_Request id(::dclaw_interfaces::srv::GetPosition_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dclaw_interfaces::srv::GetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dclaw_interfaces::srv::GetPosition_Request>()
{
  return dclaw_interfaces::srv::builder::Init_GetPosition_Request_id();
}

}  // namespace dclaw_interfaces


namespace dclaw_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Response_position
{
public:
  Init_GetPosition_Response_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dclaw_interfaces::srv::GetPosition_Response position(::dclaw_interfaces::srv::GetPosition_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dclaw_interfaces::srv::GetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dclaw_interfaces::srv::GetPosition_Response>()
{
  return dclaw_interfaces::srv::builder::Init_GetPosition_Response_position();
}

}  // namespace dclaw_interfaces

#endif  // DCLAW_INTERFACES__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
