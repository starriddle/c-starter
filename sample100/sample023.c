/*
题目：
打印出如下图案（菱形）。

   *
  ***
 *****
*******
 *****
  ***
   *

程序分析：
先把图形分成两部分来看待，前四行一个规律，后三行一个规律，
利用双重for循环，第一层控制行，第二层控制列。

议点：
没必要分成两部分，切换递减、递增，变换增量符号即可。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int max =7;
    for (int row = 1; row <= max; row ++)
    {
        int star = row * 2 - 1;
        if (star > max)
        {
            star = max * 2 - star;
        }
        int blank = (max - star) / 2;
        for (int i = 0; i < blank; i ++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j ++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
