cmake_minimum_required(VERSION 3.6)
project(DungeonsAndDragons)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Menu.cpp Menu.h Menu.cpp)
add_executable(DungeonsAndDragons ${SOURCE_FILES})