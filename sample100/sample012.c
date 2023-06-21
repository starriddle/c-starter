/*
题目：
判断101-200之间有多少个素数，并输出所有素数。

分析：
判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。

议点：
1. 除了 2 以外，可以排除所有偶数都不是素数
2. 排除偶数（只剩奇数）后，整除判断时，可以排除所有偶数除数的整除判断（肯定不会整除）
*/

#include<stdio.h>
#include<math.h> // gcc 编译时需要添加参数 -lm，-l 指定库，m math库

int main(int argc, char const *argv[])
{
    for (int i = 101; i < 201; i = i+2)
    {
        int s = sqrt(i) + 1;
        int flag = 0;
        for (int j = 3; j < s; j = j+2)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%4d", i);
        }
    }
    printf("\n");
    return 0;
}
