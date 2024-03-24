#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"Initqueue.h"
#include"enter.h"
#include"out.h"
#include"ruin.h"
#include"checklength.h"
#include"qingkong.h"
#include"isempty.h"
#include"print.h"
#include"gethead.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() 
{
	int choice,ch;
	LQueue *q;
	while(1)
	{
		system("cls");
		printf("1.初始化一个队列\n");
		printf("2.销毁队列\n");
		printf("3.入队\n");
		printf("4.出队\n");
		printf("5.清空队列\n");
		printf("6.查看队头元素\n");
		printf("7.判断队列是否为空\n");
		printf("8.查看队列长度\n");
		printf("9.查看队列所有的值\n");
		printf("10.退出程序\n");
		printf("请先输入1对队列初始化\n"); 
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Initqueue(q);
				break;	
			case 2:
				ruin(q);
				break;
			case 3:
				while(1)
				{ 
				enter(q);
				printf("是否需要继续入队?(是:1/否:0)\n");
				scanf("%d",&ch);
				if(ch==0)
				break;
				}
				break;
			case 4:
				while(1)
				{ 
				out(q);
				printf("是否需要继续出队?(是:1/否:0)\n");
				scanf("%d",&ch);
				if(ch==0)
				break;
				}
				break;
			case 5:
				qingkong(q);
				break;
			case 6:
				gethead(q);
				break;
			case 7:
				isempty(q);
				break;	
			case 8:
				checklength(q);
				break;
			case 9:
				print(q);
				break; 
			case 10:
				exit(0);
				break;	 
		
		}
	}
}
