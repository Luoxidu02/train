Status out(LinkStack *s)
 {  
    if (s->top == NULL) { // 栈空  
        printf("栈是空的，无法出栈。\n"); 
		system("pause"); 
        return ERROR;  
    }  
      
    // 获取栈顶节点  
    LinkStackPtr temp = s->top;  
      
    // 输出栈顶元素的值  
    printf("出栈的元素是：%d\n", temp->data);  
      
    // 更新栈顶指针  
    s->top = temp->next;  
      
    // 栈中元素个数减一  
    s->count--;  
      
    // 释放原来的栈顶节点  
    free(temp);  
      
    return SUCCESS;  
} 
