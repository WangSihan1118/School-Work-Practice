/*assist.c*/
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include "teacher.h"
#include "student.h"
#include "assist.h"

/*int num=10;//��������Ч���ݸ���
int s_num=10;//ѧ�������� 
int i_margin=0;
long long account_get;
char password_get[15];
const char t_account[10]="admin";
const char t_password[10]="admin";
char  t_account_get[10];
char  t_password_get[10];
long long account[20]={2020160101001,2020160101002,2020160101003,2020160101004,2020160101005,2020160101006,2020160101007,2020160101008,2020160101009,2020160101010};
char name[20][10]={"�� ��","Ǯ ��","�� ɢ","�� ˼","�� ��","�� ½","֣ ��","�� ��","�� ��","�� ʶ"};
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

	printf("\n       ��ӭʹ�õ��ӿƴ�ѧ���ɼ�����ϵͳ \n");
	printf("              ������ʵ    ������Ϊ\n");
	printLine();

	printf("\n");

	printf("��ѡ���������:\n");
	printf("[A]��ʦ\t\t [B]ѧ��\t [Q]�˳�\n");

	for(i_margin = 0; i_margin < 50; i_margin++) printf("-");
	printf("\n");
	scanf("%c",&c_user_choice);

	switch(c_user_choice)
	{
		
		case 'A':
		case 'a':system("cls");
		         printf("��ӭ�����ʦ��¼ҳ��\n");
		         fflush(stdin);
		         t_menu();
		         break;
		case 'B':
		case 'b':system("cls");
		         printf("��ӭ����ѧ����¼ҳ��\n");
		         fflush(stdin);
		         s_menu();
		         break;
		case 'Q':
		case 'q':fflush(stdin);
		         bye();
		         break;
		         
		default:  printf("������󣡣�\n");
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

	printf("��лʹ�õ��ӿƴ�ѧ���ɼ�����ϵͳ\n");
	printf("       by��幣���诣�С��       \n");

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


//������Сֵ
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


//����ƽ��ֵ 
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
 
