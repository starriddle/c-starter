/*
题目：
判断一个数字是否为质数。

分析：
质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。

议点：

*/

#include<stdio.h>
#include<math.h>

int isPrime(int num)
{
    if (num<2)
    {
        return 0;
    }
    if (num<4)
    {
        return 1;
    }
    if (num%2==0)
    {
        return 0;
    }
    for (int i = 3; i <= sqrt(num); i=i+2)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("请输入一个数字：");
    scanf("%d", &num);
    if (isPrime(num)==0)
    {
        printf("不");
    }
    printf("是质数!\n");
    return 0;
}
