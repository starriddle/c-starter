/*
题目：
取一个整数 a 从右端开始的 4～7 位。

分析：
可以这样考虑：
    1. 先使 a 右移 4 位。
    2. 设置一个低 4 位全为 1，其余全为 0 的数，可用~(~0<<4)
    3. 将上面二者进行 & 运算。

议点：
二进制位数从0开始计数，一个8位二进制数，位数是 0 - 7位

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned a,b,c,d;
    printf("请输入整数(八进制)：");
    scanf("%o", &a);
    b = a >> 4;
    c = ~(~0 << 4);
    d = b & c;
    printf("%o\n%o\n", a, d);
    return 0;
}
