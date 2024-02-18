/*
题目：
有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。

分析：


议点：

*/

#include<stdio.h>

void print_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void move_arr(int *arr, int n, int offset)
{
    int tmp;
    offset %= n;

    while (offset)
    {
        tmp = *(arr+n-1);
        for (int i = n-1; i > 0; i--)
        {
            *(arr+i) = *(arr+i-1);
        }
        *arr = tmp;
        offset--;
    }
}

int main(int argc, char const *argv[])
{
    int offset, n, arr[25];
    printf("设置数组长度(<25): ");
    scanf("%d", &n);
    printf("输入 %d 个元素：\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("设置偏移量: ");
    scanf("%d", &offset);
    print_arr(arr, n);
    move_arr(arr, n, offset);
    print_arr(arr, n);
    return 0;
}
