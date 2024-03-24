void checklength(LQueue*queue)
{
	  if (queue->length == 0)
	{  
        printf("队列是空的，无法查看队列长度\n"); 
		system("pause"); 
        return;  
    }  
    printf("队列长度为：%d\n",queue->length);
	system("pause");
	return; 
 } 
