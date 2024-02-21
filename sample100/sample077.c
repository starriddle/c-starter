/*
题目：
填空练习（指向指针的指针）。

分析：


议点：

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char *s[] = {"man", "woman", "girl", "boy", "sister", "brother"};
    char **q;
    for (int i = 0; i < 6; i++)
    {
        q=&s[i];
        printf("%s\t", *q);
    }
    printf("\n");
    return 0;
}
