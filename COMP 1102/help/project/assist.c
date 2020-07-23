/*assist.c*/
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include "teacher.h"
#include "student.h"
#include "assist.h"

/*int num=10;//数组中有效数据个数
int s_num=10;//学生的人数 
int i_margin=0;
long long account_get;
char password_get[15];
const char t_account[10]="admin";
const char t_password[10]="admin";
char  t_account_get[10];
char  t_password_get[10];
long long account[20]={2020160101001,2020160101002,2020160101003,2020160101004,2020160101005,2020160101006,2020160101007,2020160101008,2020160101009,2020160101010};
char name[20][10]={"赵 翼","钱 尔","孙 散","李 思","周 雾","吴 陆","郑 琪","王 霸","冯 酒","陈 识"};
char password[20][10]={"101001","101002","101003","101004","101005","101006","101007","101008","101009","101010"};
int score[20][4]={{92,85,82},{76,77,73},{72,68,69},{84,82,85},{66,79,63},{97,88,97},{62,71,66},{90,76,89},{87,85,88},{56,62,57}};
int section[20][3]; 
int login_i=0;
int e;
char text_goal[1000]={};*/

void printLine(void)
{
	for(int i_margin = 0; i_margin < 50; i_margin++) 
	{
		printf("-");
	}
}

void welcome(void)
{
	char c_user_choice;

	printLine();

	printf("\n       欢迎使用电子科大学生成绩管理系统 \n");
	printf("              求真求实    大气大为\n");
	printLine();

	printf("\n");

	printf("请选择您的身份:\n");
	printf("[A]教师\t\t [B]学生\t [Q]退出\n");

	for(i_margin = 0; i_margin < 50; i_margin++) printf("-");
	printf("\n");
	scanf("%c",&c_user_choice);

	switch(c_user_choice)
	{
		
		case 'A':
		case 'a':system("cls");
		         printf("欢迎进入教师登录页面\n");
		         fflush(stdin);
		         t_menu();
		         break;
		case 'B':
		case 'b':system("cls");
		         printf("欢迎进入学生登录页面\n");
		         fflush(stdin);
		         s_menu();
		         break;
		case 'Q':
		case 'q':fflush(stdin);
		         bye();
		         break;
		         
		default:  printf("输入错误！！\n");
                  while(getchar()!='\n')continue;
                  welcome();
                  break;
                  
	}
}



void bye(void)
{
	system("cls");

	printLine();
	printf("\n");

	printf("感谢使用电子科大学生成绩管理系统\n");
	printf("       by鹏骞，美璇，小迪       \n");

    printLine();
	printf("\n");

    system("pause");
	fflush(stdin);
	exit(0); 
}



int max1(int s[])
{
	int maxs;
	maxs = s[0];
	for(int i = 0; i < num;i++)
	{
		if(account[i] == 0)
		   continue;
		else
		{
			if(maxs < s[i])
			   maxs = s[i];
		}
	}
	return maxs;
}


//计算最小值
int min1(int s[])
{
	int mins;
	mins = s[0];
	for(int i = 0; i < num;i++)
	{
		if(account[i] == 0)
		   continue;
		else
		{
			if(mins > s[i])
			   mins = s[i];
		}
	}
	return mins;
} 


//计算平均值 
int average(int s[])
{
	int sum = 0;
	for(int i = 0; i < num; i++)
	{
		if(account[i] == 0)
		  continue;
		else
		  sum = sum + s[i];
	}
	return sum / s_num; 
}  
 
