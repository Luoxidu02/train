// 销毁链栈的函数  
Status ruin(LinkStack *s)  
{  if (s->top == NULL) 
	{ // 栈空  
        printf("栈是空的,无法将数据清零\n"); 
		system("pause"); 
        return ERROR;  
    }  
    LinkStackPtr temp;  
      
    // 当栈不为空时，循环删除栈顶元素  
    while (s->top != NULL)  
    {  
        temp = s->top;  
        s->top = s->top->next;  
        free(temp);  
        s->count--;  
    }  
      
    // 销毁后栈顶指针应为NULL，元素个数应为0  
    s->top = NULL;  
    s->count = 0;  
    
    printf("销毁链栈成功\n");
	system("pause");
    return SUCCESS;  
} 
