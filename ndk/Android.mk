LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := lua
LOCAL_SRC_FILES := main.cpp
#LOCAL_LDLIBS    := -ld -lm


#LOCAL_C_INCLUDES := $(NDK_ROOT)/sources/cxx-stl/stlport/stlport
#LOCAL_LDLIBS := $(NDK_ROOT)/sources/cxx-stl/stlport/libs/armeabi-v7a/libstlport_static.a

#include $(BUILD_STATIC_LIBRARY) #打出来的是静态链接库
include $(BUILD_SHARED_LIBRARY) #打出来的是动态链接库