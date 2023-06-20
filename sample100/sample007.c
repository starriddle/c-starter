/*
题目：
输出特殊图案，请在c环境中运行，看一看，Very Beautiful!

分析：
字符共有256个。不同字符，图形不一样。

议点：
1. 没搞明白，本题要干嘛-_-!!!
2. ASCII扩展字符输出比较麻烦，因此替换成相似Unicode字符串
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char *a="░", *b="█";
    printf("%s%s%s%s%s\n",b,a,a,a,b);
    printf("%s%s%s%s%s\n",a,b,a,b,a);
    printf("%s%s%s%s%s\n",a,a,b,a,a);
    printf("%s%s%s%s%s\n",a,b,a,b,a);
    printf("%s%s%s%s%s\n",b,a,a,a,b);

    return 0;
}
