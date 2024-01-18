/*
题目：
学习使用auto定义变量的用法。

分析：


议点：
在代码块内外重复声明了相同名称的变量，
在代码块内部，自声明变量开始，该名称指向内部新声明的变量，
除此之外，该名称指向外部声明的变量。

auto：变量在声明时建立，在所处代码块中存在，退出该代码块时撤销。

局部变量没有显示指定存储类别时，默认为 auto 类型，因而也称为自动变量

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    auto int num = 2;
    for (int i = 0; i < 5; i++)
    {
        printf("num = %d\n", num);
        num++;
        {
            printf("内部代码块 声明前 num = %d\n", num);
            auto int num = 1;
            printf("内部代码块 声明后 num = %d\n", num);
            num++;
        }
    }
    
    return 0;
}
