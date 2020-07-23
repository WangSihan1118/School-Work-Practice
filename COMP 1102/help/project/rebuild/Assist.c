#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

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

	for(int i_margin = 0; i_margin < 50; i_margin++) printf("-");
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



int getMax(int array[], int length)
{
	int max;
	max = array[0];
	for(int i = 0; i < length;i++)
	{
		if(max < array[i])
		{
			max = array[i];
		}
	}
	return max;
}


//计算最小值
int getMin(int array[], int length)
{
	int min;
	min = array[0];
	for(int i = 0; i < length;i++)
	{

		if(min > array[i])
		{
			min = array[i];
		}
	}
	return min;
} 


//计算平均值 
double average(int array[], int length)
{
	double average;
	int sum = 0;
	for(int i = 0; i < length; i++)
	{
		sum += array[i];
	}
	average = sum / length;
	return average; 
}