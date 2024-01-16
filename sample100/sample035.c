/*
题目：
字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。

分析：


议点：

*/

#include<stdio.h>

void reverse(char* s)
{
    int len=0;
    char* p=s;
    while (*p!=0)
    {
        len++;
        p++;
    }

    char tmp;
    for (int i = 0; i < len / 2; i++)
    {
        tmp = *(s+i);
        *(s+i) = *(s+len-1-i);
        *(s+len-1-i) = tmp;
    }
}

int main(int argc, char const *argv[])
{
    char s[] = "www.sample.com";
    printf("%s\n", s);
    reverse(s);
    printf("%s\n", s);
    return 0;
}
