cmake_minimum_required(VERSION 3.8)
project(MemoryManagement)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Resource.cpp Resource.h Memory.cpp Memory.h Person.cpp Person.h)
add_executable(MemoryManagement ${SOURCE_FILES})