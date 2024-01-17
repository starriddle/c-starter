/*
题目：
有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

分析：
首先判断此数是否大于最后一个数,然后再考虑插入中间的数的情况,插入后此元素之后的数,依次后移一个位置。

议点：

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num[11]= {3,14,26,39,43,56,69,78,88,100};
    int number, middle, left=0, right=9, index=-1;
    printf("原始数组是：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%4d", num[i]);
    }
    printf("\n");
    printf("\n插入一个新的数字：");
    scanf("%d", &number);

    if (number >= num[9])
    {
        index = 10;
    }
    else if (number <= num[0])
    {
        index = 0;
    }
    else
    {
        while (right-left > 1)
        {
            middle = (left+right)/2;
            if (number == num[middle])
            {
                index = middle;
                break;
            }
            else if (number > num[middle])
            {
                left = middle;
            }
            else
            {
                right = middle;
            }
        }
        if (index == -1)
        {
            index = right;
        }
    }

    for (int i = index; i < 10; i++)
    {
        number += num[i];
        num[i] = number - num[i];
        number -= num[i];
    }
    num[10] = number;

    printf("新的数组是：\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%4d", num[i]);
    }
    printf("\n");
    return 0;
}
