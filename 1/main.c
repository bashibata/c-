#include <stdio.h>
#include <stdlib.h>
#include"LinkList.h"
int main()
{
    //����ָ��Ŀռ�
    //nodeptr head = (nodeptr)malloc(sizeof(nodeptr));
    //TMD���ʲ���
    //nodeptr head=NULL;
    //CNM���ֲ���
    /*
        nodeptr head = (nodeptr)malloc(sizeof(nodeptr));
    create(head);
    print(head);
    printf("The LinkList have %d nodes\n",count(head));
    head = delete_by_number(head);
    print(head);
    printf("The LinkList have %d nodes\n",count(head));
    head = insert_node(head,1);
    print(head);
    printf("The LinkList have %d nodes\n",count(head));
    */
    printf("%d\n",'9');
    char c[3] = {'9','+','5'};
    int i = 0;
    printf("%c\n",c[0]);
    printf("%d\n",c[2]);
    i = (c[0] + c[2])-96 ;
    printf("%d",i);
    return 0;
}
