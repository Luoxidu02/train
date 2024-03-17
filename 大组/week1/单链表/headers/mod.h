Linklist mod(Linklist L)
{
	system("cls");
	printf("请输入你要修改的元素的值:");
	float i;
	scanf("%f",&i);
	Node*move=L->next;
	while(move!=NULL)
	{
		if(move->data==i)
		{
			printf("请输入修改后的元素的值:");
			scanf("%f",&move->data);
			printf("修改成功\n");
			system("pause");
			return(L);
		}
	move=move->next;
	}
	printf("未能找到此元素值\n");
	system("pause");
	return(L);
}
