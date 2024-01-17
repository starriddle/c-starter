/*
题目：
求100之内的素数。

分析：
质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。

议点：

*/

#include<stdio.h>
#include<math.h>

void printPrime(int min, int max, int size)
{
    if (max < 2)
    {
        return;
    }
    int num = 0;
    if (min < 3)
    {
        printf("2 ");
        num ++;
        min = 3;
    }
    if (min%2 == 0)
    {
        min ++;
    }
    
    for (int i = min; i <= max; i += 2)
    {
        int k = sqrt(i), j;
        for (j = 3; j <= k; j += 2)
        {
            if (i%j==0)
            {
                break;
            }
        }
        if (j>k)
        {
            printf("%d ", i);
            num++;
            if (num%5 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int min=4, max=100, size=5;
    printPrime(min, max, size);
    return 0;
}
