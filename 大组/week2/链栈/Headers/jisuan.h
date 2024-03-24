int jisuan()
{
	
	LinkStack*  initstack()//����ջ
	{
    LinkStack* istack=(LinkStack*)malloc(sizeof(LinkStack));//Ϊͷ�ڵ����ռ�
    if(istack!=NULL)//��׳���ж�
    {
        istack->top=NULL;
        istack->count=0;
    }
    return istack;
	}

	void seqstack_push(LinkStack* istack,char x)//ѹջ(��ջ)
	{
   	StackNode* temp;//����ѹջ�����ݽڵ�
   	temp=(StackNode*)malloc(sizeof(StackNode));
   	temp->data=x;//���������
   	temp->next=istack->top;//����ջ�������ݽڵ�
   	istack->top=temp;//�䵱ջ��
  	istack->count++;//��¼ջ��С�ı仯
   	return;
	}


	
	int iempty(LinkStack* istack)//�ж�ջΪ��
	{
    if(istack->top==NULL)
    {
        return 1;//ջΪ��
    }
    return 0;//ջ��Ϊ��
	}


	StackNode* seqstack_top(LinkStack* istack)//��ȡջ��Ԫ�ص����ݽڵ�
	{  
   	 	if(istack->count!=0)//ջ��Ϊ��
    	{
        return istack->top;//���ص���ջ�������ݽڵ������ջ����Ԫ��
    	}
   		 return NULL;
	}
	
	
	StackNode* seqstack_pop(LinkStack* istack)//����ջ��Ԫ��
	{
    if(iempty(istack)==0)//ջ��Ϊ��
    {
        StackNode* account=istack->top;//��¼ջ�������ݽڵ�
        istack->top=istack->top->next;//ָ��ջ����һ��Ԫ��
        istack->count--;//��¼ջ�Ĵ�С
        return account;//���ص��������ݽڵ�
    }
    return NULL;
	}


	//��������׺���ʽת��׺���ʽ�ĺ���
 	char buffer[256]={0};//����������ÿ�����ݶ���ʼ��Ϊ'\0'(\0��ascill����0)
 	//bufferΪ�����
 	void char_put(char ch)//�������ַ������������
	 {
     static int index=0;//static���徲̬����,�ź����б�ʾindexֻ��ʼ��һ��,ֻ����index�ĸı�
     buffer[index++]=ch;
 	}
 	
 	
	 int priority(char ch)//�����Ƚ����ȼ�
 	{
     int ret=0;
     switch(ch)
     {
        case '+'://case��͸,����һ��caseû��break���ʱ���������ִ��
        case '-':
            ret=1;
            break;
        case '*':
        case '/':
            ret=2;
            break;
        default://����ֱ��breakҲ����
            break;
     }
     return ret;
 	}
 
 
 	int is_number(char ch)//�ǲ�������
 	{
     return(ch>='0'&&ch<='9');//���ַ���1�����򷵻�0
 	}
 
 
 	int is_operator(char ch)//�ǲ��������
 	{
     return(ch=='+'||ch=='-'||ch=='*'||ch=='/');
 	}
 
 
	 int is_left(char ch)//�ǲ���������
 	{
     return(ch=='(');
 	}
 
 
 	int is_right(char ch)//�ǲ���������
 	{
     return(ch==')');
 	}
 
 
 	int transform(char str[])
 	{
 	
     LinkStack *istack=initstack();//����һ��ջ;
     int i=0;
     while(str[i]!='\0')//���������ַ���
    {
        //�ж��ǲ�������
        if(is_number(str[i])==1)
        {
            if(is_number(str[i+1])==1)//����1Ҳ������,��ֱ�ӷ�
            {
                char_put(str[i]);//����ֱ�ӷ�������(�����)
            }
            else//���治������,���һ���ո���Ϊ�ָ���
            {
                char_put(str[i]);
                char_put(' ');
            }
        }
        else if(is_operator((str[i]))==1)
        {
            if(str[i+1]=='0'&&str[i]=='/')
            {
                printf("ILLEGAL");
                return 0;
            }
            if(iempty(istack)==0)//ջ��Ϊ��
            {
                while((iempty(istack)==0)&&(priority(str[i])<=(priority(seqstack_top(istack)->data))))//ջ��Ϊ�ղ�������������ȼ�������ջ��
                {
                    char_put(seqstack_pop(istack)->data);//����������ջ���͵���ֱ������������
                    char_put(' ');
                }
            }
            seqstack_push(istack,str[i]);//�ٽ����������ջ
        }
        else if(is_left(str[i]))//������ֱ����ջ
        {
            seqstack_push(istack,str[i]);
        }
        else if(is_right(str[i]))//�ж��ǲ���������
        {
            while(is_left(seqstack_top(istack)->data)!=1)//ջ�����������ŵ����
            {
                char_put(seqstack_pop(istack)->data);//�������洢�������
                if(iempty(istack)==1)//ջΪ����δ�ҵ�������
                {
                    printf("û��ƥ�䵽������\n");
                    return -1;
                }
            }
            //��ʱƥ�䵽��������
            seqstack_pop(istack);
            //����������,���ﲢ���ñ���,���������������
        }
        else
        {
            printf("�в���ʶ����ַ�\n");
            return -1;
        }
        i++;
    }
    //���������Ѿ�
    if(str[i]=='\0')//�ɹ��������ַ���ĩβ
    {
        while(iempty(istack)==0)//����ȫ��ջ��Ԫ��
        {
            if(seqstack_top(istack)->data=='(')//ջ��Ԫ��Ϊ������
            {
                printf("��û��ƥ�䵽��'(',ȱ��')'\n");
                return -1;
            }
            char_put(seqstack_pop(istack)->data);//��ջ��Ԫ�ط������մ�
        }
    }
    else
    {
        printf("����û����ɣ�\n");
    }
    return 1;
	}
    
//����Ĵ��붼������й� 
    int express(int left,int right,char op)//opΪ�����,����������
 {
     switch (op)
     {
        case '+':
            return left+right;
        case '-':
            return left-right;
        case '*':
            return left*right;
        case '/':
            if(right==0)
            {
                return 999;
            }
            return left/right;
        default:
            break;
     }
     return -1;
 }
 
 
 int getsize(LinkStack* stack)
 {
     return stack->count;
 }
 int calculate(char str[])//�����׺���ʽ
 {
     LinkStack* istack2=initstack();//����ջ
     int i=0;
     while(str[i]!='\0')//����������׺���ʽ
    {
        char a[6]={0};
        int index=0;
        if(is_number(str[i])==1)
        {
            while(is_number(str[i])==1)
            {
                a[index]=str[i];
                index++;
                i++;
            }
            //�ɹ���ȡ����
            seqstack_push(istack2,atoi(a));//����������ջ
        }
        else if(is_operator(str[i])==1)
        {
            int right=seqstack_pop(istack2)->data;
            int left=seqstack_pop(istack2)->data;
            int ret=express(left,right,str[i]);
            if(ret==999)//������Ϊ0��
            {
                printf("ILLEGAL");
                return 999;
            }
            seqstack_push(istack2,ret);//��������ջ
        }
        else if(str[i]==' ')
        {
 
        }
        else
        {
            printf("error\n");
            break;
        }
        i++;
    }
    if(str[i]=='\0'&&getsize(istack2))
    {
        return seqstack_top(istack2)->data;
    }
    return 0;
 }



    char str[1024]={0};//������ÿ��Ԫ�ظ�ֵΪ'\0'
    printf("����������������ʽ:\n");
    scanf("%s",str);
    int number=transform(str);
    if(number==-1)
    {
        printf("���ʽת������:\n");
        system("pause");
    }
    else if(number==1)
    {
        printf("ת����ı��ʽ: %s\n",buffer);
    }
    else
        return 0;
 	
 	int num=calculate(buffer);
    if(num==999)
    {
        return 0;
    }
    printf("������Ϊ:%d\n",num);
    system("pause");

    
 }
	







































