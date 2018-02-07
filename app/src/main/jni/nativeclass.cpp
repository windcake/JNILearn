//
// Created by windcake on 2018/1/9.
//

#include "com_windcake_jnilearn_JNIUtil.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
#include "stddef.h"

/*
 * Class:     com_windcake_jnilearn_JNIUtil
 * Method:    getNativeString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_windcake_jnilearn_JNIUtil_getNativeString(JNIEnv *env, jobject jclass)
{
   return env -> NewStringUTF("Hello Native World");
}

/*
 * Class:     com_windcake_jnilearn_JNIUtil
 * Method:    stringConcat
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 * 连接两个来自JAVA层的字符串，并返回。
 */
JNIEXPORT jstring JNICALL Java_com_windcake_jnilearn_JNIUtil_stringConcat
  (JNIEnv *env, jclass clazz, jstring str1, jstring str2)
  {
 // 将jstring转换成char*指针
    const char* s1 = env -> GetStringUTFChars(str1,NULL);
    const char* s2 = env -> GetStringUTFChars(str2,NULL);

// 计算两个字符串的长度
    int size = strlen(s1) + strlen(s2);

    char* n_char = new char[size + 1];

    strcpy(n_char,s1);
    strcat(n_char,s2);

    jstring rs = env -> NewStringUTF(n_char);

    delete [] n_char;

//  释放资源
    env->ReleaseStringUTFChars(str1,s1);
    env->ReleaseStringUTFChars(str2,s2);
    return rs;
  }

  JNIEXPORT jintArray JNICALL Java_com_windcake_jnilearn_JNIUtil_getIntArray
  (JNIEnv *env, jclass clazz, jint size)
  {

       //srand((int)time(0));
       jint* rs = new jint[size];

       for(int i=0;i<size;i++)
       {
        rs[i] = i;
       }

       jintArray array = env -> NewIntArray(size);

       env -> SetIntArrayRegion(array,0,size,rs);

       return array;
  }

  JNIEXPORT jobject JNICALL Java_com_windcake_jnilearn_JNIUtil_getNewBean
    (JNIEnv *env, jclass clazz, jstring msg, jint what)
    {
        jclass bean_clz = env -> FindClass("com/windcake/jnilearn/Bean");

        if(bean_clz == NULL)
        {
            //LOGE("can't find class");
            return NULL;
        }

        jmethodID bean_init = env -> GetMethodID(bean_clz,"<init>","(Ljava/lang/String;I)V");

        if(bean_init = NULL)
        {
            //LOGE("can't find init function");
            return NULL;
        }

        jobject bean = env -> NewObject(bean_clz,bean_init,msg,what);

        return bean;
    }

JNIEXPORT jstring JNICALL Java_com_windcake_jnilearn_JNIUtil_getStringFromBean
  (JNIEnv *env, jclass clazz, jobject bean);
  {

  jclass bean_clz = env -> FindClass("com/windcake/jnilearn/Bean");

  jmethodID bean_getmsg = env -> GetMethodID(bean_clz,"getMsg","()Ljava/lang/String;");
  jstring jmsg = (jstring)env -> CallObjectMethod(bean,bean_getmsg);

  const char *msg = env -> GetStringUTFChars(jmsg,NULL);
  }