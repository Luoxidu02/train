void print(Linklist L)
{
	Node*e = L->next;//����������� 
	int i1=0;
	while(e)
	{
		printf("��%d��Ԫ��ֵΪ:%f\n",++i1,e->data);
		e=e->next;
	}
	system("pause");
	return;
}
