// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dclaw_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
#define DCLAW_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_

#include "dclaw_interfaces/srv/detail/get_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::srv::GetPosition_Request>()
{
  return "dclaw_interfaces::srv::GetPosition_Request";
}

template<>
inline const char * name<dclaw_interfaces::srv::GetPosition_Request>()
{
  return "dclaw_interfaces/srv/GetPosition_Request";
}

template<>
struct has_fixed_size<dclaw_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dclaw_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dclaw_interfaces::srv::GetPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::srv::GetPosition_Response>()
{
  return "dclaw_interfaces::srv::GetPosition_Response";
}

template<>
inline const char * name<dclaw_interfaces::srv::GetPosition_Response>()
{
  return "dclaw_interfaces/srv/GetPosition_Response";
}

template<>
struct has_fixed_size<dclaw_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dclaw_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dclaw_interfaces::srv::GetPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::srv::GetPosition>()
{
  return "dclaw_interfaces::srv::GetPosition";
}

template<>
inline const char * name<dclaw_interfaces::srv::GetPosition>()
{
  return "dclaw_interfaces/srv/GetPosition";
}

template<>
struct has_fixed_size<dclaw_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<dclaw_interfaces::srv::GetPosition_Request>::value &&
    has_fixed_size<dclaw_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<dclaw_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<dclaw_interfaces::srv::GetPosition_Request>::value &&
    has_bounded_size<dclaw_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct is_service<dclaw_interfaces::srv::GetPosition>
  : std::true_type
{
};

template<>
struct is_service_request<dclaw_interfaces::srv::GetPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dclaw_interfaces::srv::GetPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DCLAW_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
