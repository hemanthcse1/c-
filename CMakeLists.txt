cmake_minimum_required(VERSION 3.29)
project(cpp_workspace)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_workspace main.cpp
        cmake-build-debug/Food.h
        Food.cpp
        cmake-build-debug/IncrementCounter.h
        IncrementCounter.cpp
)
