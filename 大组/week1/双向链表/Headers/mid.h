void mid(Linklist L) 
{  
    int length = 0;    
    Node* current = L->next;   
      
    // ����������  
    while (current != NULL) {    
        length++;    
        current = current->next;    
    }  
    

    if (length == 0) {  
        printf("����Ϊ�գ�û����ֵ\n");  
        system("pause");
        return;  
    }  
      
    Linklist middleNode = L->next; // ���¿�ʼ�������м�ڵ�  
    if (length % 2 != 0) 
	{    
        // �ڵ���Ϊ�������ҳ��м�ڵ��ֵ  
        int middleIndex = length / 2;    
        int i;   
        for(i = 0; i < middleIndex; i++)
		{    
            middleNode = middleNode->next;    
        }    
        printf("��ֵΪ:%f\n", middleNode->data);
		ystem("pause");
		
    } 
	else {    
        // �ڵ���Ϊż��������  
        printf("���Ϊż������û����ֵ\n");
		 system("pause");
		  
    }  
      
     
}
