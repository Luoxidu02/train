Linklist insert(Linklist L)
{
	printf("请输入要插入数据的值:");
	float i;
	scanf("%f",&i);
	
	Node*stu;//初始化要插入的结点 
	stu=(Node*)malloc(sizeof(Node));
	stu->data=i;
	stu->next=NULL;
	
	Node*p0,*p1,*p2;
	p1=L->next;//L的next才是储存数据的结点 
	p0=stu;
	if(L->next==NULL) 
	{
		L->next=p0;
		p0->next=NULL;
	} 
	else
	{
		while((p0->data>p1->data)&&(p1->next!=NULL))
		{
			p2=p1;
			p1=p1->next;
		}
		if(p0->data<=p1->data)
		{
			if(L->next==p1)
				L->next=p0;
			else
			p2->next=p0;
			
			p0->next=p1;
		}
		else
		{
			p1->next=p0;
			p0->next=NULL;
		}
	}
	
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
