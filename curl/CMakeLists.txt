cmake_minimum_required(VERSION 3.12)
project(curl1)

#include_directories("/usr/local/include")
#LINK_DIRECTORIES("/usr/local/lib")
LINK_LIBRARIES(curl)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_COMPILER "/home/sym/Documents/llvm/build/bin/clang++")

add_executable(curl1 main.cpp CurlExample.cpp CurlExample.h)