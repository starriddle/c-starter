/*
题目：
输入三个整数x,y,z，请把这三个数由小到大输出。

分析：
我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。

议点：
题中整数范围未作限制，此处暂时限制为 int。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("input x y z:\n");
    scanf("%d %d %d", &x, &y, &z);
    
    if (x > y)
    {
        x += y;
        y = x - y;
        x -= y;
    }
    if (x > z)
    {
        x += z;
        z = x - z;
        x -= z;
    }
    if (y > z)
    {
        y += z;
        z = y - z;
        y -= z;
    }

    printf("%d %d %d\n", x, y, z);
    return 0;
}
