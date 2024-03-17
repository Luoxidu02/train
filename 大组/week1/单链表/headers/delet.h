Linklist delet(Linklist L)
{
	printf("请输入要删除的元素的值:");
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
		printf("删除成功\n"); 
	}
	else
	printf("没有找到这个元素\n");
	
	
			Node*e = L->next;//输出整个链表 
	int i1=0;
	while(e)
	{
		printf("第%d个元素值为:%f\n",++i1,e->data);
		e=e->next;
	}
	system("pause");
	return(L);
}
