//链式队列结构

	// 定义数据类型枚举  
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
    struct node *next;            //指向当前结点的下一结点
} Node;

typedef struct Lqueue
{
    Node *front;                   //队头
    Node *rear;                    //队尾
    size_t length;            //队列长度
} LQueue;
