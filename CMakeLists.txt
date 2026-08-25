cmake_minimum_required(VERSION 3.20)
project(t-fos CXX)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(t-fos ${SOURCES})



