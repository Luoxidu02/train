Status clear(LinkStack *s)  
{  if (s->top == NULL) { // ջ��  
        printf("ջ�ǿյ�,�޷�����������\n"); 
		system("pause"); 
        return ERROR;  
    }  
    LinkStackPtr temp = s->top;  
      
    // ������ջ�������нڵ����������Ϊ0  
    while (temp != NULL)  
    {  
        temp->data = 0;  
        temp = temp->next;  
    }  
    printf("������ȫ������\n");
    system("pause");
    // �������������ջ�ṹ���ֲ���  
    return SUCCESS;  
} 
