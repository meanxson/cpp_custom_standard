cmake_minimum_required(VERSION 3.20)
project(cpp_custom_standard)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_custom_standard main.cpp custom-standart/custom_standard.h)
