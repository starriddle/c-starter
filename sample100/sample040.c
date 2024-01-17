/*
题目：
将一个数组逆序输出。

分析：
用第一个与最后一个交换。

议点：
仅要求输出的话完全可以倒序输出，无需交换
*/

#include<stdio.h>

#define N 10

int main(int argc, char const *argv[])
{
    int num[N] = {0,1,2,3,4,5,6,7,8,9};
    printf("原始数组是：\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");

    for (int i = 0; i < N/2; i++)
    {
        num[i] += num[N-1-i];
        num[N-1-i] = num[i] - num[N-1-i];
        num[i] -= num[N-1-i];
    }
    
    printf("逆序数组是：\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");

    return 0;
}
