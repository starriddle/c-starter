/*
题目：
输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。

分析：


议点：

*/

#include<stdio.h>

void swap_a(int *arr, int n)
{
    int *min, *max, tmp;
    max = &arr[0];
    min = &arr[n-1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *max)
        {
            max = &arr[i];
        }
        if (arr[i] < *min)
        {
            min = &arr[i];
        }
    }
    if (*max > arr[0])
    {
        tmp = *max;
        *max = arr[0];
        arr[0] = tmp;
    }
    if (*min < arr[n-1])
    {
        tmp = *min;
        *min = arr[n-1];
        arr[n-1] = tmp;
    }
}

int main(int argc, char const *argv[])
{
    int n, a[25];
    printf("设置数组长度(<25): ");
    scanf("%d", &n);
    printf("输入 %d 个元素：\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    swap_a(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
