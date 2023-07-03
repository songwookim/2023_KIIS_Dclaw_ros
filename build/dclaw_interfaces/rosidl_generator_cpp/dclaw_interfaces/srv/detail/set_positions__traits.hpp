// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dclaw_interfaces:srv/SetPositions.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__TRAITS_HPP_
#define DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__TRAITS_HPP_

#include "dclaw_interfaces/srv/detail/set_positions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::srv::SetPositions_Request>()
{
  return "dclaw_interfaces::srv::SetPositions_Request";
}

template<>
inline const char * name<dclaw_interfaces::srv::SetPositions_Request>()
{
  return "dclaw_interfaces/srv/SetPositions_Request";
}

template<>
struct has_fixed_size<dclaw_interfaces::srv::SetPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dclaw_interfaces::srv::SetPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dclaw_interfaces::srv::SetPositions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::srv::SetPositions_Response>()
{
  return "dclaw_interfaces::srv::SetPositions_Response";
}

template<>
inline const char * name<dclaw_interfaces::srv::SetPositions_Response>()
{
  return "dclaw_interfaces/srv/SetPositions_Response";
}

template<>
struct has_fixed_size<dclaw_interfaces::srv::SetPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dclaw_interfaces::srv::SetPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dclaw_interfaces::srv::SetPositions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::srv::SetPositions>()
{
  return "dclaw_interfaces::srv::SetPositions";
}

template<>
inline const char * name<dclaw_interfaces::srv::SetPositions>()
{
  return "dclaw_interfaces/srv/SetPositions";
}

template<>
struct has_fixed_size<dclaw_interfaces::srv::SetPositions>
  : std::integral_constant<
    bool,
    has_fixed_size<dclaw_interfaces::srv::SetPositions_Request>::value &&
    has_fixed_size<dclaw_interfaces::srv::SetPositions_Response>::value
  >
{
};

template<>
struct has_bounded_size<dclaw_interfaces::srv::SetPositions>
  : std::integral_constant<
    bool,
    has_bounded_size<dclaw_interfaces::srv::SetPositions_Request>::value &&
    has_bounded_size<dclaw_interfaces::srv::SetPositions_Response>::value
  >
{
};

template<>
struct is_service<dclaw_interfaces::srv::SetPositions>
  : std::true_type
{
};

template<>
struct is_service_request<dclaw_interfaces::srv::SetPositions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dclaw_interfaces::srv::SetPositions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__TRAITS_HPP_
