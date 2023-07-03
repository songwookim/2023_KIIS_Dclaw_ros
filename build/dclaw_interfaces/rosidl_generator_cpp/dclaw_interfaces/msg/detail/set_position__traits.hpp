// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dclaw_interfaces:msg/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__MSG__DETAIL__SET_POSITION__TRAITS_HPP_
#define DCLAW_INTERFACES__MSG__DETAIL__SET_POSITION__TRAITS_HPP_

#include "dclaw_interfaces/msg/detail/set_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::msg::SetPosition>()
{
  return "dclaw_interfaces::msg::SetPosition";
}

template<>
inline const char * name<dclaw_interfaces::msg::SetPosition>()
{
  return "dclaw_interfaces/msg/SetPosition";
}

template<>
struct has_fixed_size<dclaw_interfaces::msg::SetPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dclaw_interfaces::msg::SetPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dclaw_interfaces::msg::SetPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DCLAW_INTERFACES__MSG__DETAIL__SET_POSITION__TRAITS_HPP_
