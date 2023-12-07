/*
题目：
一个5位数，判断它是不是回文数。
即12321是回文数，个位与万位相同，十位与千位相同。

分析：
学会分解出每一位数。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,d,e,num;
    printf("请输入一个5位数：");
    scanf("%d", &num);
    a=num/10000;
    b=num%10000/1000;
    d=num%100/10;
    e=num%10;
    if (a==e && b==d)
    {
        printf("这是一个回文数!\n");
    }
    else
    {
        printf("这不是一个回文数!\n");
    }
    return 0;
}
