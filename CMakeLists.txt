cmake_minimum_required(VERSION 3.6)
project(Lab04_string)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

set(CMAKE_EXE_LINKER_FLAGS -static)

add_executable(Lab04_string ${SOURCE_FILES})