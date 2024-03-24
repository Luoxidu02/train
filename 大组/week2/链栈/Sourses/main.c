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
		printf("1.初始化一个链栈\n");
		printf("2.判断链栈是否为空\n");
		printf("3.得到栈顶元素\n");
		printf("4.清空栈\n");
		printf("5.销毁栈\n");
		printf("6.检测栈长度\n");
		printf("7.入栈\n");
		printf("8.出栈\n");
		printf("9.四则运算\n");
		printf("10.查看链栈所有的值(先进后出版)\n");
		printf("11.退出程序\n");
		printf("请先输入1对栈初始化\n"); 
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
					printf("请输入一个整数");
					scanf("%d",&data);
					put(s,data);
					printf("是否需要继续入栈?\n(是：1/否：0)\n");
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
					printf("是否需要继续出栈?\n(是：1/否：0)\n");
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
