cmake_minimum_required(VERSION 3.8)
project(letter_writer)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(Curses REQUIRED)

add_executable(letter_input_node src/letter_input_node.cpp)
ament_target_dependencies(letter_input_node rclcpp std_msgs)
target_link_libraries(letter_input_node ${CURSES_LIBRARIES})
target_include_directories(letter_input_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(letter_input_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS letter_input_node
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

