# CMake generated Testfile for 
# Source directory: /home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/localization
# Build directory: /home/pi/CaveBot-ros/build/nav2_system_tests/src/localization
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_localization "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pi/CaveBot-ros/build/nav2_system_tests/test_results/nav2_system_tests/test_localization.xml" "--package-name" "nav2_system_tests" "--generate-result-on-success" "--env" "TEST_EXECUTABLE=/home/pi/CaveBot-ros/build/nav2_system_tests/src/localization/test_localization_node" "--command" "/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/localization/test_localization_launch.py")
set_tests_properties(test_localization PROPERTIES  TIMEOUT "180" WORKING_DIRECTORY "/home/pi/CaveBot-ros/build/nav2_system_tests/src/localization" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/localization/CMakeLists.txt;9;ament_add_test;/home/pi/CaveBot-ros/src/navigation2/nav2_system_tests/src/localization/CMakeLists.txt;0;")
