Linklist delet(Linklist L)
{
	printf("������Ҫɾ����Ԫ�ص�ֵ:");
	float i;
	scanf("%f",&i);
	Node*p1,*p2;
	if(L->next==NULL)
	{
	printf("\nlist null\n");
	system("pause");
	return(L);
	}
	
	p1=L->next;
	while(i!=p1->data&&p1->next!=NULL)
	{
		p2=p1;
		p1=p1->next;
	}
	
	if(i==p1->data)
	{
		if(p1==L->next)
			L->next=p1->next;
		else
		p2->next=p1->next;
		printf("ɾ���ɹ�\n"); 
	}
	else
	printf("û���ҵ����Ԫ��\n");
	
	
			Node*e = L->next;//����������� 
	int i1=0;
	while(e)
	{
		printf("��%d��Ԫ��ֵΪ:%f\n",++i1,e->data);
		e=e->next;
	}
	system("pause");
	return(L);
}
