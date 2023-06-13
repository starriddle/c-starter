/*
题目：
有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

分析：
可填在百位、十位、个位的数字都是1、2、3、4。
组成所有的排列后再去掉不满足条件的排列。

议点：
如只求个数，则可直接计算出来；
要列出所有三位数，只能循环组合。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    // 统计1：直接计算个数
    printf("能组成 %d 个互不相同且无重复数字的三位数\n", 4*3*2);

    int count = 0;
    // 三重循环
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (i != j) // 确保 i、j 不相同
            {
                for (int k = 1; k < 5; k++)
                {
                    if (i != k && j != k) // 确保 k 与 i、j 不相同
                    {
                        printf("\t%d%d%d", i, j, k);
                        count ++; // 统计2：进行计数
                    }
                }
            }
        }
        printf("\n");
    }
    printf("共计 %d 个互不相同且无重复数字的三位数\n", count);
    return 0;
}
