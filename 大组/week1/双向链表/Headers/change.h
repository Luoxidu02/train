line * change(line * head){
    //输入的参数分别为进行此操作的双链表，需要删除的数据
    line * list=head;
    printf("请输入你要修改的元素值:");
    int data;
	scanf("%d",&data); 
	 printf("请输入你要把这个值改为:");
    int data1;
	scanf("%d",&data1); 
    //遍历链表
    while (list) {
        //判断是否与此元素相等
        //删除该点方法为将该结点前一结点的next指向该节点后一结点
        //同时将该结点的后一结点的pre指向该节点的前一结点
        if (list->data==data) {
            list->data=data1;
            printf("--修改成功--\n");
            system("pause");
            return head;
        }
        list=list->next;
    }
    printf("Error:没有找到该元素，没有产生修改\n");
    system("pause"); 
    return head;
}
