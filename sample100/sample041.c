/*
题目：
学习 static 定义静态变量的用法。

分析：


议点：
变量修饰符 存储说明符 auto、register、extern、static
存储期：自动存储期(auto、register)和静态存储期(extern、static)

static：变量在第一次声明后建立，此后一直存在，在声明语句执行后可见，到所处代码块结束后不可见
*/

#include<stdio.h>

void fun()
{
    int i=0;
    static int si=0;
    printf("i=%d\n", i);
    printf("static i=%d\n", si);
    i++;
    si++;
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        fun();
    }
    
    return 0;
}
