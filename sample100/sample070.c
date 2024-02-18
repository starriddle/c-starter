/*
题目：
写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。

分析：


议点：

*/

#include<stdio.h>

int len_str(char *s)
{
    int n = 0;
    while (*s != '\0')
    {
        n++;
        s++;
    }
    return n;
}

int main(int argc, char const *argv[])
{
    int len;
    char str[51];
    printf("请输入字符串(长度<50, 不含空白字符)：\n");
    scanf("%s", str);
    len=len_str(str);
    printf("字符串有 %d 个字符。\n", len);
    return 0;
}
