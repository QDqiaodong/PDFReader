/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_okay_testjni_jni_JNICall */

#ifndef _Included_com_okay_testjni_jni_JNICall
#define _Included_com_okay_testjni_jni_JNICall
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_okay_testjni_jni_JNICall
 * Method:    getStringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_okay_testjni_jni_JNICall_getStringFromJNI
  (JNIEnv *, jclass);

/*
 * Class:     com_okay_testjni_jni_JNICall
 * Method:    encrypt
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT jstring JNICALL Java_com_okay_testjni_jni_JNICall_encrypt
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_okay_testjni_jni_JNICall
 * Method:    decrypt
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_okay_testjni_jni_JNICall_decrypt
  (JNIEnv *, jclass, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif