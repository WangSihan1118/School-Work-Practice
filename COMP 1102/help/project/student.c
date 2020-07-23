/*student.c*/

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


 
void s_menu(void)
{

	char c_action_chioce;
	printLine();
	printf("\n");
	printf("请选择：\n"); 
	printf("[A]登录\t\t [R]返回\t [Q]退出\t\n") ;
	printLine();
	printf("\n");
	scanf("%c",&c_action_chioce);
	
    if(c_action_chioce=='A'||c_action_chioce=='a')
       {
       	system("cls");
       	fflush(stdin);
		s_login() ;
	   }
    
     else if(c_action_chioce=='R'||c_action_chioce=='r')
    {
    	system("cls");
    	fflush(stdin);
	    welcome(); 
	}
	
    else if(c_action_chioce=='Q'||c_action_chioce=='q')
        {
        	system("cls");
        	fflush(stdin);
		    bye();
		}

    else
      printf("输入错误！！\n");
      while(getchar()!='\n')continue;
      s_menu();
}

void s_choice(void)
{
	char c_s_choice;
	printLine();
	printf("\n");
	printf("请选择: \n");
	printf("[A]我的考试 \t[B]我的成绩 \n[C]学业总结 \t[D]修改密码 \n[R]返回 \t[Q]退出\n");
	printLine();
	printf("\n");
	scanf("%c",&c_s_choice);

    switch(c_s_choice)
	{
		
		case 'A':
		case 'a':system("cls");
		         fflush(stdin);
		         s_test(); 
		         break;

		case 'B':
		case 'b':system("cls");
		         fflush(stdin);
		         s_grade();
		         break;

		case 'C':
		case 'c':system("cls");
		         fflush(stdin);
		         s_summary();
		         break;

		case 'D':
		case 'd':system("cls");
		         fflush(stdin);
		         s_password();
		         break;

		case 'R':
		case 'r':system("cls");
		         fflush(stdin);
		         s_login();
		         break;

		case 'Q':
		case 'q':system("cls");
		         fflush(stdin);
		         bye();
		         break;

		default:printf("输入错误！！\n");
                while(getchar()!='\n')continue;
                s_choice() ;
                break;	         
	}
}


void s_password (void)
{
	char c;
	printf("您确定要修改密码吗？(y or n)\n");
	while((scanf("%c",&c) ) == 1)
	{
		switch(c)
		{
			case'Y':
			case'y': fflush(stdin);
			         printf("请输入您的新密码(密码小于十位)\n");
	                 scanf("%s",password[login_i]);
	                 fflush(stdin);
	                 system("cls");
	                 s_login();
	                 break;
			
	        case'N':
	        case'n':fflush(stdin);
			        s_choice();
	                break;

	        default:printf("请输入正确的选项!\n");
	                fflush(stdin);
	                scanf("%c",&c);
	                break;
		}
	}	
}

void s_login(void)
{
	long long account_get;
	char* password_get;
	fflush(stdin);
    printf("请输入您的学号和密码（初始密码为学号后六位）:\n");
    printf("学号：");
    scanf("%lld",&account_get);
    printf("密码：");
    scanf("%s",password_get) ;
    
    while(account_get != account[i])
    {
    	i++;
    	if(i >= num)
    	{
    		i = 0;
    		printf("账号错误！请重新输入!\n\n");
            s_login();
		}
	}

    if(account_get == account[i] && (strcmp(password_get, password[i])) == 0)
    {
    	printf("登录成功！\n"); 
    	printf("欢迎登录，%s!\n\n",name[i]) ;
    	fflush(stdin);
    	login_i = i;
    	s_choice();
	}

    else
    {
    	printf("密码错误!请重新输入！\n\n");
    	s_login();
	}	
}

