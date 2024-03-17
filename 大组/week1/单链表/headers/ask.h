void ask(Linklist L)
{
	printf("请问你要查找第几个元素？");
	int num;
	scanf("%d",&num);
	if (L->next == NULL) {  
        printf("The list is empty!\n");
		system("pause");  
        return;  
    }  
      
    Node* current = L->next;  
    int count = 1;  
      
    // 遍历链表直到找到第n个节点或到达链表末尾  
    while (current != NULL && count < num) {  
        current = current->next;  
        count++;  
    }  
      
    // 检查是否找到了第n个节点  
    if (current == NULL) {  
        printf("该链表中不存在第%d个元素\n",num);  
    } else {  
        printf("第%d个元素的值为%f\n",num, current->data);  
    }
	system("pause");
	return; 
}
