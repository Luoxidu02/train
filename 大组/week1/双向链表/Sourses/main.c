#include <stdio.h>
#include <stdlib.h>
#include"creat.h"
#include<windows.h>
#include"insert.h"
#include"print.h"
#include"ruin.h"
#include"ask.h"
#include"change.h"
#include"delet.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	line*head=NULL;
	
	int choice;
	while(1)
	{
		system("cls");
		printf("1.����һ������\n");
		printf("2.��������\n");
		printf("3.������\n");
		printf("4.ɾ�����\n");
		printf("5.����\n");
		printf("6.�޸Ľ��\n");
		printf("7.��ӡ����\n");
		printf("8.�˳�����\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				head=creat(head);
				break;
			case 2:
				head=ruin(head);
				break;
			case 3:
				head=insert(head);
				break;
			case 4:
				head=delet(head);
				break;
			case 5:
				ask(head);
				break;
			case 6:
				head=change(head);
				break;
			case 7:
				print(head);
				break;
			
			case 8:
				exit(0);
		}
	}
	return 0;
}
