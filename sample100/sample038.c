/*
题目：
求一个3*3矩阵对角线元素之和

分析：
利用双重for循环控制输入二维数组，再将a[i][i]累加后输出。

议点：

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int size, num, sum=0;
    printf("请输入矩阵大小：");
    scanf("%d", &size);
    printf("请输入矩阵(%d*%d)：\n", size, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &num);
            if (i==j)
            {
                sum += num;
            }
        }
    }
    printf("对角线之和：%d\n", sum);
    return 0;
}
