Linklist turn(Linklist L)
{  
    Node* prev = NULL;  
    Node* current = L->next;  
    Node* next = NULL;  
      
    while (current != NULL) {  
        next = current->next; // ������һ���ڵ��ָ��  
        current->next = prev; // ����ǰ�ڵ��nextָ��ָ��ǰһ���ڵ�  
        prev = current; // ��prev�ƶ�����ǰ�ڵ�  
        current = next; // ��current�ƶ�����һ���ڵ�  
    }  
    printf("��ת�ɹ�\n");
    system("pause");
    // ��ʱ��prev�����������ͷ�ڵ�  
    return prev;  
} 
