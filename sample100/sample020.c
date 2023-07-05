/*
题目：
一球从100米高度自由落下，每次落地后反跳回原高度的一半，再落下。
求它在第10次落地时，共经过多少米？第10次反弹多高？

议点：
1. 高度，经过的距离不是整数，应该使用double
2. 简化计算方式：设第0次落地开始，距离为0，反弹为10，则每次落地增加的距离为上一次反弹高度*2，反弹高度为上一次反弹高度/2
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int count = 10;
    double high = 100.0, distance = 0.0;
    for (int i = 0; i < count; i++)
    {
        distance += 2 * high;
        high /= 2;
    }
    distance -= 100;
    printf("第 %d 次，落地时共经过 %.10f 米，反弹 %.10f 米", count, distance, high);
    return 0;
}
