#!/usr/bin/env bash
export ndk=/home/sym/Android/Sdk/android-ndk-r16b/ndk-build
$ndk NDK_PROJECT_PATH=. NDK_APPLICATION_MK=Application.mk APP_BUILD_SCRIPT=Android.mk NDK_LOG=1
