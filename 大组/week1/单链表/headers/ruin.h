void ruin(Linklist L)
{
	 
    Node* current = L->next;  
    Node* temp;  
      
    // ���������ͷ�ÿ���ڵ���ڴ�  
    while (current != NULL) {  
        temp = current;  
        current = current->next;  
        free(temp);  
    }  
      
    L->next = NULL; // ��ͷ�ڵ�ָ����ΪNULL����������ָ��  
	printf("���ٳɹ�\n");
	system("pause");
}
