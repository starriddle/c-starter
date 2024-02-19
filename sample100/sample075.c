/*
题目：
输入一个整数，并将其反转后输出。

分析：


议点：

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, rnum = 0;
    printf("输入一个整数：");
    scanf("%d", &num);
    while (num > 0)
    {
        rnum *= 10;
        rnum += num % 10;
        num /= 10;
    }
    printf("反转后的整数：%d\n", rnum);
    return 0;
}
