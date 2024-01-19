/*
题目：
宏#define命令练习。

分析：


议点：

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)

int main(int argc, char const *argv[])
{
    int num, again = TRUE;
    printf("计算平方值(值为 0 则结束)\n");
    while (again)
    {
        printf("\n请输入数字：");
        scanf("%d", &num);
        printf("%d 的平方为 %d \n", num, SQ(num));
        if (num == 0)
        {
            again = FALSE;
        }
    }
    return 0;
}