void s_grade()
{
	char ch;
	int e; //匹配到该生的学号 
	printf("请在我的成绩模块中选择:\n"
	       " A)成绩查询          B)成绩分析\n"
		   " C)成绩申诉          D)我的目标\n" 
		   " R)返回              Q)退出 \n");
	ch = getchar();
    switch(ch)
	{
		case 'A':
		case 'a': 
		          s_total();
		          fflush(stdin);
		          system("cls");
		          s_grade();
		          break;
		case 'B':
		case 'b': 
		          s_analyse(); 
				  fflush(stdin);
		          system("cls");      
		          s_grade();
		          break;
		case 'C':
		case 'c': 
		          s_appeal(); 
				  fflush(stdin);
		          system("cls");     
		          s_grade();
		          break;
		case 'D':
		case 'd': 
		          s_goal();
		          fflush(stdin);
		          system("cls");
		          s_grade();
				  break;        
		case 'R':
		case 'r': fflush(stdin);
		          s_choice();
		          fflush(stdin);
		          system("cls");
		          s_grade();
		          break;
		case 'Q':
		case 'q': fflush(stdin);
		          system("cls");
		          bye();
		          break;
		default:  fflush(stdin);
		          system("cls");
		          printf("请按菜单正确输入!\n");
		          s_grade();
				  break; 
	}
} 

void s_total()                                     
{
	//个人情况显示
	printf("我的各科成绩、总成绩、总排名:\n"); 
	//先根据总分进行排名 
	int i,j,k,t,t1,t2,t3; //临时变量
	long long ID;//临时变量
	char Name[1][10]={"赵翼"};//临时变量
	int rank[50] = {1,2,3,4,5,6,7,8,9,10}; //排名 
	int b = 1;
	for(int a = 0; a<num; a++) rank[a] = b++;

	for(int i = 0; i<num; i++) 
	{
		if(account[i] == 0) 
	       continue;
	    score[i][3] = score[i][0] + score[i][1] + score[i][2];
	}
	
	for(i = 0; i<num; i++)
    {
	   for(j = 0;j < num - 1 - i;j++)
      {
        if(score[j][3]<=score[j+1][3])
        {
        t = score[j][0]; t1=score[j][1];
        t2 = score[j][2]; t3=score[j][3];
        score[j][0]=score[j+1][0]; score[j][1]=score[j+1][1];
        score[j][2]=score[j+1][2]; score[j][3]=score[j+1][3];
        score[j+1][0]=t; score[j+1][1]=t1;
        score[j+1][2]=t2; score[j+1][3]=t3; //联动其他科目成绩 
        ID = account[j]; account[j]=account[j+1]; account[j+1]=ID; //联动学号
	    for(k=0;k<10;k++)
		  { 
		    Name[0][k]=name[j][k]; 
		    name[j][k]=name[j+1][k];
		    name[j+1][k]=Name[0][k]; //联动姓名 
	      }
        } 
      }
    }
    
    //确定学号并输出 
	while(account_get! = account[i])
	    i++;

	if(account_get == account[i])
	{ 
	    printf("学 号\t\t\t姓 名\t\t导 论\t微积分\t英 语\t总 分\t总排名\n");
	    printf("%lld\t\t%s\t\t", account[i], name[i]);
	    for(j=0; j<4; j++)
	       printf(" %d\t", score[i][j]);
     	printf("  %d\n", rank[i]);               	
	}

	printf("\n");
    system("pause");
	fflush(stdin);                                                  
}

