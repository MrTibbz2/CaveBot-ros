# CMake generated Testfile for 
# Source directory: /home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/behaviors/drive_on_heading
# Build directory: /home/pi/CaveBot-ros/build/nav2_system_tests/src/behaviors/drive_on_heading
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_drive_on_heading_behavior "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pi/CaveBot-ros/build/nav2_system_tests/test_results/nav2_system_tests/test_drive_on_heading_behavior.xml" "--package-name" "nav2_system_tests" "--generate-result-on-success" "--env" "TEST_DIR=/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/behaviors/drive_on_heading" "--command" "/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/behaviors/drive_on_heading/test_drive_on_heading_behavior.launch.py")
set_tests_properties(test_drive_on_heading_behavior PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/home/pi/CaveBot-ros/build/nav2_system_tests/src/behaviors/drive_on_heading" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/behaviors/drive_on_heading/CMakeLists.txt;1;ament_add_test;/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/behaviors/drive_on_heading/CMakeLists.txt;0;")
