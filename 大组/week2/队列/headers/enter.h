

// �����û�ѡ�����  
void enter(LQueue *queue)
 {  
 	system("cls");
 	//�����µĽڵ� 
 	Node* createNode(void *data,DataType datatype) 
	{  
    Node *newNode = (Node*)malloc(sizeof(Node));  
    if (!newNode) {  
        perror("�����ڴ�ʧ��\n");  
        exit(EXIT_FAILURE);  
    }  
    newNode->data = data; 
	newNode->datatype=datatype; 
    newNode->next = NULL;  
    return newNode;  
	}
	
 	// ��Ӳ���  
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
	 printf("������ӳɹ�\n");   
	} 
	
	
    DataType datatype;
	int choice;  
    printf("��ѡ����ӵ���������:\n");  
    printf("1.����\n");  
    printf("2.������\n");  
    printf("3.�ַ���\n");  
    printf("4.�ַ�����\n");  
    scanf("%d", &choice);  
  
    void *data;  
    size_t dataSize;  
  
    switch (choice) {  
        case 1: { // Int 
            int intValue;
			printf("����������:");  
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
			printf("����������:"); 
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
			printf("����������:");
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
            char stringValue[1024]; // �����ַ������Ȳ�����1023���ַ�  
            printf("����������:");
            scanf("%1023s", stringValue); // ��ȡ���1023���ַ�����ֹ���  
            dataSize = strlen(stringValue) + 1; // �ַ������ȼ��Ͻ�����'\0'  
            data = malloc(dataSize);  
            strcpy((char*)data, stringValue); 
			datatype=STRING_TYPE;  
            enqueue(queue, data, dataSize,datatype);  
            break;  
        }  
        default: 
		 {
           
    		printf("��������ȷ��ѡ��\n");  
    		int c;  
    		while ((c = getchar()) != '\n' && c != EOF); // ������뻺����ֱ�����з����ļ�������  
    		break;  
			}
        	
			  
    }  
   
}  
  
