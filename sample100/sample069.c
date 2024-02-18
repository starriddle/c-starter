/*
题目：
有n个人围成一圈，顺序排号。
从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，
问最后留下的是原来第几号的那位。

分析：


议点：

*/

#include<stdio.h>

int loop(int n)
{
    int arr[50];
    int m, k, i;
    for (i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }
    for (m=n, k=0, i=0;; i++)
    {
        if (i==n)
        {
            i=0;
        }
        if (*(arr+i)==0)
        {
            continue;
        }
        if (m==1)
        {
            break;
        }
        k++;
        if (k==3)
        {
            *(arr+i) = 0;
            k=0;
            m--;
        }
    }
    return *(arr+i);
}

int main(int argc, char const *argv[])
{
    int m, n;
    printf("请输入围成一圈的人数(<51): ");
    scanf("%d", &n);
    m = loop(n);
    printf("最后留下的是 %d 号\n", m);
    return 0;
}
