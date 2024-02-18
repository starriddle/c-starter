/*
题目：
输入3个数a,b,c，按大小顺序输出。

分析：
利用指针方法。

议点：

*/

#include<stdio.h>

void swap(int *i, int *j)
{
    int t;
    t = *i;
    *i = *j;
    *j = t;
}

int main(int argc, char const *argv[])
{
    int *a, *b, *c;
    int num1, num2, num3;
    printf("input a, b, c: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    a = &num1;
    b = &num2;
    c = &num3;
    if (*a > *b)
    {
        swap(a, b);
    }
    if (*a > *c)
    {
        swap(a, c);
    }
    if (*b > *c)
    {
        swap(b, c);
    }
    printf("%d %d %d\n", *a, *b, *c);
    return 0;
}
