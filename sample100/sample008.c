/*
题目：
输出9*9口诀。

分析：
分行与列考虑，共9行9列，i控制行，j控制列。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%dx%d=%2d\t", j, i, j*i);
        }
        printf("\n");
    }
    return 0;
}
