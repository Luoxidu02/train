Linklist exchange(Linklist L)
{
	   // �������ڽڵ��ֵ    
    if (!L->next || !L->next->next) {  
        // ����Ϊ�ջ�ֻ��һ���ڵ㣬���轻��  
        return;  
    }  
      
    Node *current = L->next;  
    while (current && current->next) {  
        // �������ڽڵ��ֵ  
        float temp = current->data;  
        current->data = current->next->data;  
        current->next->data = temp;  
          
        // �ƶ�����һ�����ڽڵ�  
        current = current->next->next;  
    }
    printf("�����ɹ�\n");
    system("pause");
	return L;  

}
