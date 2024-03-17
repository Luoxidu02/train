Linklist exchange(Linklist L)
{
	   // 交换相邻节点的值    
    if (!L->next || !L->next->next) {  
        // 链表为空或只有一个节点，无需交换  
        return;  
    }  
      
    Node *current = L->next;  
    while (current && current->next) {  
        // 交换相邻节点的值  
        float temp = current->data;  
        current->data = current->next->data;  
        current->next->data = temp;  
          
        // 移动到下一对相邻节点  
        current = current->next->next;  
    }
    printf("调换成功\n");
    system("pause");
	return L;  

}
