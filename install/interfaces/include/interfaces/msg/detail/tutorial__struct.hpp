// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TUTORIAL__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__TUTORIAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__Tutorial __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__Tutorial __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tutorial_
{
  using Type = Tutorial_<ContainerAllocator>;

  explicit Tutorial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
      this->age = 0;
    }
  }

  explicit Tutorial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_name(_alloc),
    last_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
      this->age = 0;
    }
  }

  // field types and members
  using _first_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _first_name_type first_name;
  using _last_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _last_name_type last_name;
  using _age_type =
    uint8_t;
  _age_type age;

  // setters for named parameter idiom
  Type & set__first_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->first_name = _arg;
    return *this;
  }
  Type & set__last_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->last_name = _arg;
    return *this;
  }
  Type & set__age(
    const uint8_t & _arg)
  {
    this->age = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::Tutorial_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::Tutorial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::Tutorial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::Tutorial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Tutorial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Tutorial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Tutorial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Tutorial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::Tutorial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::Tutorial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__Tutorial
    std::shared_ptr<interfaces::msg::Tutorial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__Tutorial
    std::shared_ptr<interfaces::msg::Tutorial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tutorial_ & other) const
  {
    if (this->first_name != other.first_name) {
      return false;
    }
    if (this->last_name != other.last_name) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tutorial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tutorial_

// alias to use template instance with default allocator
using Tutorial =
  interfaces::msg::Tutorial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__TUTORIAL__STRUCT_HPP_
