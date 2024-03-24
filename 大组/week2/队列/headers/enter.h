

// 根据用户选择入队  
void enter(LQueue *queue)
 {  
 	system("cls");
 	//创建新的节点 
 	Node* createNode(void *data,DataType datatype) 
	{  
    Node *newNode = (Node*)malloc(sizeof(Node));  
    if (!newNode) {  
        perror("分配内存失败\n");  
        exit(EXIT_FAILURE);  
    }  
    newNode->data = data; 
	newNode->datatype=datatype; 
    newNode->next = NULL;  
    return newNode;  
	}
	
 	// 入队操作  
	void enqueue(LQueue *queue, void *data, size_t dataSize,DataType datatype)
 	{  
    Node *newNode = createNode(malloc(dataSize),datatype);  
    if (!newNode) {  
        return;  
    }  
    memcpy(newNode->data, data, dataSize);  
  
    if (queue->rear == NULL) {  
        queue->front = queue->rear = newNode;  
    } else {  
        queue->rear->next = newNode;  
        queue->rear = newNode;  
    }  
    queue->length++;
	 printf("数据入队成功\n");   
	} 
	
	
    DataType datatype;
	int choice;  
    printf("请选择入队的数据类型:\n");  
    printf("1.整型\n");  
    printf("2.浮点型\n");  
    printf("3.字符型\n");  
    printf("4.字符串型\n");  
    scanf("%d", &choice);  
  
    void *data;  
    size_t dataSize;  
  
    switch (choice) {  
        case 1: { // Int 
            int intValue;
			printf("请输入数据:");  
            scanf("%d", &intValue);  
            dataSize = sizeof(intValue);  
            data = malloc(dataSize);  
            memcpy(data, &intValue, dataSize); 
			datatype=INT_TYPE; 
            enqueue(queue, data, dataSize,datatype);  
            break;  
        }  
        case 2: { // Float  
            float floatValue; 
			printf("请输入数据:"); 
            scanf("%f", &floatValue);  
            dataSize = sizeof(floatValue);  
            data = malloc(dataSize);  
            memcpy(data, &floatValue, dataSize); 
			datatype=FLOAT_TYPE; 
            enqueue(queue, data, dataSize,datatype);  
            break;  
        }  
        case 3: { // Character  
            char charValue;
			printf("请输入数据:");
			getchar();   
            scanf("%c", &charValue); 
            dataSize = sizeof(charValue);  
            data = malloc(dataSize);  
            memcpy(data, &charValue, dataSize); 
			datatype=CHAR_TYPE;  
            enqueue(queue, data, dataSize,datatype);  
            break;  
        }  
        case 4: { // String  
            char stringValue[1024]; // 假设字符串长度不超过1023个字符  
            printf("请输入数据:");
            scanf("%1023s", stringValue); // 读取最多1023个字符，防止溢出  
            dataSize = strlen(stringValue) + 1; // 字符串长度加上结束符'\0'  
            data = malloc(dataSize);  
            strcpy((char*)data, stringValue); 
			datatype=STRING_TYPE;  
            enqueue(queue, data, dataSize,datatype);  
            break;  
        }  
        default: 
		 {
           
    		printf("请输入正确的选择\n");  
    		int c;  
    		while ((c = getchar()) != '\n' && c != EOF); // 清除输入缓冲区直到换行符或文件结束符  
    		break;  
			}
        	
			  
    }  
   
}  
  
