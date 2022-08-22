cmake_minimum_required(VERSION 3.23)
project(array_and_builtIn_functions)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(array_and_builtIn_functions
        basic-array.cpp)

add_executable(function-and-pointers function-and-pointers.cpp)
add_executable(dynamic-allocation dynamic-allocation.cpp)
add_executable(swap swap.cpp)
add_executable(min-max min-max.cpp)