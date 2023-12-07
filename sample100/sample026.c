/*
题目：
利用递归方法求5!。

分析：
递归公式：f(n)=f(n_1)*n
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5;
    int fact(int);
    printf("%d! = %d \n", n, fact(n));
    return 0;
}

int fact(int n)
{
    int sum;
    if (n == 0)
    {
        sum = 1;
    }
    else
    {
        sum = n * fact(n-1);
    }
    return sum;
}
