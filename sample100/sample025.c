/*
题目：
求1+2!+3!+...+20!的和。

分析：
此程序只是把累加变成了累乘。

议点：
累加+累乘
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    long sum = 0, mix = 1;
    for (int i = 1; i <= 20; i ++)
    {
        mix *= i;
        sum += mix;
        printf("%ld\t%ld\n", mix, sum);
    }
    printf("%ld\n", sum);
    return 0;
}
