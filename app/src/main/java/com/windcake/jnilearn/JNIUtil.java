package com.windcake.jnilearn;

/**
 * 创建者： windcake
 * 创建时间： 2018/1/9下午2:57.
 */

public class JNIUtil
{

    static {

        System.loadLibrary("NativeGetString");

    }

//  native方法
    public native String getNativeString();

    public native static String stringConcat(String str1,String str2);

    public native static int[] getIntArray(int size);

    public native static Bean getNewBean(String msg,int what);

    public native static String getStringFromBean(Bean bean);





}
