#include <stdio.h>
#include <stdlib.h>
#include"creat.h"
#include"put.h"
#include"windows.h"
#include"out.h"
#include"gettop.h"
#include"clear.h"
#include"ruin.h"
#include"look.h"
#include"jiance.h"
#include"isempty.h"
#include"jisuan.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() 
{
	int choice,ch,data;
	LinkStack *s;
	ElemType *x=NULL;
	while(1)
	{
		system("cls");
		printf("1.��ʼ��һ����ջ\n");
		printf("2.�ж���ջ�Ƿ�Ϊ��\n");
		printf("3.�õ�ջ��Ԫ��\n");
		printf("4.���ջ\n");
		printf("5.����ջ\n");
		printf("6.���ջ����\n");
		printf("7.��ջ\n");
		printf("8.��ջ\n");
		printf("9.��������\n");
		printf("10.�鿴��ջ���е�ֵ(�Ƚ������)\n");
		printf("11.�˳�����\n");
		printf("��������1��ջ��ʼ��\n"); 
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				creat(s);
				break;
			case 2:
				isempty(s);
				break;
			case 3:
				gettop(s);
				break;
			case 4:
				clear(s);
				break;
			case 5:
				ruin(s);
				break;
			case 6:
				jiance(s); 
				break;
			case 7:
				while(1)
				{
					system("cls");
					printf("������һ������");
					scanf("%d",&data);
					put(s,data);
					printf("�Ƿ���Ҫ������ջ?\n(�ǣ�1/��0)\n");
					scanf("%d",&ch);
					if(ch==0)
					break;
				}
				break;	
			case 8:
				while(1)
				{
					system("cls");
					out(s); 
					printf("�Ƿ���Ҫ������ջ?\n(�ǣ�1/��0)\n");
					scanf("%d",&ch);
					if(ch==0)
					break;
				}
				break;
			case 9:
				jisuan();
				break; 
			case 10:
				look(s);
				break;	 
			case 11:
				exit(0);
			
		}
	}
}
