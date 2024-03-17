line*insert(line* head) //在插入节点的操作里，假设链表的所有节点有已经按从小到大的顺序排列好 
{ 
	int data;
  	printf("请输入你要插入的数据:");
  	scanf("%d",&data); 
    line* newNode = (line*)malloc(sizeof(line));  
    newNode->data = data;  
    newNode->next = NULL;  
    newNode->pre = NULL;  
    line* current = head;  
    line* prev = NULL;  
    // 找到合适的位置插入新节点  
    while (current != NULL && current->data < data) {  
        prev = current;  
        current = current->next;  
    }  
  
    // 插入新节点  
    newNode->next = current;  
    if (prev != NULL) {  
        prev->next = newNode;  
        newNode->pre = prev;  
    } else {  
        head = newNode; // 如果是头节点  
    }  
  
    if (current != NULL) {  
        current->pre = newNode;  
    }  
 
    printf("插入完成\n");
    system("pause");
    return head;
}
