/*
题目：
学习使用按位或 |。

分析：
0|0=0; 0|1=1; 1|0=1; 1|1=1 。

议点：

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a = 077;
    int b = a | 3;
    printf("b = 077 | 3 = %d \n", b);
    a = b | 7;
    printf("b | 7 = %d \n", a);
    return 0;
}
