/*
题目：
有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...
求出这个数列的前20项之和。

程序分析：
请抓住分子与分母的变化规律。

议点：
后一项的分子 = 前一项的分子+分母
后一项的分母 = 前一项的分子
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2, b = 1;
    float sum = 0;
    for (int i = 0; i < 20; i ++)
    {
        sum += 1.0 * a / b;
        a = a + b;
        b = a - b;
    }
    printf("%f\n", sum);
    return 0;
}
