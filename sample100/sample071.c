/*
题目：
编写input()和output()函数输入，输出5个学生的数据记录。

分析：


议点：

*/

#include<stdio.h>

typedef struct Student
{
    char name[20];
    char sex[1];
    int age;
} Student;

void output_stu(Student *stu, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\n", stu[i].name, stu[i].sex, stu[i].age);
    }
}

void input_stu(Student *stu, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
    }
}

int main(int argc, char const *argv[])
{
    Student stu[5];
    printf("请输入 5 个学生的信息：\n姓名\t性别\t年龄\n");
    input_stu(stu, 5);
    printf("5 个学生的信息如下：\n姓名\t性别\t年龄\n");
    output_stu(stu, 5);
    return 0;
}
