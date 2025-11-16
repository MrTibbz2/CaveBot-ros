# CMake generated Testfile for 
# Source directory: /home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/error_codes
# Build directory: /home/pi/CaveBot-ros/build/nav2_system_tests/src/error_codes
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_error_codes "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pi/CaveBot-ros/build/nav2_system_tests/test_results/nav2_system_tests/test_error_codes.xml" "--package-name" "nav2_system_tests" "--generate-result-on-success" "--env" "TEST_DIR=/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/error_codes" "TEST_MAP=/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/maps/map_circular.yaml" "TEST_WORLD=/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/worlds/turtlebot3_ros2_demo.world" "GAZEBO_MODEL_PATH=/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/models" "BT_NAVIGATOR_XML=navigate_to_pose_w_replanning_and_recovery.xml" "--command" "/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/error_codes/test_error_codes_launch.py")
set_tests_properties(test_error_codes PROPERTIES  TIMEOUT "180" WORKING_DIRECTORY "/home/pi/CaveBot-ros/build/nav2_system_tests/src/error_codes" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/error_codes/CMakeLists.txt;1;ament_add_test;/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/error_codes/CMakeLists.txt;0;")
