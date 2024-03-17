void mid(Linklist L) 
{  
    int length = 0;    
    Node* current = L->next;   
      
    // 计算链表长度  
    while (current != NULL) {    
        length++;    
        current = current->next;    
    }  
    

    if (length == 0) {  
        printf("链表为空，没有中值\n");  
        system("pause");
        return;  
    }  
      
    Linklist middleNode = L->next; // 重新开始遍历找中间节点  
    if (length % 2 != 0) 
	{    
        // 节点数为奇数，找出中间节点的值  
        int middleIndex = length / 2;    
        int i;   
        for(i = 0; i < middleIndex; i++)
		{    
            middleNode = middleNode->next;    
        }    
        printf("中值为:%f\n", middleNode->data);
		ystem("pause");
		
    } 
	else {    
        // 节点数为偶数，报错  
        printf("结点为偶数个，没有中值\n");
		 system("pause");
		  
    }  
      
     
}
