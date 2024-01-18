/*
题目：
学习使用static的另一用法。

分析：


议点：
代码块内部静态变量num仅在声明语句后可见，到代码块结束后隐藏不可见
其他地方的num均指向外部的局部变量

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num = 2;
    for (int i = 0; i < 5; i++)
    {
        printf("外部 num = %d\n", num);
        {
            printf("内部 声明前 num = %d \n", num);
            static int num = 1;
            printf("内部 声明后 num = %d \n", num);
            num++;
        }
        printf("外部 num = %d\n\n", num);
        num++;
    }
    
    return 0;
}
