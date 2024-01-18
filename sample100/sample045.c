/*
题目：
学习使用register定义变量的方法。

分析：


议点：
register 向编译器推荐将变量存储在 CPU寄存器 中，以提高运行效率，因而也称为寄存器变量，但编译器不一定会遵循该建议。
寄存器变量仅限局部自动变量和形式参数，不可以为全局变量、静态变量
寄存器变量因为(可能)不会被存放在内存，所以不能使用&符号来获取地址

*/

#include<stdio.h>
#include<time.h>

void fun1()
{
    int i;
    int total=0;
    for (i = 1; i < 500000000; i++)
    {
        total += i;
    }
    printf("total = %d\n", total);
}

void fun2()
{
    register int i;
    int total=0;
    for (i = 1; i < 500000000; i++)
    {
        total += i;
    }
    printf("total = %d\n", total);
}

int main(int argc, char const *argv[])
{
    int start, end;
    start = clock();
    fun2();
    end = clock();
    printf("time = %d\n", end - start);
    return 0;
}
