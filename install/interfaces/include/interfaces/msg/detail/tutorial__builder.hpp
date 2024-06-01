// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TUTORIAL__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__TUTORIAL__BUILDER_HPP_

#include "interfaces/msg/detail/tutorial__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Tutorial_age
{
public:
  explicit Init_Tutorial_age(::interfaces::msg::Tutorial & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Tutorial age(::interfaces::msg::Tutorial::_age_type arg)
  {
    msg_.age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Tutorial msg_;
};

class Init_Tutorial_last_name
{
public:
  explicit Init_Tutorial_last_name(::interfaces::msg::Tutorial & msg)
  : msg_(msg)
  {}
  Init_Tutorial_age last_name(::interfaces::msg::Tutorial::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_Tutorial_age(msg_);
  }

private:
  ::interfaces::msg::Tutorial msg_;
};

class Init_Tutorial_first_name
{
public:
  Init_Tutorial_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tutorial_last_name first_name(::interfaces::msg::Tutorial::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_Tutorial_last_name(msg_);
  }

private:
  ::interfaces::msg::Tutorial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Tutorial>()
{
  return interfaces::msg::builder::Init_Tutorial_first_name();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__TUTORIAL__BUILDER_HPP_
