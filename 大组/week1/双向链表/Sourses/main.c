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
		printf("1.创建一个链表\n");
		printf("2.销毁链表\n");
		printf("3.插入结点\n");
		printf("4.删除结点\n");
		printf("5.查找\n");
		printf("6.修改结点\n");
		printf("7.打印链表\n");
		printf("8.退出程序\n");
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
