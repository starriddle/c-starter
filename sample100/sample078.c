/*
题目：
找到年龄最大的人，并输出。请找出程序中有什么问题。

分析：


议点：

*/

#include<stdio.h>

struct man
{
    char name[20];
    int age;
} person[3] = {"li", 18, "wang", 19, "zhao", 20};

int main(int argc, char const *argv[])
{
    struct man *mp, *p;
    int m = 0;
    p = person;
    for (int i = 0; i < 3; i++)
    {
        if (m < p->age)
        {
            m = p->age;
            mp = p;
        }
        p ++;
    }
    printf("%s\t%d\n", mp->name,mp->age);
    return 0;
}
