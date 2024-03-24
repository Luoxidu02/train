Status isempty(LinkStack *s)
 {  
    if (s->top == NULL)
	 { // 栈空  
        printf("栈是空的\n"); 
		system("pause"); 
        return SUCCESS;  
    }
    else
	{
	printf("栈不是空的\n");
	system("pause");
	return SUCCESS; 
}
}
