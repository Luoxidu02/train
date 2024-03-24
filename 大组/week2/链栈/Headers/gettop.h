Status gettop(LinkStack *s)
 {  
    if (s->top == NULL)
	 { // 栈空  
        printf("栈是空的，无法出栈。\n"); 
		system("pause"); 
        return ERROR;  
    }  
      
    // 获取栈顶节点  
    LinkStackPtr temp = s->top;  
      
    // 输出栈顶元素的值  
    printf("栈顶的元素是：%d\n", temp->data);
    system("pause");
}
