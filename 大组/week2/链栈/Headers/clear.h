Status clear(LinkStack *s)  
{  if (s->top == NULL) { // 栈空  
        printf("栈是空的,无法将数据清零\n"); 
		system("pause"); 
        return ERROR;  
    }  
    LinkStackPtr temp = s->top;  
      
    // 遍历链栈，将所有节点的数据设置为0  
    while (temp != NULL)  
    {  
        temp->data = 0;  
        temp = temp->next;  
    }  
    printf("数据已全部清零\n");
    system("pause");
    // 数据已清除，但栈结构保持不变  
    return SUCCESS;  
} 
