#include"node.h"

Linklist creat()
{
	system("cls");
	printf("��С��������������Ϊ0ʱ����\n"); 
	//β�巨����������
 	Node*L;
	L=(Node*)malloc(sizeof(Node));//������ռ�
	L->next = NULL;
	Node*r;
	r=L;
	float x;
	scanf("%f",&x);
	while(x!=0)//������0ʱ����������� 
	{
		Node*p;
		p = (Node*)malloc(sizeof(Node));
		p->data=x;
		r->next=p;
		r=p;
		scanf("%f",&x);
	}
	r->next=NULL;
	
	Node*e = L->next;//����������� 
	int i=0;
	while(e)
	{
		printf("��%d��Ԫ��ֵΪ:%f\n",++i,e->data);
		e=e->next;
	}
	system("pause");
	return L;
}
