#include"line.h"
line* creat(line * head)
  {
    int number,pos=1,input_data;
    //三个变量分别代表结点数量，当前位置，输入的数据
    printf("请输入创建结点的大小\n");
    scanf("%d",&number);
    if(number<1){return NULL;} //输入非法直接结束
    //////头结点创建///////
    head=(line*)malloc(sizeof(line));
    head->pre=NULL;
    head->next=NULL;
    printf("请输入从小到大的整数\n"); 
    printf("输入第%d个数据\n",pos++);
    scanf("%d",&input_data);
    head->data=input_data;
  
    line * list=head;
    while (pos<=number) {
        line * body=(line*)malloc(sizeof(line));
        body->pre=NULL;
        body->next=NULL;
        printf("输入第%d个数据\n",pos++);
        scanf("%d",&input_data);
        body->data=input_data;
        
        list->next=body;
        body->pre=list;
        list=list->next;
    }
    printf("创建成功\n");
    system("pause");
    return head;
}
