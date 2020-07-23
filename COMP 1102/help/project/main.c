/*main.c*/
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

int main()
{
	int num=10;//数组中有效数据个数
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
	char text_goal[1000]={};

	welcome();

	return 0;
}
