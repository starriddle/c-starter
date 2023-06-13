/*
题目：
输入某年某月某日，判断这一天是这一年的第几天？

分析：
以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，
特殊情况，闰年且输入月份大于3时需考虑多加一天。

议点：
输入的年月日是否需要校验正确性？
闰年的判断公元前和公元后不一致（因为没有公元0年），需要分开判断
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int year, month, day, count = 0;
    int num[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("请输入年月日(如公元前1105年2月29日: -1105 2 29)\n");
    scanf("%d %d %d", &year, &month, &day);

    // 年份校验
    if (year == 0)
    {
        printf("输入错误：年份不正确");
        return 0;
    }
    
    // 月份校验
    if (month < 1 || month > 12)
    {
        printf("输入错误：月份不正确");
        return 0;
    }
    
    // 闰年判断
    // 1. 转换公元前年份，便于统一判断
    if (year < 0)
    {
        year = -year - 1;
    }
    // 2. 判断闰年
    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        num[1] = 29;
    }
    
    // 日期校验
    if (day < 1 || day > num[month-1])
    {
        printf("输入错误：日期不正确");
        return 0;
    }
    
    // 计算输入日期为当年第几天
    for (int i = 0; i < month-1; i++)
    {
        count += num[i];
    }
    count += day;

    printf("%d\n", count);

    return 0;
}