/*
题目：
宏#define命令练习2。

分析：


议点：

*/

#include<stdio.h>

#define exchange(a,b) {int t;t=a;a=b;b=t;}

int main(int argc, char const *argv[])
{
    int x=10, y=20;
    printf("x=%d y=%d\n", x, y);
    exchange(x,y);
    printf("x=%d y=%d\n", x, y);
    return 0;
}
