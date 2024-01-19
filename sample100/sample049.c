/*
题目：
#if #ifdef和#ifndef的综合应用。

分析：


议点：

*/

#include<stdio.h>

#define MAX
#define MAXIMUM(x,y) ((x)>(y))?(x):(y)
#define MINIMUM(x,y) ((x)<(y))?(x):(y)

int main(int argc, char const *argv[])
{
    int i, j;
    printf("请输入两个数字：\n");
    scanf("%d %d", &i, &j);

    #ifdef MAX
    printf("更大的数字是 %d \n", MAXIMUM(i,j));
    #else
    printf("更小的数字是 %d \n", MINIMUM(i,j));
    #endif

    #ifndef MIN
    printf("更大的数字是 %d \n", MAXIMUM(i,j));
    #else
    printf("更小的数字是 %d \n", MINIMUM(i,j));
    #endif

    #undef MAX
    #ifdef MAX
    printf("更大的数字是 %d \n", MAXIMUM(i,j));
    #else
    printf("更小的数字是 %d \n", MINIMUM(i,j));
    #endif

    #define MIN
    #ifndef MIN
    printf("更大的数字是 %d \n", MAXIMUM(i,j));
    #else
    printf("更小的数字是 %d \n", MINIMUM(i,j));
    #endif

    return 0;
}
