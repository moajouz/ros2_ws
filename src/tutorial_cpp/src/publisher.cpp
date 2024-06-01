#include "rclcpp/rclcpp.hpp"
#include "interfaces/msg/tutorial.hpp"

using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher()
  : Node("publisher")
  {
    publisher_ = this->create_publisher<interfaces::msg::Tutorial>("topic", 10);
    timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = interfaces::msg::Tutorial();
    message.first_name = "Mohamad";
    message.last_name= "Alajouz";
    message.age = 22;
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s %s, age: %d'", message.first_name.c_str(), message.last_name.c_str(), message.age);
    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<interfaces::msg::Tutorial>::SharedPtr publisher_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
