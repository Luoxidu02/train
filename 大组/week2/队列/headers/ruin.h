void ruin(LQueue *queue) 
{   if (queue->length == 0)
	{  
        printf("�����ǿյģ��޷�����\n"); 
		system("pause"); 
        return;  
    }  
    
    
    Node *current = queue->front; // �Ӷ�ͷ��ʼ  
    Node *temp;  
  
    // �������У��ͷ�ÿ���ڵ���ڴ�  
    while (current != NULL) {  
        temp = current;  
        current = current->next; // �ƶ�����һ���ڵ�  
        free(temp); // ֻ�ͷŽڵ㱾����ռ�õ��ڴ�  
    }  
  
    // �����е�ͷβָ��ͳ�������Ϊ��ʼ״̬  
    queue->front = NULL;  
    queue->rear = NULL;  
    queue->length = 0;  
    printf("���ٳɹ�\n");
    system("pause");
	return;
}
