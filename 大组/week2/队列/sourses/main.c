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
		printf("1.��ʼ��һ������\n");
		printf("2.���ٶ���\n");
		printf("3.���\n");
		printf("4.����\n");
		printf("5.��ն���\n");
		printf("6.�鿴��ͷԪ��\n");
		printf("7.�ж϶����Ƿ�Ϊ��\n");
		printf("8.�鿴���г���\n");
		printf("9.�鿴�������е�ֵ\n");
		printf("10.�˳�����\n");
		printf("��������1�Զ��г�ʼ��\n"); 
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
				printf("�Ƿ���Ҫ�������?(��:1/��:0)\n");
				scanf("%d",&ch);
				if(ch==0)
				break;
				}
				break;
			case 4:
				while(1)
				{ 
				out(q);
				printf("�Ƿ���Ҫ��������?(��:1/��:0)\n");
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
