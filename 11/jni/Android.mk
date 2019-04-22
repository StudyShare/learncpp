LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := lua
LOCAL_SRC_FILES := main.cpp Test1.cpp Test1.h Test2.cpp Test2.h Test3.cpp Test3.h
LOCAL_LDLIBS    := -ld -lm

include $(BUILD_STATIC_LIBRARY)
