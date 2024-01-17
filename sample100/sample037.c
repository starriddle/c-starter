/*
题目：
对10个数进行排序。

分析：
可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换。

议点：

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num[10];
    printf("请输入 10 个数字：\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (num[i] > num[j])
            {
                num[i] += num[j];
                num[j] = num[i] - num[j];
                num[i] -= num[j];
            }
        }
    }

    printf("排序结果是：\n");
    for (int k = 0; k < 10; k++)
    {
        printf("%d ", num[k]);
    }
    printf("\n");
    return 0;
}
