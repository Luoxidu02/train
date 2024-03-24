typedef enum Status
{
	ERROR=0,
	SUCCESS=1
 } Status;
 
 typedef int ElemType;
 
 typedef struct StackNode
 {
 	ElemType data;
 	struct StackNode *next;
 }StackNode, *LinkStackPtr;
 
 typedef struct LinkStack
 {
 	LinkStackPtr top;
 	int count;
 }LinkStack;
