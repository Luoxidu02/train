void ruin(LQueue *queue) 
{   if (queue->length == 0)
	{  
        printf("队列是空的，无法销毁\n"); 
		system("pause"); 
        return;  
    }  
    
    
    Node *current = queue->front; // 从队头开始  
    Node *temp;  
  
    // 遍历队列，释放每个节点的内存  
    while (current != NULL) {  
        temp = current;  
        current = current->next; // 移动到下一个节点  
        free(temp); // 只释放节点本身所占用的内存  
    }  
  
    // 将队列的头尾指针和长度重置为初始状态  
    queue->front = NULL;  
    queue->rear = NULL;  
    queue->length = 0;  
    printf("销毁成功\n");
    system("pause");
	return;
}
