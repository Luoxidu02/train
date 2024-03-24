
void print(LQueue *queue)
{  
if (queue->front == NULL) {  
        printf("队列是空的，无法查看队头\n");  
        return;  
    }  
  
    Node *current = queue->front;   
    while (current != NULL) {  
        switch (current->datatype) {  
            case INT_TYPE:  
                printf("整型：%d\n", *((int*)current->data));  
                break;  
            case FLOAT_TYPE:  
                printf("浮点型: %f\n", *((float*)current->data));  
                break;  
            case CHAR_TYPE:  
                printf("字符型: %c\n", *((char*)current->data));  
                break;  
            case STRING_TYPE: 
                printf("字符串型: %s\n", (char*)current->data);  
                break;  
            default:  
                printf("未知数据类型\n");  
                break;  
        }  
        current = current->next;  
    }  
    printf("遍历完毕\n");
	system("pause");
	return; 
}

