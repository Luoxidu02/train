Status gettop(LinkStack *s)
 {  
    if (s->top == NULL)
	 { // ջ��  
        printf("ջ�ǿյģ��޷���ջ��\n"); 
		system("pause"); 
        return ERROR;  
    }  
      
    // ��ȡջ���ڵ�  
    LinkStackPtr temp = s->top;  
      
    // ���ջ��Ԫ�ص�ֵ  
    printf("ջ����Ԫ���ǣ�%d\n", temp->data);
    system("pause");
}
