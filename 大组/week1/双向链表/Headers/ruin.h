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
        printf("˫�������ѱ�����.\n");  
    } else {  
        printf("����ʧ��\n");  
    }
	system("pause");
	return head;   
}
