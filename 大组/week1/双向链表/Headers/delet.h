line * delet(line * head) {  
    int data;  
    printf("��������Ҫɾ����Ԫ��:");  
    scanf("%d", &data);  
    line * current = head;  
    line * temp;  
  
    // ����ͷ�ڵ�  
    while (current && current->data == data) {  
        temp = current;  
        head = current->next;  
        if (head) {  
            head->pre = NULL;  
        }  
        free(temp);  
        printf("--ɾ���ɹ�--\n");  
        current = head;  
    }  
  int t=0; 
    // ���������м�ڵ�  
    while (current) {  
        if (current->next && current->next->data == data) {  
            temp = current->next;  
            current->next = temp->next;  
            if (current->next) {  
                current->next->pre = current;  
            }  
            free(temp);  
            printf("--ɾ���ɹ�--\n"); 
			t=1; 
        } else {  
            current = current->next;  
        }  
    }  
  
    // ����β�ڵ�  
    if (head && !head->next && head->data == data) {  
        free(head);  
        head = NULL;  
        printf("--ɾ���ɹ�--\n");  
    }  
  
    if (!head) {  
        printf("����Ϊ��\n");  
    } else {  
        if (current == NULL&&t==0) {  
            printf("Error:û���ҵ���Ԫ�أ�û�в���ɾ��\n");  
        }  
    }  
    system("pause"); // �������֧�֣�������滻Ϊ��������  
    return head;  
}
