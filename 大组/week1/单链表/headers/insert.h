Linklist insert(Linklist L)
{
	printf("������Ҫ�������ݵ�ֵ:");
	float i;
	scanf("%f",&i);
	
	Node*stu;//��ʼ��Ҫ����Ľ�� 
	stu=(Node*)malloc(sizeof(Node));
	stu->data=i;
	stu->next=NULL;
	
	Node*p0,*p1,*p2;
	p1=L->next;//L��next���Ǵ������ݵĽ�� 
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
