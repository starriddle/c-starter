/*
题目：
要求输出国际象棋棋盘。

分析：
用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。

议点：
ASCII扩展字符输出比较麻烦，因此替换成相似Unicode字符串
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char *wb = "██";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i+j)%2 == 0)
            {
                printf("%s", wb);
            }
            else
            {
                printf("  ");
            }
        }
            printf("\n");
    }
    return 0;
}
