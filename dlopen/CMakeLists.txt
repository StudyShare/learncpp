cmake_minimum_required(VERSION 3.12)
project(dlopen C)

set(CMAKE_C_STANDARD 11)

add_executable(dlopen main.c Test.c Test.h)