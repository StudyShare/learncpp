cmake_minimum_required(VERSION 3.12)
project(c___class)

set(CMAKE_CXX_COMPILER "/home/sym/Documents/llvm/build/bin/clang++")
set(CMAKE_CXX_STANDARD 11)

add_executable(c___class main.cpp TestA.cpp TestA.h TestB.cpp TestB.h TestC.cpp TestC.h TestD.cpp TestD.h TestE.cpp TestE.h)