line*insert(line* head) //�ڲ���ڵ�Ĳ����������������нڵ����Ѿ�����С�����˳�����к� 
{ 
	int data;
  	printf("��������Ҫ���������:");
  	scanf("%d",&data); 
    line* newNode = (line*)malloc(sizeof(line));  
    newNode->data = data;  
    newNode->next = NULL;  
    newNode->pre = NULL;  
    line* current = head;  
    line* prev = NULL;  
    // �ҵ����ʵ�λ�ò����½ڵ�  
    while (current != NULL && current->data < data) {  
        prev = current;  
        current = current->next;  
    }  
  
    // �����½ڵ�  
    newNode->next = current;  
    if (prev != NULL) {  
        prev->next = newNode;  
        newNode->pre = prev;  
    } else {  
        head = newNode; // �����ͷ�ڵ�  
    }  
  
    if (current != NULL) {  
        current->pre = newNode;  
    }  
 
    printf("�������\n");
    system("pause");
    return head;
}
