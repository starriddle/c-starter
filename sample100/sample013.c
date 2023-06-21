/*
题目：
打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。
例如：153是一个“水仙花数”，因为153 = 1的三次方＋5的三次方＋3的三次方。

分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 100; i < 1000; i++)
    {
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;
        int j = a*a*a + b*b*b + c*c*c;
        if (i == j)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
