line* ruin(line*head) {  
    line* temp;  
    while (head != NULL) {  
        temp =head;  
        head = head->next;  
        if (head!= NULL) {  
            head->pre = NULL;  
        }  
        free(temp);  
    } 
	if (head == NULL) {  
        printf("双向链表已被销毁.\n");  
    } else {  
        printf("销毁失败\n");  
    }
	system("pause");
	return head;   
}
