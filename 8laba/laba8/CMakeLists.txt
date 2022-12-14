cmake_minimum_required(VERSION 3.23)
project(laba8 C)

set(CMAKE_C_STANDARD 99)

add_executable(laba8 main.c string.c header.h)

add_executable(string string.c)
add_executable(main /E:/matricaCF/main.c)
add_executable(CMakeLists CMakeLists.txt)