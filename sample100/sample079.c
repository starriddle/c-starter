/*
题目：
字符串排序。

分析：


议点：

*/

#include<stdio.h>
#include<string.h>

void swap_str(char *str1, char *str2)
{
    char str[20];
    strcpy(str, str1);
    strcpy(str1, str2);
    strcpy(str2, str);
}

int main(int argc, char const *argv[])
{
    char str1[20], str2[20], str3[20];
    printf("请输入 3 个字符串，每个字符串以回车结束：\n");
    fgets(str1, 20, stdin);
    fgets(str2, 20, stdin);
    fgets(str3, (sizeof(str3) / sizeof(str3[0])), stdin);
    if (strcmp(str1, str2) > 0)
    {
        swap_str(str1, str2);
    }
    if (strcmp(str1, str3) > 0)
    {
        swap_str(str1, str3);
    }
    if (strcmp(str2, str3) > 0)
    {
        swap_str(str2, str3);
    }
    printf("字符串排序结果：\n");
    printf("%s%s%s", str1, str2,str3);
    return 0;
}
