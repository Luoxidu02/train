void out(LQueue*queue)
{
	// ���Ӳ���  
    if (queue->length == 0)
	{  
        printf("�����ǿյģ��޷�����\n"); 
		system("pause"); 
        return;  
    }  
  
    Node *toDelete = queue->front;  
    queue->front = toDelete->next;  
  
    // ��������������ʾ���ͷ�����  
    switch (toDelete->datatype) 
	{  
        case INT_TYPE: {  
            int *intValue = (int*)toDelete->data;  
            printf("%d�ѳ���\n", *intValue);
			system("pause");   
            free(intValue);  
            break;  
        }  
        case FLOAT_TYPE: {  
            float *floatValue = (float*)toDelete->data;  
            printf("%f�ѳ���\n", *floatValue); 
			system("pause");  
            free(floatValue);  
            break;  
        }  
        case CHAR_TYPE: {  
            char *charValue = (char*)toDelete->data;  
            printf("%c�ѳ���\n", *charValue);
			system("pause");  
            free(charValue);  
            break;  
        }  
        case STRING_TYPE: {  
            char *stringValue = (char*)toDelete->data;  
            printf("%s�ѳ���\n", stringValue); 
			system("pause");  
            free(stringValue);  
            break;  
        }  
        default:  
            printf("������δ֪����������\n");  
            break;  
    }  
  
    // �ͷŽڵ�  
    free(toDelete);  
    queue->length--;  
  
    if (queue->length == 0) {  
        queue->rear = NULL;  
    }  
}  
  


