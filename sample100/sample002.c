/*
题目：
企业发放的奖金根据利润提成。
利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？

分析：
请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。

议点：
利润、奖金均未做类型限制说明，貌似只能使用 double。
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    double i, bonus;
    printf("请输入利润：");
    scanf("%lf", &i);

    if (i<=100000)
    {
        bonus = i * 0.1;
    }
    else if (i <= 200000)
    {
        i -= 100000;
        bonus = 100000 * 0.1 + i * 0.075;
    }
    else if (i <= 400000)
    {
        i -= 200000;
        bonus = 100000 * 0.1 + 100000 * 0.075 + i * 0.05;
    }
    else if (i <= 600000)
    {
        i -= 400000;
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + i * 0.03;
    }
    else if (i <= 1000000)
    {
        i -= 600000;
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + i * 0.015;
    }
    else
    {
        i -= 1000000;
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + i * 0.01;
    }
    
    printf("bonus = %.2lf\n", bonus);
    return 0;
}
