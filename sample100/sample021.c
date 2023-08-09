/*
题目：
猴子吃桃问题：
猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
以后每天早上都吃了前一天剩下的一半零一个。
到第10天早上想再吃时，见只剩下一个桃子了。
求第一天共摘了多少。

分析：
采取逆向思维的方法，从后往前推断。
1)设x1为第一天桃子数，设x2为第二天桃子数， 则：
    x2=x1/2-1, x1=(x2+1)*2
    x3=x2/2-1, x2=(x3+1)*2
以此类推：x前=(x后+1)*2

2)从第10天可以类推到第1天，是一个循环过程。

议点：
没考虑桃子数量是奇数，吃一半该怎么算的问题么？
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int day = 9, num = 1;
    do
    {
        num = (num + 1) * 2;
        day --;
    } while (day > 0);
    printf("%d\n", num);
    return 0;
}
