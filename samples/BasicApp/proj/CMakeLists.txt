cmake_minimum_required(VERSION 3.0)
set(CMAKE_VERBOSE_MAKEFILE on)
project(Basic)

set(TOP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/..")
set(SRC_DIR "${TOP_DIR}/src")
set(INC_DIR "${TOP_DIR}/../..")

add_definitions(-std=c++14)

add_executable(Basic ${SRC_DIR}/BasicApp.cpp)

target_include_directories(Basic PUBLIC ${INC_DIR})
