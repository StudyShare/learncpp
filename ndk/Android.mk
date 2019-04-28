LOCAL_PATH := $(call my-dir)/include

include $(CLEAR_VARS)

LOCAL_MODULE    := JNI
LOCAL_SRC_FILES := gps_synative_com_jni_TestJNI.c
#LOCAL_LDLIBS    := -ld -lm
LOCAL_CFLAGS += -std=c11

LOCAL_LDLIBS += -llog

#LOCAL_C_INCLUDES := $(NDK_ROOT)/sources/cxx-stl/stlport/stlport
#LOCAL_LDLIBS := $(NDK_ROOT)/sources/cxx-stl/stlport/libs/armeabi-v7a/libstlport_static.a

#include $(BUILD_STATIC_LIBRARY) #打出来的是静态链接库
include $(BUILD_SHARED_LIBRARY) #打出来的是动态链接库