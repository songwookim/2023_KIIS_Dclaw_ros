// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dclaw_interfaces:srv/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__SRV__DETAIL__SET_POSITION__BUILDER_HPP_
#define DCLAW_INTERFACES__SRV__DETAIL__SET_POSITION__BUILDER_HPP_

#include "dclaw_interfaces/srv/detail/set_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dclaw_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPosition_Request_id
{
public:
  Init_SetPosition_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dclaw_interfaces::srv::SetPosition_Request id(::dclaw_interfaces::srv::SetPosition_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dclaw_interfaces::srv::SetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dclaw_interfaces::srv::SetPosition_Request>()
{
  return dclaw_interfaces::srv::builder::Init_SetPosition_Request_id();
}

}  // namespace dclaw_interfaces


namespace dclaw_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPosition_Response_position
{
public:
  Init_SetPosition_Response_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dclaw_interfaces::srv::SetPosition_Response position(::dclaw_interfaces::srv::SetPosition_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dclaw_interfaces::srv::SetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dclaw_interfaces::srv::SetPosition_Response>()
{
  return dclaw_interfaces::srv::builder::Init_SetPosition_Response_position();
}

}  // namespace dclaw_interfaces

#endif  // DCLAW_INTERFACES__SRV__DETAIL__SET_POSITION__BUILDER_HPP_
