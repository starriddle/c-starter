/*
题目：
输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

分析：
利用while语句,条件为输入的字符不为'\n'.

议点：
使用while语句循环读取char，则仅限ASCII码，无法识别其他字符
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    int letter=0, blank=0, number=0, symbol=0;
    while((c=getchar())!='\n')
    {
        if (c == ' ')
        {
            blank ++;
        }
        else if (c >= '0' && c <='9')
        {
            number ++;
        }
        else if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        {
            letter ++;
        }
        else
        {
            symbol ++;
        }
    }
    printf("英文字母：%d\n空格：%d\n数字：%d\n其他字符：%d\n", letter, blank, number, symbol);
    return 0;
}
