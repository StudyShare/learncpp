cmake_minimum_required(VERSION 3.12)
project(ndk)

set(CMAKE_CXX_STANDARD 11)
include_directories('include')


add_executable(ndk gps_synative_com_jni_TestJNI.c Test.h Test.c Test01.h Test01.c Test02.c Test03.c Test03.h)