/*
题目：
利用条件运算符的嵌套来完成此题：
学习成绩>=90分的同学用A表示，
60-89分之间的用B表示，
60分以下的用C表示。

分析：(a>b)?a:b这是条件运算符的基本例子。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    char c = a>=90 ? 'A' : (a>=60 ? 'B' : 'C');
    printf("%c\n", c);
    return 0;
}
