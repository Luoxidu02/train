Status jiance(LinkStack *s)
{
	if (s->top == NULL) 
	{ // 栈空  
        printf("栈是空的,无法计算长度\n"); 
		system("pause"); 
        return ERROR;  
    }  
	printf("栈的长度为:%d",s->count);
	system("pause");
	return SUCCESS;
}
