/*
题目：
删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

分析：


议点：

*/

#include<stdio.h>

void deleteChar(char* str, char c)
{
    char* p = str;
    int i = 0;
    while (*p != 0)
    {
        if (*p != c)
        {
            str[i] = *p;
            i++;
        }
        p++;
    }
    str[i] = '\0';
}

int main(int argc, char const *argv[])
{
    char s[] = "www.sample.site";
    char c = 'w';
    printf("%s\n", s);
    deleteChar(s, c);
    printf("%s\n", s);
    return 0;
}
