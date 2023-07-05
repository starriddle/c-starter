/*
题目：
求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

分析：
关键是计算出每一项的值。

议点：
1. 按提议，输入的 a 应该为个位数，避免歧义，假设a和个数均不为 0，即：a 为1~9，个数为正整数，未免溢出，个数最大为 18
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, n;
    long s=0, num=0;
    scanf("%d %d", &a, &n);
    if (a>0 && n>0)
    {
        for (int i = 0; i < n; i++)
        {
            num = num * 10 + a;
            s += num;
        }
    }
    printf("%ld\n", s);
    return 0;
}
