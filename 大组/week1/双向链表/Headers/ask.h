void ask(line* head)
 {  int n;
 	printf("��������Ҫ���ҵڼ���Ԫ�ص�ֵ��");
	scanf("%d",&n); 
    int count = 1;  
    line* current = head;  
  
    while (current != NULL) {  
        if (count == n) {  
            printf("%d\n",current->data);
			system("pause");
			return;  
        }  
        current = current->next;  
        count++;  
    }  
  
    printf("��%d��Ԫ�ص�ֵû�б��ҵ�\n", n);  
    system("pause");
    return; // ����һ�������룬��ʾδ�ҵ�Ԫ��  
} 
