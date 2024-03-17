void print(line *head){
    line *list = head;
    int pos=1;
    while(list){
        printf("第%d个数据是:%d\n",pos++,list->data);
        list=list->next;
    }
    system("pause");
}
