/*teacher.c */

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

extern void welcome(void); 
extern void bye(void);
extern int max1(int s[]);
extern int min1(int s[]);
extern int average(int s[]);

void t_menu(void)
{
	fflush(stdin);
    char c_action_chioce;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("请选择：\n"); 
	printf("[A]登录\t\t [R]返回\t [Q]退出\t\n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	scanf("%c",&c_action_chioce);
	
    if(c_action_chioce=='A'||c_action_chioce=='a')
       {
  	        system("cls");
  	        fflush(stdin);
	    	t_login() ;
	   }
    
     else if(c_action_chioce=='R'||c_action_chioce=='r')
    {
   	        system("cls");
   	        fflush(stdin);
		    welcome(); 
	}
	
    else if(c_action_chioce=='Q'||c_action_chioce=='q')
        {
        	fflush(stdin);
            bye();
		}
   
    else
      printf("输入错误！！\n");
      t_menu();
}

void t_choice(void)
{
	fflush(stdin);
	char c_t_choice;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("请选择: \n");
	printf("[A]学生成绩 \t[B]新的消息 \n[R]返回 \t[Q]退出 \t\n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	scanf("%c",&c_t_choice);
    switch(c_t_choice)
	{
		
		case 'A':
		case 'a':system("cls");
	           	 fflush(stdin);
		         t_grade(); 
		         break;
		case 'B':
		case 'b':system("cls");
		         fflush(stdin);
		         t_news();
		         break;
		case 'R':
		case 'r':system("cls");
		         fflush(stdin);
		         t_login();
		         break;
		case 'Q':
		case 'q':system("cls");
		         fflush(stdin);
		         bye();
		         break;
		default:printf("输入错误！！\n");
                t_choice();
                break;
	}
}

void t_login(void)
{
	fflush(stdin);
	printf("请输入您的账号和密码\n");
    printf("账号：");
    scanf("%s",t_account_get);
    printf("密码：");
    scanf("%s",t_password_get);
    
    if((strcmp(t_account_get,t_account))==0&&(strcmp(t_password,t_password_get))==0)
    {
    	printf("欢迎您，管理员!");
    	printf("\n") ;
    	fflush(stdin);
    	t_choice();
	}
	else
	{
		printf("登录错误！！！");
		printf("\n") ;
		fflush(stdin);
        t_menu();
	}
 } 
 
 void t_grade()
{
	char ch;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n") ;
	printf("请在学生成绩模块中选择:\n"
	       " A)添加学生信息      B)删除学生信息\n"
		   " C)查询学生个人成绩  D)查询学生总体成绩\n" 
		   " R)返回              Q)退出 \n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n") ;
	ch=getchar();
    switch(ch)
	{
		case 'A':
		case 'a': fflush(stdin);
		          t_insert();
		          system("cls");
		          t_grade();
		          break;
		case 'B':
		case 'b': fflush(stdin);
		          t_del();
		          system("cls");
		          t_grade();
		          break;
		case 'C':
		case 'c': fflush(stdin);
		          t_search();
		          system("cls");
		          t_grade();
		          break; 
		case 'D':
		case 'd': fflush(stdin);
		          t_total();
		          system("cls");
		          t_grade();  
				  break;      
		case 'R':
		case 'r': fflush(stdin);
		          t_choice();
		          system("cls");
		          t_grade();
		          break;
		case 'Q':
		case 'q': bye();
		          break;
		default:  fflush(stdin);
		          printf("请按菜单输入！\n");
		          t_grade(); 
		          break;
	}	 
	 
} 

void t_insert()
{
	long long x;
	printf("请输入学生学号，格式为20201601010**:\n");
	scanf("%lld",&x);
	//输入学号超过范围或已存在时 
	if (x<0 || x>2020160101050) //预设了50个
	{
		printf("输入信息不合法!\n");
		printf("\n");
        system("pause");
	    fflush(stdin);
		return;
	} 
	for(int i = 0; i < num;i++)
	{
		if(account[i] != 0 && account[i] == x)
	    {
	    	printf("该学号已存在!\n");
	    	printf("\n");
            system("pause");
	        fflush(stdin);
	    	return;
		}
	}
	//输入该生姓名、成绩 
	account[num] = x;
	printf("输入学生姓名：\n"); 
	scanf("%s",&name[num]);
	printf("请输入导论成绩：\n");
	scanf("%d",&score[num][0]); 
	printf("请输入微积分成绩：\n");
	scanf("%d",&score[num][1]); 
	printf("请输入英语成绩：\n");
	scanf("%d",&score[num][2]); 
	num++; 
	s_num++;
	printf("\n添加成功！\n");
	
	printf("\n");
    system("pause");
	fflush(stdin);
}

void t_del()
{
	int i;
	long long x; 
	printf("请输入要删除的学生学号：\n");
	scanf("%lld",&x);
	if (x<0 || x>2020160101050)
	{
		printf("您输入的学生信息不存在!\n");
		printf("\n");
        system("pause");
	    fflush(stdin);
		return;
	}
	for(i=0;i<num;i++)
	{
		if(account[i]==x)
		   break;
	}
	if(account[i]!=x)
	{
		printf("您输入的学生信息不存在");
		printf("\n");
        system("pause");
	    fflush(stdin);
		return; 
	}
	else
	{
		account[i]=0;
		s_num--;
		printf("删除成功！\n");
	} 
	
	printf("\n");
    system("pause");
	fflush(stdin);
 } 
 
 void t_search()
{
	int i;
	for(i=0;i<num;i++) 
	{
		if(account[i]==0) 
	       continue;
	    score[i][3]=score[i][0]+score[i][1]+score[i][2];
	} 
	
	long long x;
	printf("请输入要查询的学生学号：\n");
	scanf("%lld",&x);
	if (x<=0 || x>2020160101050)
	{
		printf("您输入的学生信息不存在!\n");
		printf("\n");
        system("pause");
	    fflush(stdin);
		return;
	}
	for(i=0;i<num;i++)
	{
		if(account[i]==x)
	       break;
    }
    if(account[i]!=x)
    {
    	printf("您输入的学生信息不存在！\n");
    	printf("\n");
        system("pause");
	    fflush(stdin);
    	return;
	}
	else
	{
		printf("学 号\t\t\t姓 名\t\t导 论\t微积分\t英 语\t总 分\n");
		printf("%lld\t\t",account[i]);
		printf("%s\t\t",name[i]);
		for(int j=0;j<4;j++)
		   printf(" %d\t",score[i][j]); 
		printf("\n\n");
		system("pause");
		fflush(stdin);
	}
 }
 
 
 void t_total()
{
	printf("----------------------------学生整体成绩包括（一）每位学生的各科成绩、总成绩、总排名-----------------------------\n"
	       "                                            （二）班级各科分数段、最值、平均分\n"); 
	//总分显示
	printf("\n（一）每位学生的各科成绩、总成绩、总排名:\n");
	  //先根据总分进行排序 
	int i,j,k,t,t1,t2,t3; //临时变量
	long long ID;//临时变量
	char Name[1][10]={"赵翼"};//临时变量
	int rank[50]={1,2,3,4,5,6,7,8,9,10}; //排名 
	
	int a,b=1;
	for(a=0;a<s_num;a++) rank[a]=b++;
	for(i=0;i<num;i++) 
	{
		if(account[i]==0) 
	       continue;
	    score[i][3]=score[i][0]+score[i][1]+score[i][2];
	}
	
	for(j=0;j<num;j++)
    {
	   for(i=0;i<num-1-j;i++)
      {
        if(score[i][3]<=score[i+1][3])
        {
          t=score[i][0];  t1=score[i][1];
          t2=score[i][2]; t3=score[i][3];
          score[i][0]=score[i+1][0]; score[i][1]=score[i+1][1];
          score[i][2]=score[i+1][2]; score[i][3]=score[i+1][3];
          score[i+1][0]=t; score[i+1][1]=t1;
          score[i+1][2]=t2; score[i+1][3]=t3; //联动其他科目成绩 
          ID=account[i]; account[i]=account[i+1]; account[i+1]=ID; //联动学号
	      for(k=0;k<10;k++)
		  { 
		    Name[0][k]=name[i][k]; 
		    name[i][k]=name[i+1][k];
		    name[i+1][k]=Name[0][k]; //联动姓名 
	      }
        } 
      }
    }
	printf("共有%d名学生，整体成绩如下：\n\n",s_num);
	printf("学 号\t\t\t姓 名\t\t导 论\t\t微积分\t\t英 语\t\t总 分\t\t总排名\n");
	for(i=0;i<num;i++)
	{
		if(account[i]==0)
	       continue;
	    printf("%lld\t\t",account[i]);
	    printf("%s\t\t",name[i]);
	    for(j=0;j<4;j++)
	       printf(" %d\t\t",score[i][j]);   
	    printf(" %3d\t",rank[i]);            
	    printf("\n");
    }
    
    //每科分数段、最值和平均分显示
	printf("\n\n（二）各科分数段、最值、平均分:\n");
	#define break1 60
    #define break2 70
    #define break3 80
    #define break4 90 
      //先进行每科成绩的分段
    int m,n;//行和列 
    int section1[5][3]={{0,0,0}};//每个分数段的人数 
	for(m=0;m<num;m++)
	{
		for(n=0;n<3;n++)
		   if(account[m]==0) continue;
		   else if(score[m][n]<break1) section1[4][n]++;
		   else if(score[m][n]<break2) section1[3][n]++;
		   else if(score[m][n]<break3) section1[2][n]++;
		   else if(score[m][n]<break4) section1[1][n]++;
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

      //再输出
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
	for(i_margin=0;i_margin<115;i_margin++) printf("-");
	
	printf("\n");
    system("pause");
	fflush(stdin);
 } 
 
 void t_news()
{
	
	
	printf("\n");
    system("pause");
	fflush(stdin);
}
