void print(Linklist L)
{
	Node*e = L->next;//输出整个链表 
	int i1=0;
	while(e)
	{
		printf("第%d个元素值为:%f\n",++i1,e->data);
		e=e->next;
	}
	system("pause");
	return;
}
