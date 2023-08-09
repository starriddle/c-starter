/*
题目：
两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
以抽签决定比赛名单。有人向队员打听比赛的名单。
a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

议点：
嵌套循环
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char a, b, c;
    for (a = 'x'; a <= 'z'; a ++)
    {
        if (a == 'x')
        {
            continue;
        }
        
        for (b = 'x'; b <= 'z'; b ++)
        {
            if (b == a)
            {
                continue;
            }
            
            for (c = 'x'; c < 'z'; c ++)
            {
                if (c == a || c == b || c == 'x' || c == 'z')
                {
                    continue;
                }

                printf("a -- %c\nb -- %c\nc -- %c\n", a, b, c);
            }
        }
    }
    return 0;
}
