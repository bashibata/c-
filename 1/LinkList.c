
#include <stdio.h>
#include <stdlib.h>
#include"LinkList.h"

//创建
void create(nodeptr p)
{
    printf("please input a number\n");
    printf("input -999 at end:\n");
    scanf("%d",&p->number);
    if(p->number==-999)
    {
        p->next=NULL;
    }
    else
    {
        p->next = (nodeptr)malloc(sizeof(nodeptr));
        create(p->next);
    }
    return;
}
//遍历
void print(nodeptr p)
{
    nodeptr temp = p;
    int i = 0;
    while(temp->next!=NULL&&i<20)
    {
        printf("the node's number is %d\n",temp->number);
        temp = temp->next;
        i++;
    }
}
//长度
int count(nodeptr p)
{
    nodeptr tmp = p;
    int counts = 0;
    for(;;)
    {
        if(tmp->next==NULL)
        {
            return counts;
        }
        counts++;
        tmp = tmp->next;
    }
    return counts;
}
//删除
nodeptr delete_by_number(nodeptr p)
{
    int temp = 0;
    nodeptr tmp = p;
    nodeptr tmp_d = NULL;
    printf("Please input the number you want to delete: \n");
    scanf("%d",&temp);
    if(tmp->number==temp)
    {
        p = tmp->next;
        free(tmp);
        printf("The node had delete......\n");
        printf("The head node had changed....\n");
        return p;
    }
    while(tmp->next!=NULL)
    {
        if(tmp->next->number==temp)
        {
            tmp_d = tmp->next;
            tmp->next = tmp_d->next;
            free(tmp_d);
            printf("the node had deleted.....\n");
            return p;
        }
        tmp = tmp->next;
    }
    printf("the node isn't exit....");
    return p;
}
//插入
nodeptr insert_node(nodeptr p,int set)
{
    nodeptr tmp_d = p;
    nodeptr tmp = (nodeptr)malloc(sizeof(nodeptr));
    int sum = 1;
    printf("Input a number:\n");
    scanf("%d",&tmp->number);
    if(set>count(p))
    {
        printf("ArrayIndexException.......\n");
        return p;
    }
    if(set==0)
    {
        tmp->next = p;
        printf("insert node after head\n");
        return tmp;
    }
    else
    {
        for(;tmp_d->next!=NULL;sum++)
        {
            if(sum==set)
            {
                tmp->next = tmp_d->next;
                tmp_d->next = tmp;
                printf("insert node after %d\n",sum);
                return p;
            }
            tmp_d = tmp_d->next;
        }
    }
    return p;
}
