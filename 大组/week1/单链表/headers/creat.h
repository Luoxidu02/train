#include"node.h"

Linklist creat()
{
	system("cls");
	printf("从小到大输入且输入为0时结束\n"); 
	//尾插法建立单链表
 	Node*L;
	L=(Node*)malloc(sizeof(Node));//申请结点空间
	L->next = NULL;
	Node*r;
	r=L;
	float x;
	scanf("%f",&x);
	while(x!=0)//在输入0时创建链表结束 
	{
		Node*p;
		p = (Node*)malloc(sizeof(Node));
		p->data=x;
		r->next=p;
		r=p;
		scanf("%f",&x);
	}
	r->next=NULL;
	
	Node*e = L->next;//输出整个链表 
	int i=0;
	while(e)
	{
		printf("第%d个元素值为:%f\n",++i,e->data);
		e=e->next;
	}
	system("pause");
	return L;
}
