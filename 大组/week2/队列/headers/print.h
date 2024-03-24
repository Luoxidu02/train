
void print(LQueue *queue)
{  
if (queue->front == NULL) {  
        printf("�����ǿյģ��޷��鿴��ͷ\n");  
        return;  
    }  
  
    Node *current = queue->front;   
    while (current != NULL) {  
        switch (current->datatype) {  
            case INT_TYPE:  
                printf("���ͣ�%d\n", *((int*)current->data));  
                break;  
            case FLOAT_TYPE:  
                printf("������: %f\n", *((float*)current->data));  
                break;  
            case CHAR_TYPE:  
                printf("�ַ���: %c\n", *((char*)current->data));  
                break;  
            case STRING_TYPE: 
                printf("�ַ�����: %s\n", (char*)current->data);  
                break;  
            default:  
                printf("δ֪��������\n");  
                break;  
        }  
        current = current->next;  
    }  
    printf("�������\n");
	system("pause");
	return; 
}

