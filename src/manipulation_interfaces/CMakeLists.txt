cmake_minimum_required(VERSION 3.8)
project(manipulation_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)

# Generate services
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/MoveArm.srv"
  "srv/StandUp.srv"
  "srv/SetPosture.srv"
  "srv/SetMode.srv"
  "srv/ToggleAwareness.srv"
  "srv/DetectHeadTouch.srv"
  DEPENDENCIES geometry_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
