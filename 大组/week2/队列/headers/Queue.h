//��ʽ���нṹ

	// ������������ö��  
	typedef enum 
	{  
   	INT_TYPE,  
    FLOAT_TYPE,  
    CHAR_TYPE,  
    STRING_TYPE  
	} DataType; 
typedef struct node
{
    void *data;  
	DataType datatype;                 
    struct node *next;            //ָ��ǰ������һ���
} Node;

typedef struct Lqueue
{
    Node *front;                   //��ͷ
    Node *rear;                    //��β
    size_t length;            //���г���
} LQueue;
