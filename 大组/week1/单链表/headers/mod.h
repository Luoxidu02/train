Linklist mod(Linklist L)
{
	system("cls");
	printf("��������Ҫ�޸ĵ�Ԫ�ص�ֵ:");
	float i;
	scanf("%f",&i);
	Node*move=L->next;
	while(move!=NULL)
	{
		if(move->data==i)
		{
			printf("�������޸ĺ��Ԫ�ص�ֵ:");
			scanf("%f",&move->data);
			printf("�޸ĳɹ�\n");
			system("pause");
			return(L);
		}
	move=move->next;
	}
	printf("δ���ҵ���Ԫ��ֵ\n");
	system("pause");
	return(L);
}
