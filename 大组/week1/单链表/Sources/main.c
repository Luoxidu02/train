#include <stdio.h>
#include <stdlib.h>
#include"creat.h"
#include<windows.h>
#include"insert.h"
#include"delet.h"
#include"mod.h"
#include"ask.h"
#include"ruin.h"
#include"turn.h"
#include"exchange.h"
#include"print.h"
#include"mi.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int choice;
	Linklist list;
	while(1)
	{
		system("cls");
		printf("1.����һ������\n");
		printf("2.��������\n");
		printf("3.������\n");
		printf("4.ɾ�����\n");
		printf("5.����\n");
		printf("6.�޸Ľ���ֵ\n");
		printf("7.��ת����\n");
		printf("8.��ӡ����\n");
		printf("9.��ż����\n");
		printf("10.�ҳ��м�ֵ\n");
		printf("11.�˳�����\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				list=creat();
				break;
			case 2:
				ruin(list);
				break;
			case 3:
				list=insert(list);
				break;
			case 4:
				list= delet(list);
				break;
			case 5:
				ask(list);
				break;
			case 6:
				list=mod(list);
				break;
			case 7:
				list=turn(list);
				break;
			case 8:
				print(list);
				break;
			case 9:
				list=exchange(list);
				break;
			case 10:
				mi(list);
				break;
		
			case 11:
				exit(0); 
			
		}
	}
}

