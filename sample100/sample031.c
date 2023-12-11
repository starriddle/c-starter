/*
题目：
请输入星期几的第一个字母来判断一下是星期几，
如果第一个字母一样，则继续判断第二个字母。

分析：
用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。

议点：

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char i,j;
    printf("请输入第一个字母：");
    scanf("%c", &i);
    getchar(); // 将换行符从输入流中读取丢弃
    switch (i)
    {
    case 'm':
        printf("Monday\n");
        break;
    case 'w':
        printf("Wednesday\n");
        break;
    case 'f':
        printf("Friday\n");
        break;
    case 't':
        printf("请输入第二个字母：");
        scanf("%c", &j);
        if (j=='u')
        {
            printf("Tuesday\n");
            break;
        }
        if (j=='h')
        {
            printf("Thursday\n");
            break;
        }
        goto le;
    case 's':
        printf("请输入第二个字母：");
        scanf("%c", &j);
        if (j=='a')
        {
            printf("Saturday\n");
            break;
        }
        if (j=='u')
        {
            printf("Sunday\n");
            break;
        }
le: default:
        printf("error\n");
        break;
    }
    return 0;
}
