void gethead(LQueue* queue) 
{  
    if (queue->front == NULL) {  
        printf("�����ǿյģ��޷��鿴��ͷ\n");
		system("pause");  
        return;  
    }  
  
    // ��ȡ��ͷ�ڵ�  
    Node* headNode = queue->front;  
  
    // ��������������ʾ����  
    switch (headNode->datatype)
	{  
        case INT_TYPE: {  
            int* intValue = (int*)headNode->data;  
            printf("��ͷΪ������%d\n", *intValue); 
            break;  
        }  
        case FLOAT_TYPE: {  
            float* floatValue = (float*)headNode->data;  
            printf("��ͷΪ��������%f\n", *floatValue);  
            break;  
        }  
        case CHAR_TYPE: {  
            char* charValue = (char*)headNode->data;  
            printf("��ͷΪ�ַ���%c\n", *charValue);  
            break;  
        }  
        case STRING_TYPE: {  
            char* stringValue = (char*)headNode->data;  
            printf("��ͷΪ�ַ�����%s\n", stringValue);  
            break;  
        }  
        default:  
            printf("������δ֪����������\n");  
            break;  
    } 
	system("pause"); 
}

