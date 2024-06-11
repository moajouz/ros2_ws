To create a ros2 workspace:
1- colcon build in the main folder after creating the src folder
2- add to ~/.bashrc (source /opt/ros/foxy/setup.bash)
3- add to ~/.bashrc (source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash)
4- add to ~/.bashrc (source ~/workspacename/install/setup.bash)
5- in the src folder type (ros2 pkg create pkg_name --build-type ament_python||ament_cmake --dependencies rclpy||rclcpp)
6- after creating a pkg, repeat step 1
