/*
题目：
练习函数调用。

分析：


议点：
C语言按书写顺序编译，如果调用的函数还未定义，建议先声明该函数。
C++规范比C规范更严格，前者如不事先声明，直接编译报错，后者只是警告，不影响编译运行
*/

#include<stdio.h>

void f1()
{
    void f2(); // f2()尚未定义，需要先声明
    printf("f1()开始……\n");
    f2();
    printf("f1()结束！\n");
}

int main(int argc, char const *argv[])
{
    // void f1(); // f1()已定义，不需要再次声明
    f1();
    return 0;
}

void f2()
{
    printf("f1()开始……\n");
    printf("f1()结束！\n");
}
