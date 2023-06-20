/*
题目：
打印楼梯，同时在楼梯上方打印两个笑脸。

分析：
用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。

议点：
ASCII扩展字符输出比较麻烦，因此替换成相似Unicode字符串
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("🙂🙂\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("██");
        }
        printf("\n");
    }
    
    return 0;
}
