#include"Queue.h"
void Initqueue(LQueue*q)
{
	q->front=q->rear=NULL;
	q->length=0;
	printf("初始化成功\n");
	system("pause");
}
