/*
题目：
学习使用按位取反~。

分析：
~0=-1; ~1=-2;

议点：

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0xf0;
    int b = ~a;
    printf("%d 的按位取反值为 %d \n", a, b);
    printf("%o 的按位取反值为 %o \n", a, b);
    printf("%x 的按位取反值为 %x \n", a, b);
    return 0;
}
