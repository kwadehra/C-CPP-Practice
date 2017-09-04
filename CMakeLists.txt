cmake_minimum_required(VERSION 3.8)
project(CLion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp beforeRecursion.h recursion.h)
add_executable(CLion ${SOURCE_FILES} beforeRecursion.h)