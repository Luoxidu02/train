Status jiance(LinkStack *s)
{
	if (s->top == NULL) 
	{ // ջ��  
        printf("ջ�ǿյ�,�޷����㳤��\n"); 
		system("pause"); 
        return ERROR;  
    }  
	printf("ջ�ĳ���Ϊ:%d",s->count);
	system("pause");
	return SUCCESS;
}
