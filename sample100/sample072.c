/*
题目：
创建一个链表。

分析：


议点：

*/

#include<stdio.h>
#include<malloc.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node, *LinkList;

LinkList createList(int n)
{
    LinkList head=NULL, p, q;
    for (int i = 0; i < n; i++)
    {
        p = malloc(sizeof(Node));
        printf("请输入第 %d 个元素的值：", i+1);
        scanf("%d", &(p->data));
        p->next = NULL;
        if (i==0)
        {
            head = p;
        }
        else
        {
            q->next = p;
        }
        q = p;
    }
    return head;
}

void printList(LinkList head)
{
    LinkList p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n;
    LinkList head;
    printf("请输入链表元素个数：");
    scanf("%d", &n);
    head = createList(n);
    printf("建立的链表元素值为：\n");
    printList(head);
    return 0;
}
