/*
题目：
编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,
当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。

分析：


议点：

*/

#include<stdio.h>

double fun1(int n)
{
    double r = 0.0;
    for (int i = 1; i <= n; i+=2)
    {
        r += 1.0 / i;
    }
    return r;
}

double fun2(int n)
{
    double r = 0.0;
    for (int i = 2; i <= n; i+=2)
    {
        r += 1.0 / i;
    }
    return r;
}

int main(int argc, char const *argv[])
{
    int n;
    double r;
    double (*fun)(int);
    printf("请输入一个数字：");
    scanf("%d", &n);
    if (n%2 == 0)
    {
        fun = fun2;
    }
    else
    {
        fun = fun1;
    }
    r = (*fun)(n);
    printf("%f\n", r);
    return 0;
}
