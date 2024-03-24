Status look(LinkStack *s)
{
	if (s->top == NULL) 
	{ // 栈空  
        printf("栈是空的\n"); 
		system("pause"); 
        return ERROR;  
    }  
    LinkStackPtr temp = s->top;  
    // 遍历链栈直到到达栈底  
    while (temp != NULL)  
    {  
        printf("%d ", temp->data);  
        temp = temp->next;  
    }  
      
    printf("输出完毕\n");
	system("pause");
	return SUCCESS;  
  
}
