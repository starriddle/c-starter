/*
题目：
古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？

分析：　
兔子的规律为数列1,1,2,3,5,8,13,21....

议点：
1. 斐波那契数列，f(0)=1，f(1)=1，f(n)=f(n-1)+f(n-2)，(n>1)
2. 范围：4个字节(int)限制 46 个数，8个字节(long)限制 92 个数
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    long prev = 1, next = 1;
    for (int i = 0; i < 90; i++)
    {
        if (i > 1)
        {
            next += prev;
            prev = next - prev;
        }
        if (i % 5 == 0)
        {
            printf("\n");
        }
        printf("%20ld", next);
    }
    printf("\n");
    return 0;
}
