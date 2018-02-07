/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_windcake_jnilearn_JNIUtil */

#ifndef _Included_com_windcake_jnilearn_JNIUtil
#define _Included_com_windcake_jnilearn_JNIUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_windcake_jnilearn_JNIUtil
 * Method:    getNativeString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_windcake_jnilearn_JNIUtil_getNativeString
  (JNIEnv *, jobject);

/*
 * Class:     com_windcake_jnilearn_JNIUtil
 * Method:    stringConcat
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_windcake_jnilearn_JNIUtil_stringConcat
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_windcake_jnilearn_JNIUtil
 * Method:    getIntArray
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_com_windcake_jnilearn_JNIUtil_getIntArray
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_windcake_jnilearn_JNIUtil
 * Method:    getNewBean
 * Signature: (Ljava/lang/String;I)Lcom/windcake/jnilearn/Bean;
 */
JNIEXPORT jobject JNICALL Java_com_windcake_jnilearn_JNIUtil_getNewBean
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_windcake_jnilearn_JNIUtil
 * Method:    getStringFromBean
 * Signature: (Lcom/windcake/jnilearn/Bean;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_windcake_jnilearn_JNIUtil_getStringFromBean
  (JNIEnv *, jclass, jobject);


#ifdef __cplusplus
}
#endif
#endif