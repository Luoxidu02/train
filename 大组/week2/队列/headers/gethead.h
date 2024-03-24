void gethead(LQueue* queue) 
{  
    if (queue->front == NULL) {  
        printf("队列是空的，无法查看队头\n");
		system("pause");  
        return;  
    }  
  
    // 获取队头节点  
    Node* headNode = queue->front;  
  
    // 根据数据类型显示数据  
    switch (headNode->datatype)
	{  
        case INT_TYPE: {  
            int* intValue = (int*)headNode->data;  
            printf("队头为整数：%d\n", *intValue); 
            break;  
        }  
        case FLOAT_TYPE: {  
            float* floatValue = (float*)headNode->data;  
            printf("队头为浮点数：%f\n", *floatValue);  
            break;  
        }  
        case CHAR_TYPE: {  
            char* charValue = (char*)headNode->data;  
            printf("队头为字符：%c\n", *charValue);  
            break;  
        }  
        case STRING_TYPE: {  
            char* stringValue = (char*)headNode->data;  
            printf("队头为字符串：%s\n", stringValue);  
            break;  
        }  
        default:  
            printf("队列中未知的数据类型\n");  
            break;  
    } 
	system("pause"); 
}

