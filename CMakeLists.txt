cmake_minimum_required(VERSION 3.12)
project(Lab7)

set(CMAKE_CXX_STANDARD 14)

include_directories(Lab7)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

add_executable(Lab7
        Lab7/.idea/codeStyles/Project.xml
        Lab7/.idea/Jeff.iml
        Lab7/.idea/misc.xml
        Lab7/.idea/modules.xml
        Lab7/.idea/workspace.xml
        Lab7/cmake-build-debug/cmake_install.cmake
        Lab7/cmake-build-debug/CMakeCache.txt
        Lab7/cmake-build-debug/Lab7.cbp
        Lab7/cmake-build-debug/Lab7.exe
        Lab7/cmake-build-debug/Makefile
        Lab7/CMakeLists.txt
        Lab7/Course.cpp
        Lab7/Course.hpp
        Lab7/courses.txt
        Lab7/main.cpp)
