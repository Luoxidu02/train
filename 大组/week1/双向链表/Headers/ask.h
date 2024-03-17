void ask(line* head)
 {  int n;
 	printf("请输入你要查找第几个元素的值？");
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
  
    printf("第%d个元素的值没有被找到\n", n);  
    system("pause");
    return; // 返回一个错误码，表示未找到元素  
} 
