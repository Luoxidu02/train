Status look(LinkStack *s)
{
	if (s->top == NULL) 
	{ // ջ��  
        printf("ջ�ǿյ�\n"); 
		system("pause"); 
        return ERROR;  
    }  
    LinkStackPtr temp = s->top;  
    // ������ջֱ������ջ��  
    while (temp != NULL)  
    {  
        printf("%d ", temp->data);  
        temp = temp->next;  
    }  
      
    printf("������\n");
	system("pause");
	return SUCCESS;  
  
}
