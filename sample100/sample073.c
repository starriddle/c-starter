/*
题目：
反向输出一个链表。

分析：


议点：

*/

#include<stdio.h>
#include<malloc.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} Node, *List;

List createList(int n)
{
    List head, p, q;
    head = (List)malloc(sizeof(Node));
    head->next = head->prev = NULL;
    for (int i = 0; i < n; i++)
    {
        p = (List)malloc(sizeof(Node));
        printf("请输入第 %d 个元素的值：", i+1);
        scanf("%d", &(p->data));
        p->prev = p->next = NULL;
        if (i==0)
        {
            head->next = p;
        }
        else
        {
            q->next = p;
            p->prev = q;
        }
        head->prev = q = p;
    }
    return head;
}

void printList(List head)
{
    List p = head->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void printRList(List head)
{
    List p = head->prev;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->prev;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n;
    List head = NULL;
    printf("请输入链表元素个数：");
    scanf("%d", &n);
    head = createList(n);
    printf("顺序输出链表：\n");
    printList(head);
    printf("逆序输出链表：\n");
    printRList(head);
    return 0;
}
