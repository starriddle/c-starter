/*
题目：
连接两个链表。

分析：


议点：

*/

#include<stdio.h>
#include<malloc.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node, *List;

List createList(int n)
{
    List head=NULL, p, q;
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

void printList(List head)
{
    List p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void concatList(List h1, List h2)
{
    while (h1->next)
    {
        h1 = h1->next;
    }
    h1->next = h2;
}

int main(int argc, char const *argv[])
{
    
    int n;
    List h1, h2;

    printf("请输入第一个链表的元素个数：");
    scanf("%d", &n);
    h1 = createList(n);
    printf("第一个链表元素值为：\n");
    printList(h1);

    printf("请输入第二个链表的元素个数：");
    scanf("%d", &n);
    h2 = createList(n);
    printf("第二个链表元素值为：\n");
    printList(h2);
    
    concatList(h1, h2);
    printf("连接两个链表后新链表元素值为：\n");
    printList(h1);
    return 0;
}
