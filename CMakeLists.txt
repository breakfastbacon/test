cmake_minimum_required(VERSION 2.8.7)
project(project)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(function function.cpp)
add_executable(project main.cpp)
target_link_libraries(project function)

add_subdirectory(test)