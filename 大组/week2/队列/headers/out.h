void out(LQueue*queue)
{
	// 出队操作  
    if (queue->length == 0)
	{  
        printf("队列是空的，无法出队\n"); 
		system("pause"); 
        return;  
    }  
  
    Node *toDelete = queue->front;  
    queue->front = toDelete->next;  
  
    // 根据数据类型显示并释放数据  
    switch (toDelete->datatype) 
	{  
        case INT_TYPE: {  
            int *intValue = (int*)toDelete->data;  
            printf("%d已出队\n", *intValue);
			system("pause");   
            free(intValue);  
            break;  
        }  
        case FLOAT_TYPE: {  
            float *floatValue = (float*)toDelete->data;  
            printf("%f已出队\n", *floatValue); 
			system("pause");  
            free(floatValue);  
            break;  
        }  
        case CHAR_TYPE: {  
            char *charValue = (char*)toDelete->data;  
            printf("%c已出队\n", *charValue);
			system("pause");  
            free(charValue);  
            break;  
        }  
        case STRING_TYPE: {  
            char *stringValue = (char*)toDelete->data;  
            printf("%s已出队\n", stringValue); 
			system("pause");  
            free(stringValue);  
            break;  
        }  
        default:  
            printf("队列中未知的数据类型\n");  
            break;  
    }  
  
    // 释放节点  
    free(toDelete);  
    queue->length--;  
  
    if (queue->length == 0) {  
        queue->rear = NULL;  
    }  
}  
  


