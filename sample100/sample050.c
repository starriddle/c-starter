/*
题目：
#include 的应用练习。

分析：


议点：
同 sample048 样例，但将 #define 内容放入 sample050.h 头文件，并将其引入

*/

#include<stdio.h>
#include "sample050.h"

int main(int argc, char const *argv[])
{
    int i, j;
    printf("请输入两个数字：\n");
    scanf("%d %d", &i, &j);
    if(i LAG j)
    {
        printf("%d 大于 %d \n", i, j);
    }
    else if (i SMA j)
    {
        printf("%d 小于 %d \n", i, j);
    }
    else if (i EQ j)
    {
        printf("%d 等于 %d \n", i, j);
    }
    else
    {
        printf("异常！\n");
    }
    return 0;
}
