cmake_minimum_required(VERSION 3.28)
project(programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(programming
        lc1071.cpp
        lc1431.cpp
        lc151.cpp
        lc1768.cpp
        lc345.cpp
        lc6.cpp
        lc605.cpp)
