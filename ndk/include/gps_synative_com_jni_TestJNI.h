/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class gps_synative_com_jni_TestJNI */

#ifndef _Included_gps_synative_com_jni_TestJNI
#define _Included_gps_synative_com_jni_TestJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     gps_synative_com_jni_TestJNI
 * Method:    testJniAdd
 * Signature: (II)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gps_synative_com_jni_TestJNI_testJniAdd
  (JNIEnv *, jobject, jint, jint);

JNIEXPORT jint JNICALL Java_gps_synative_com_jni_TestJNI_add
        (JNIEnv *, jobject, jint, jint);

jstring charTojstring(JNIEnv* env, const char* pat);
char* jstringToChar(JNIEnv* env, jstring jstr);

int add(int a,int b);

#ifdef __cplusplus
}
#endif
#endif