
  
void qingkong(LQueue *queue)
 {  if (queue->length == 0)
	{  
        printf("�����ǿյģ��޷����������\n"); 
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
                *((char*)current->data) = '\0'; // ��������Ϊ0��ȡ�����������  
                break;  
            case STRING_TYPE:  
                free(current->data); // �ͷ�ԭ���ַ���  
                current->data = strdup(""); // ����һ���µĿ��ַ���  
                // current->data = NULL;  
                break;  
            default:  
              
                break;  
        }  
        current = current->next;  
    }  
    printf("���������\n");
    system("pause");
}
