void ask(Linklist L)
{
	printf("������Ҫ���ҵڼ���Ԫ�أ�");
	int num;
	scanf("%d",&num);
	if (L->next == NULL) {  
        printf("The list is empty!\n");
		system("pause");  
        return;  
    }  
      
    Node* current = L->next;  
    int count = 1;  
      
    // ��������ֱ���ҵ���n���ڵ�򵽴�����ĩβ  
    while (current != NULL && count < num) {  
        current = current->next;  
        count++;  
    }  
      
    // ����Ƿ��ҵ��˵�n���ڵ�  
    if (current == NULL) {  
        printf("�������в����ڵ�%d��Ԫ��\n",num);  
    } else {  
        printf("��%d��Ԫ�ص�ֵΪ%f\n",num, current->data);  
    }
	system("pause");
	return; 
}
