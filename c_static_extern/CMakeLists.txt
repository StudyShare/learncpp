cmake_minimum_required(VERSION 3.12)
project(c_static_extern C)

set(CMAKE_C_COMPILER "/home/sym/Documents/llvm/build/bin/clang")
set(CMAKE_C_STANDARD 11)

add_executable(c_static_extern main.c Test01.c Test02.c)