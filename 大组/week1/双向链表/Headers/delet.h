line * delet(line * head) {  
    int data;  
    printf("请输入你要删除的元素:");  
    scanf("%d", &data);  
    line * current = head;  
    line * temp;  
  
    // 处理头节点  
    while (current && current->data == data) {  
        temp = current;  
        head = current->next;  
        if (head) {  
            head->pre = NULL;  
        }  
        free(temp);  
        printf("--删除成功--\n");  
        current = head;  
    }  
  int t=0; 
    // 处理链表中间节点  
    while (current) {  
        if (current->next && current->next->data == data) {  
            temp = current->next;  
            current->next = temp->next;  
            if (current->next) {  
                current->next->pre = current;  
            }  
            free(temp);  
            printf("--删除成功--\n"); 
			t=1; 
        } else {  
            current = current->next;  
        }  
    }  
  
    // 处理尾节点  
    if (head && !head->next && head->data == data) {  
        free(head);  
        head = NULL;  
        printf("--删除成功--\n");  
    }  
  
    if (!head) {  
        printf("链表为空\n");  
    } else {  
        if (current == NULL&&t==0) {  
            printf("Error:没有找到该元素，没有产生删除\n");  
        }  
    }  
    system("pause");  
    return head;  
}
