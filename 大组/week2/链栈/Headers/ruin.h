// ������ջ�ĺ���  
Status ruin(LinkStack *s)  
{  if (s->top == NULL) 
	{ // ջ��  
        printf("ջ�ǿյ�,�޷�����������\n"); 
		system("pause"); 
        return ERROR;  
    }  
    LinkStackPtr temp;  
      
    // ��ջ��Ϊ��ʱ��ѭ��ɾ��ջ��Ԫ��  
    while (s->top != NULL)  
    {  
        temp = s->top;  
        s->top = s->top->next;  
        free(temp);  
        s->count--;  
    }  
      
    // ���ٺ�ջ��ָ��ӦΪNULL��Ԫ�ظ���ӦΪ0  
    s->top = NULL;  
    s->count = 0;  
    
    printf("������ջ�ɹ�\n");
	system("pause");
    return SUCCESS;  
} 
