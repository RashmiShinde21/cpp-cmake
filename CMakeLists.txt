cmake_minimum_required(VERSION 3.16.3)
project(ImageRotation)

# Find OpenCV
find_package(OpenCV REQUIRED)


add_library(rotate_lib functions/rotate.cpp functions/revert_rotate.cpp)

target_include_directories(rotate_lib PUBLIC ${CMAKE_SOURCE_DIR}/funtions)

# Add executable
add_executable(imagerot main.cpp)

# Link OpenCV libraries
target_link_libraries(imagerot ${OpenCV_LIBS} rotate_lib)
#target_link_libraries(SqrtExecutable PRIVATE my_lib)
