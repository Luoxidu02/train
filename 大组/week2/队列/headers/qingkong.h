
  
void qingkong(LQueue *queue)
 {  if (queue->length == 0)
	{  
        printf("队列是空的，无法将数据清空\n"); 
		system("pause"); 
        return;  
    }  
    
    Node *current = queue->front;  
      
    while (current != NULL) {  
        switch (current->datatype) {  
            case INT_TYPE:  
                *((int*)current->data) = 0;  
                break;  
            case FLOAT_TYPE:  
                *((float*)current->data) = 0.0f;  
                break;  
            case CHAR_TYPE:  
                *((char*)current->data) = '\0'; // 或者设置为0，取决于你的需求  
                break;  
            case STRING_TYPE:  
                free(current->data); // 释放原有字符串  
                current->data = strdup(""); // 分配一个新的空字符串  
                // current->data = NULL;  
                break;  
            default:  
              
                break;  
        }  
        current = current->next;  
    }  
    printf("队列已清空\n");
    system("pause");
}
