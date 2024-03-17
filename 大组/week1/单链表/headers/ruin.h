void ruin(Linklist L)
{
	 
    Node* current = L->next;  
    Node* temp;  
      
    // 遍历链表，释放每个节点的内存  
    while (current != NULL) {  
        temp = current;  
        current = current->next;  
        free(temp);  
    }  
      
    L->next = NULL; // 将头节点指针设为NULL，避免悬挂指针  
	printf("销毁成功\n");
	system("pause");
}
