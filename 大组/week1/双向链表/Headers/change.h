line * change(line * head){
    //����Ĳ����ֱ�Ϊ���д˲�����˫������Ҫɾ��������
    line * list=head;
    printf("��������Ҫ�޸ĵ�Ԫ��ֵ:");
    int data;
	scanf("%d",&data); 
	 printf("��������Ҫ�����ֵ��Ϊ:");
    int data1;
	scanf("%d",&data1); 
    //��������
    while (list) {
        //�ж��Ƿ����Ԫ�����
        //ɾ���õ㷽��Ϊ���ý��ǰһ����nextָ��ýڵ��һ���
        //ͬʱ���ý��ĺ�һ����preָ��ýڵ��ǰһ���
        if (list->data==data) {
            list->data=data1;
            printf("--�޸ĳɹ�--\n");
            system("pause");
            return head;
        }
        list=list->next;
    }
    printf("Error:û���ҵ���Ԫ�أ�û�в����޸�\n");
    system("pause"); 
    return head;
}
