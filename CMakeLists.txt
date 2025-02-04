cmake_minimum_required(VERSION 3.16.3)
project(ImageRotation)

# Find OpenCV
find_package(OpenCV REQUIRED)

# Add executable
add_executable(imagerot main.cpp)

# Link OpenCV libraries
target_link_libraries(imagerot ${OpenCV_LIBS})
