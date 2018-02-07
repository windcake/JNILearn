package com.windcake.jnilearn;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity
{


    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textView = (TextView) findViewById(R.id.main_textview);
        JNIUtil jniUtil = new JNIUtil();

        String nativeString = jniUtil.getNativeString();
        String concat = JNIUtil.stringConcat("中国", "加油");

        int[] intArray = JNIUtil.getIntArray(10);
        textView.setText(IntArrayToString(intArray));

        Bean newBean = JNIUtil.getNewBean("a new bean", 1);
        textView.setText(newBean.getMsg());





    }


    /**将int[]转换成逗号分隔便于显示的辅助函数*/
    private String IntArrayToString(int[] ints)
    {
        StringBuilder str=new StringBuilder();
        str.append('[');
        for (int i:ints)
        {
            str.append(i);
            str.append(',');
        }
        str.deleteCharAt(str.length()-1);
        str.append(']');
        return str.toString();
    }
}
