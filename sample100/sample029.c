/*
题目：
给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

分析：
学会分解出每一位数。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,d,e,num;
    printf("请输入不多于 5 位的正整数：");
    scanf("%d", &num);
    a=num/10000;
    b=num%10000/1000;
    c=num%1000/100;
    d=num%100/10;
    e=num%10;
    if (a>0)
    {
        printf("这是一个 5 位数，各位数逆序为：%d %d %d %d %d\n", e,d,c,b,a);
    }
    else if (b>0)
    {
        printf("这是一个 4 位数，各位数逆序为：%d %d %d %d\n", e,d,c,b);
    }
    else if (c>0)
    {
        printf("这是一个 3 位数，各位数逆序为：%d %d %d\n", e,d,c);
    }
    else if (d>0)
    {
        printf("这是一个 2 位数，各位数逆序为：%d %d\n", e,d);
    }
    else
    {
        printf("这是一个 1 位数，各位数逆序为：%d\n", e);
    }
    return 0;
}
