Status put(LinkStack *s, ElemType x) {  
    // �����µĽڵ�  
    LinkStackPtr newNode = (LinkStackPtr)malloc(sizeof(StackNode));  
    if (!newNode)
	 { // ����ʧ��  
        return ERROR;  
    }  
    newNode->data = x; // ���ýڵ�����  
    newNode->next = s->top; // �½ڵ�ָ��ԭ����ջ��  
    s->top = newNode; // ����ջ��ָ��  
    s->count++; // ջ��Ԫ�ظ�����һ  
    return SUCCESS;  
} 
