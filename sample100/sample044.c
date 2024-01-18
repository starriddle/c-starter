/*
题目：
学习使用如何调用外部函数。

分析：


议点：
add()方法中 a 指向内部声明的局部变量，而非外部声明的全局变量

*/

#include<stdio.h>

int a,b,c;

void add()
{
    int a;
    a = 1;
    c = a + b;
}

int main(int argc, char const *argv[])
{
    a=b=4;
    add();
    printf("a = %d\nb = %d\nc = %d\n", a,b,c);
    return 0;
}
