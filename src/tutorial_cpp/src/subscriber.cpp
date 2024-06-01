#include "rclcpp/rclcpp.hpp"
#include "interfaces/msg/tutorial.hpp"

class MinimalSubscriber : public rclcpp::Node
{
public:
  MinimalSubscriber()
  : Node("subscriber")
  {
    subscription_ = this->create_subscription<interfaces::msg::Tutorial>(
      "topic", 10, [this](const interfaces::msg::Tutorial::SharedPtr msg) {
        topic_callback(*msg);
      });
  }

private:
  void topic_callback(const interfaces::msg::Tutorial & msg) const
  {
    RCLCPP_INFO(this->get_logger(), "Name: '%s %s', Age: %d", msg.first_name.c_str(), msg.last_name.c_str(), msg.age);
  }

  rclcpp::Subscription<interfaces::msg::Tutorial>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}
