/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ManyMouse */

#ifndef _Included_ManyMouse
#define _Included_ManyMouse
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ManyMouse
 * Method:    Init
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ManyMouse_Init
  (JNIEnv *, jclass);

/*
 * Class:     ManyMouse
 * Method:    Quit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ManyMouse_Quit
  (JNIEnv *, jclass);

/*
 * Class:     ManyMouse
 * Method:    DeviceName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ManyMouse_DeviceName
  (JNIEnv *, jclass, jint);

/*
 * Class:     ManyMouse
 * Method:    PollEvent
 * Signature: (Lorg/icculus/manymouse/ManyMouseEvent;)Z
 */
JNIEXPORT jboolean JNICALL Java_ManyMouse_PollEvent
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