void s_analyse()                                       
{
	//班级每科分数段、最值和平均分显示  
	printf("\n(一)班级各科分数段、最值、平均分:\n"); 
	#define break1 60
    #define break2 70
    #define break3 80
    #define break4 90 
    //先进行每科成绩的分段
    int m,n;//行和列 
    int section1[5][3]={{0,0,0}};//每个分数段的人数 
	for(int m = 0; m < num; m++)
	{
		for(int n=0; n < 3; n++)
		   if(score[m][n] < break1) section1[4][n]++;
		   else if(score[m][n] < break2) section1[3][n]++;
		   else if(score[m][n] < break3) section1[2][n]++;
		   else if(score[m][n] < break4) section1[1][n]++;
		   else section1[0][n]++; 
	} 
	  //进行科目成绩分离  
	int x=0;
	int score2[3][100];
	for(m=0;m<num;m++)
	{
		if(account[m]==0)
		  continue;
		else
		{
			for(n=0;n<3;n++)
			{
				score2[n][x]=score[m][n]; 
			}
			x++; 
		}
	}
	  
     //输出
	char section2[5][10]={">=90","80-89","70-79","60-69","<60"}; 
	printf("分数段\t\t导 论\t微积分\t英 语\t\n");
	for(m=0;m<5;m++)
	{
		printf("%s\t ",section2[m]);
		for(n=0;n<3;n++) 
		   printf("\t %2d",section1[m][n]);
	    printf("\n"); 
	}
	printf("最高分\t\t %d\t %d\t %d\n",max1(score2[0]),max1(score2[1]),max1(score2[2]));
	printf("最低分\t\t %d\t %d\t %d\n",min1(score2[0]),min1(score2[1]),min1(score2[2]));
	printf("平均分\t\t %d\t %d\t %d\n",average(score2[0]),average(score2[1]),average(score2[2]));
	int j;
	printf("你的分数\t"); 
	for(j=0;j<3;j++)
	    printf(" %d\t",score[e][j]);
	printf("\n");
	
	//匹配学号 
	int i=0;
	while(account_get!=account[i])
	    i++;
	if(account_get==account[i])
		e=i; 
		
	//根据该生的分数排名给出一些建议
	printf("\n(二)对比分数段提供学习建议：\n");
	char subject[6][10]={"信管导论","微积分","通用英语","专业技能","数理基础","语言方面"}; //三个学科 
	 for(n=0;n<3;n++)
	{
		if(score[e][n]<break1)  
		    printf("对于%s,\n"
			       "你的分数处于%s段，你的%s还需要夯实基础!\n",subject[n],section2[4],subject[n+3]);
		else if(score[e][n]<break2)
		 printf("对于%s\n,"
			       "你的分数处于%s段，你的%s还需要加把劲!\n",subject[n],section2[3],subject[n+3]);  	
		else if(score[e][n]<break3)  
		 printf("对于%s\n,"
			       "你的分数处于%s段，你的%s还需要加油!\n",subject[n],section2[2],subject[n+3]);
		else if(score[e][n]<break4)	
		 printf("对于%s\n,"
			       "你的分数处于%s段，你的%s还需要继续冲刺!\n",subject[n],section2[1],subject[n+3]);
		else  
		 printf("对于%s,\n"
			       "你的分数处于%s段，你的%s还需要继续保持!\n",subject[n],section2[0],subject[n+3]);
    }
    
	printf("\n");
    system("pause");
	fflush(stdin);
} 

void s_appeal()//?????? 
{
	
	printf("\n");
    system("pause");
	fflush(stdin);
}

void s_goal()
{
	fflush(stdin);
	char ch;
	printf("您的成绩目标(输入W书写或修改/输入R返回上一页面)：\n");  
    printf("%s\n",text_goal);//打印出之前写的目标
	scanf("%c",&ch);
    if(ch=='w' || ch=='W')
	{
		fflush(stdin);
		printf("请输入你的目标:\n");
		scanf("%s",text_goal);
		printf("书写（修改）成功！\n");
		printf("\n");
        system("pause");
	    fflush(stdin);
	    system("cls");
	    s_goal();	
	} 
	else if (ch=='R' || ch=='r')
	{
		
		fflush(stdin);
		system("cls");
		s_grade();
	}
	else
	{
		printf("输入错误！(w/r)\n\n");
        system("pause");
	    fflush(stdin);
	    system("cls");
	    s_goal();	
	}

}

void s_news()
{
	
	
	printf("\n");
    system("pause");
	fflush(stdin);
}



void s_test()
{
	
	
	printf("\n");
    system("pause");
	fflush(stdin);
}
void s_summary()
{
	
	
    printf("\n");
    system("pause");
	fflush(stdin);
}
