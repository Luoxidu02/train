void print(line *head){
    line *list = head;
    int pos=1;
    while(list){
        printf("��%d��������:%d\n",pos++,list->data);
        list=list->next;
    }
    system("pause");
}
