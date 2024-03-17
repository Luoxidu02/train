Linklist turn(Linklist L)
{  
    Node* prev = NULL;  
    Node* current = L->next;  
    Node* next = NULL;  
      
    while (current != NULL) {  
        next = current->next; // 保存下一个节点的指针  
        current->next = prev; // 将当前节点的next指针指向前一个节点  
        prev = current; // 将prev移动到当前节点  
        current = next; // 将current移动到下一个节点  
    }  
    printf("翻转成功\n");
    system("pause");
    // 此时，prev将是新链表的头节点  
    return prev;  
} 
