package com.windcake.jnilearn;

/**
 * 创建者： windcake
 * 创建时间： 2018/1/10上午9:39.
 */

public class Bean
{
    private String msg;
    private int what;

    public Bean(String msg,int what)
    {
        this.msg=msg;
        this.what=what;
    }


    public String getMsg() {
        return msg;
    }

    public void setMsg(String msg) {
        this.msg = msg;
    }

    public int getWhat() {
        return what;
    }

    public void setWhat(int what) {
        this.what = what;
    }

    @Override
    public String toString() {
        return "Msg:"+msg+";What:"+what;
    }
}
