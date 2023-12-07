/*
题目：
利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5;
    void reverseChar(int);
    printf("请输入%d个字符：\n", n);
    reverseChar(n);
    printf("\n");
    return 0;
}

void reverseChar(int n)
{
    char c;
    if (n==1)
    {
        c=getchar();
        printf("相反顺序输出：\n");
        putchar(c);
    }
    else
    {
        c=getchar();
        reverseChar(n-1);
        putchar(c);
    }
    
    
}
