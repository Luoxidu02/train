#include"line.h"
line* creat(line * head)
  {
    int number,pos=1,input_data;
    //���������ֱ��������������ǰλ�ã����������
    printf("�����봴�����Ĵ�С\n");
    scanf("%d",&number);
    if(number<1){return NULL;} //����Ƿ�ֱ�ӽ���
    //////ͷ��㴴��///////
    head=(line*)malloc(sizeof(line));
    head->pre=NULL;
    head->next=NULL;
    printf("�������С���������\n"); 
    printf("�����%d������\n",pos++);
    scanf("%d",&input_data);
    head->data=input_data;
  
    line * list=head;
    while (pos<=number) {
        line * body=(line*)malloc(sizeof(line));
        body->pre=NULL;
        body->next=NULL;
        printf("�����%d������\n",pos++);
        scanf("%d",&input_data);
        body->data=input_data;
        
        list->next=body;
        body->pre=list;
        list=list->next;
    }
    printf("�����ɹ�\n");
    system("pause");
    return head;
}
