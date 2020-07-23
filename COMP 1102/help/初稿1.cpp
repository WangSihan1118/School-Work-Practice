#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

void welcome(void);//欢迎界面 
void t_menu(void);//老师的菜单 
void s_menu(void);//学生的菜单 
void t_login(void);//老师登录 
int s_login();//学生登录 
void t_choice(void);//老师选择界面 
void s_choice(void);//学生选择界面 
void bye(void);//再见界面 
void s_password(void);//学生修改密码界面

void t_grade();
void insert();//添加学生信息
void del();//删除学生信息  
void search();//查找个人成绩  
void total();//查询整体成绩
void s_grade();
void s_total();
void analyse();
void appeal();
void goal();
int max(int s[]);
int min(int s[]);
int average(int s[]);

void t_news();
void s_summary();
void s_news();
void s_test();

int num=10;//数组中有效数字个数？？？？ 
int s_num;//学生的人数 
int i_margin=0;
long long account_get;
char password_get[15];
const char t_account[10]="admin";
const char t_password[10]="admin";
char  t_account_get[10];
char  t_password_get[10];
long long account[20]={2020160101001,2020160101002,2020160101003,2020160101004,2020160101005,2020160101006,2020160101007,2020160101008,2020160101009,2020160101010};
char name[20][20]={"赵翼","钱尔","孙散","李思","周雾","吴陆","郑琪","王霸","冯酒","陈识"};
char password[20][10]={"101001","101002","101003","101004","101005","101006","101007","101008","101009","101010"};
int score[20][3]={{92,85,82},{76,77,73},{72,68,69},{84,82,85},{66,79,63},{97,88,97},{62,71,66},{90,76,89},{87,85,88},{56,62,62}};
int section[20][3]; 



int main()
{
	welcome();
	return 0;
}

void welcome(void)
{
	char c_user_choice;
	for(;i_margin<50;i_margin++) printf("-");
	printf("\n 欢迎使用电子科大学生成绩管理系统 \n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	
	printf("请选择您的身份:\n");
	printf("[A]:教师\t [B]:学生\t[C]退出\n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
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
		case 'C':
		case 'c':fflush(stdin);
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
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("感谢使用电子科大学生成绩管理系统\n");
	printf("       by鹏骞，美璇，小迪       \n");
    for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");//这里需要结束，请注意 
}

void t_menu(void)
{
    char c_action_chioce;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("请选择：\n"); 
	printf("[A]登录\t [B]返回\t [C]退出\t\n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	scanf("%c",&c_action_chioce);
	
    if(c_action_chioce=='A'||c_action_chioce=='a')
       {
  	        system("cls");
	    	t_login() ;
	   }
    
     else if(c_action_chioce=='B'||c_action_chioce=='b')
    {
   	        system("cls");
		    welcome(); 
	}
	
    else if(c_action_chioce=='C'||c_action_chioce=='c')
        {
            bye();
		}
   
    else
      printf("输入错误！！\n");
      while(getchar()!='\n')continue;
      t_menu();
}

void s_menu(void)
{

	char c_action_chioce;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("请选择：\n"); 
	printf("[A]登录\t [B]返回\t [C]退出\t\n ") ;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	scanf("%c",&c_action_chioce);
	
    if(c_action_chioce=='A'||c_action_chioce=='a')
       {
       	system("cls");
		s_login() ;
	   }
    
     else if(c_action_chioce=='B'||c_action_chioce=='b')
    {
    	system("cls");
	    welcome(); 
	}
	
    else if(c_action_chioce=='C'||c_action_chioce=='c')
        {
        	system("cls");
		    bye();
		}

    else
      printf("输入错误！！\n");
      while(getchar()!='\n')continue;
      s_menu();
}

void t_choice(void)
{
	char c_t_choice;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("请选择: \n");
	printf("[A]学生成绩 \t[B]新的消息 \t [C]返回 \t [D]退出 \t\n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	scanf("%c",&c_t_choice);
    switch(c_t_choice)
	{
		
		case 'A':
		case 'a':system("cls");
		         t_grade(); 
		         break;
		case 'B':
		case 'b':system("cls");
		         t_news();
		         break;
		case 'C':
		case 'c':system("cls");
		         t_login();
		         break;
		case 'D':
		case 'd':system("cls");
		         bye();
		         break;
		default:printf("输入错误！！\n");
                while(getchar()!='\n') continue;
                t_choice() ;
                break;
	}
}

void s_choice(void)
{
	char c_s_choice;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("请选择: \n");
	printf("[A]我的考试 \t[B]我的成绩 \t[C]学业总结 \t[D]修改密码 \t [E]返回 \t[E]退出 \t\n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
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
		case 'E':
		case 'e':system("cls");
		         fflush(stdin);
		         s_login();
		         break;
		case 'F':
		case 'f':system("cls");
		         fflush(stdin);
		         bye();
		         break;
		default:printf("输入错误！！\n");
                while(getchar()!='\n')continue;
                s_choice() ;
                break;
		         
	}
}



void t_login(void)
{
	printf("请输入您的账号和密码\n");
    printf("账号：");
    scanf("%s",t_account_get);
    printf("密码：");
    scanf("%s",t_password_get);
    
    if((strcmp(t_account,t_account))==0&&(strcmp(t_password,t_password_get))==0)
    {
    	printf("欢迎您，管理员");
    	printf("\n") ;
    	fflush(stdin);
    	t_choice();
	}
	else
	{
		printf("登录错误！！！");
		printf("\n") ;
		fflush(stdin);
		system("cls");
        t_menu();
	}
 } 
 
void s_password (void)
{
	char c;
	printf("您确定要修改密码吗？(y or n)\n");
	while((scanf("%c",&c) )==1)
	{
		switch(c)
		{
			case'Y':
			case'y': printf("请输入您的新密码(密码小于十位)\n");
	                 scanf("%s",password[s_login()]);
	                 break;
	        case'N':
	        case'n':s_choice();
	                break;
	        default:printf("请输入正确的选项!\n");
	                scanf("%c",&c);
	                break;
		}
	

	}
	
}

int s_login(void)
{
	int i=0;
    printf("请输入您的学号和密码（初始密码为学号后六位）\n");
    printf("学号：");
    scanf("%lld",&account_get);
    printf("密码：");
    scanf("%s",password_get) ;
    
    while(account_get!=account[i])
    {
    	i++;
    	if(i>=num)
    	{
    		i=0;
    		printf("账号错误！\n");
    		printf("学号：");
            scanf("%s",account_get);
		}
	}
    if(account_get==account[i])
    {
    	printf("登录成功！\n"); 
    	printf("欢迎登录，%s\n",name[i]) ;
    	fflush(stdin);
    	s_choice();
    	return i;
	}
    else
    {
    	printf("密码错误\n");
    	s_login();
	}
	
	return i;
}

////////////////////////////////////////////////////////////////////////////

void t_grade()
{
	char ch;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("请在学生成绩模块中选择:"
	       " A)添加学生信息      B)删除学生信息"
		   " C)查询学生个人成绩  D)查询学生总体成绩" 
		   " R)返回              Q)退出 ");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	ch=getchar();
    switch(ch)
	{
		case 'A':
		case 'a': insert();
		          break;
		case 'B':
		case 'b': del();
		          break;
		case 'C':
		case 'c': search();
		          break;
		case 'D':
		case 'd': total();
		          break;        
		case 'R':
		case 'r': t_choice();
		          break;
		case 'Q':
		case 'q': printf("欢迎下次使用！！");
		          return ;
		default:  printf("请按菜单输入");
		          t_grade(); 
	}	 
	 
} 

//添加学生信息
void insert()
{
	long long x;
	printf("请输入学生学号，格式为20201601010**:");
	scanf("%lld",&x);
	//输入学号超过范围或已存在时 
	if (x<0 || x>2020160101050) //预设了50个?
	{
		printf("输入信息不合法!\n");
		return;
	} 
	for(int i=0;i<num;i++)
	{
		if(account[i]!=0 && account[i]==x)
	    {
	    	printf("该学号已存在!\n");
	    	return;
		}
	}
	//输入该生姓名、成绩 
	printf("输入学生姓名："); 
	scanf("%s,&name[num]");
	printf("请输入信管导论成绩：");
	scanf("%d,%score[num][0]"); 
	printf("请输入微积分成绩：");
	scanf("%d,%score[num][1]"); 
	printf("请输入英语成绩：");
	scanf("%d,%score[num][2]"); 
	num++; 
	s_num++;
	printf("添加成功！\n"); 
}

//删除学生信息
void del()
{
	int i; 
	printf("请输入要删除的学生学号：");
	scanf("%lld,&x");
	if (i<0 || i>2020160101050)
	{
		printf("您输入的学生信息不存在!\n");
		return;
	}
	else
	{
		account[i]=0;
		s_num--;
		printf("删除成功！\n");
	} 
 } 
 
//查找个人成绩 
void search()
{
	long long x;
	printf("请输入要查询的学生学号：");
	scanf("%lld,%x");
	if (x<0 || x>2020160101050)
	{
		printf("您输入的学生信息不存在!\n");
		return;
	}
	int i;
	for(i=0;i<num;i++)
	{
		if(account[i]==x)
	      break;
    }
    if(account[i]!=x)
    {
    	printf("您输入的学生不存在！\n");
    	return;
	}
	else
	{
		score[i][3]=score[i][0]+score[i][1]+score[i][2]; 
		printf("学号\t\t姓名\t\t信管导论\t微积分\t英语\t总分\n");
		printf("%d\t\t",account[i]);
		printf("%s\t\t",name[i]);
		for(int j=0;j<4;j++)
		   printf("%d\t",score[i][j]); 
		printf("\n");
	}
 }
 
//查询整体成绩
void total()
{
	printf("-------------学生整体成绩包括（一）每位学生的各科成绩、总成绩、总排名-------------\n"
	       "                             （二）班级各科分数段、最值、平均分"); 
	//总分显示
	printf("（一）每位学生的各科成绩、总成绩、总排名:\n");
	  //先根据总分进行排序 
	int i,j,t,t1,t2,t3; //临时变量
	long long ID;//临时变量
	char Name;//临时变量
	int rank[50]={1,2,3,4,5,6,7,8,9,10}; //排名 
	int a,b=1;
	for(a=0;a<50;a++) rank[a]=b++;
	 
	for(j=0;j<10;j++)
    for(i=0;i<10-1-j;i++)
    if(score[i][3]<score[i+1][3])
    {
    t=score[i][0]; t1=score[i][1];
    t2=score[i][2]; t3=score[i][3];
    score[i][0]=score[i+1][0]; score[i][1]=score[i+1][1];
    score[i][2]=score[i+1][2]; score[i][3]=score[i+1][3];
    score[i+1][0]=t; score[i+1][1]=t1;
    score[i+1][2]=t2; score[i+1][3]=t3; //联动其他科目成绩 
    ID=account[i]; account[i]=account[i+1]; account[i+1]=ID; //联动学号
	Name=name[i][20]; Name=name[i+1][20]; name[i+1][20]=Name; //联动姓名 
    } 
	printf("共有%d名学生，整体成绩如下：\n",s_num);
	printf("学号\t\t姓名\t\t信管导论\t微积分\t英语\t总分\t总排名\n");
	for(i=0;i<num;i++)
	{
		if(account[i]==0)
	      continue;
	    printf("%lld\t\t",account[i]);
	    printf("%s\t\t",name[i]);
	    for(j=0;j<4;j++)
	       printf("%d\t",score[i][j]);   
	    printf("%d\t%d",score[i][3],rank[i]);            
	    printf("\n");
    }
    
    //每科分数段、最值和平均分显示
	printf("\n（二）各科分数段、最值、平均分:\n"); 
    #define break1 60
    #define break2 70
    #define break3 80
    #define break4 90 
      //先进行每科成绩的分段
    int m,n;//行和列 
    int section1[5][3]={{0,0,0}}; 
	for(m=0;m<num;m++)
	{
		for(n=0;n<3;n++)
		   if(score[m][n]<break1) section1[4][n]++;
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
		if(account[m]=0)
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
    printf("成绩分数段、最值、平均值如下：\n");
	printf("分数段\t\t信管导论\t微积分\t英语\t\n");
	for(m=0;m<5;m++)
	{
		printf("%s\t",section2[m]);
		for(n=0;n<5;n++) 
		   printf("\t%d",section[0][n]);
	    printf("\n"); 
	}
	printf("最高分\t\t%d\t%d\t%d\n",max(score2[0]),max(score2[1]),max(score2[2]));
	printf("最低分\t\t%d\t%d\t%d\n",min(score2[0]),min(score2[1]),min(score2[2]));
	printf("平均分\t\t%d\t%d\t%d\n",average(score2[0]),average(score2[1]),average(score2[2]));  
    return; 
 } 
//计算最大值 
int max(int s[])
{
	int maxs;
	int i;
	maxs=s[0];
	for(i=0;i<num;i++)
	{
		if(account[i]==0)
		   continue;
		else
		{
			if (maxs<s[i]);
			   maxs=s[i];
		}
	}
	return maxs;
}
//计算最小值
int min(int s[])
{
	int mins;
	int i;
	mins=s[0];
	for(i=0;i<num;i++)
	{
		if(account[i]==0)
		  continue;
		else
		{
			if (mins>s[i]);
			   mins=s[i];
		}
	}
	return mins;
} 
//计算平均值 
int average(int s[])
{
	int sum=0;
	int i;
	for(i=0;i<num;i++)
	{
		if(account[i]==0)
		  continue;
		else
		  sum=sum+s[i];
	}
	return sum/s_num; 
} 
 
void s_grade()
{
	char ch;
	int e; //匹配到该生的学号 
	printf("请在我的成绩模块中选择:"
	       " A)成绩查询          B)成绩分析"
		   " C)成绩申诉          D)我的目标" 
		   " R)返回              Q)退出 ");
	ch=getchar();
    switch(ch)
	{
		case 'A':
		case 'a': s_total();
		          break;
		case 'B':
		case 'b': analyse();       
		          break;
		case 'C':
		case 'c': appeal();      
		          break;
		case 'D':
		case 'd': goal();
		          break;        
		case 'R':
		case 'r': s_choice();
		          break;
		case 'Q':
		case 'q': printf("欢迎下次使用！！");
		          return ;
		default:  printf("请按菜单正确输入!\n");
		          return; 
	}
} 

int e;
void s_total()                                     
{
	//个人情况显示
	printf("我的各科成绩、总成绩、总排名:\n"); 
	  //先根据总分进行排名 
	int i,j,t,t1,t2,t3; //临时变量
	long long ID;//临时变量
	char Name;//临时变量
	int rank[50]={1,2,3,4,5,6,7,8,9,10}; //排名 
	int a,b=1;
	for(a=0;a<50;a++) rank[a]=b++;
	 
	for(j=0;j<10;j++)
    for(i=0;i<10-1-j;i++)
    if(score[i][3]<score[i+1][3])
    {
    t=score[i][0]; t1=score[i][1];
    t2=score[i][2]; t3=score[i][3];
    score[i][0]=score[i+1][0]; score[i][1]=score[i+1][1];
    score[i][2]=score[i+1][2]; score[i][3]=score[i+1][3];
    score[i+1][0]=t; score[i+1][1]=t1;
    score[i+1][2]=t2; score[i+1][3]=t3; //联动其他科目成绩 
    ID=account[i]; account[i]=account[i+1]; account[i+1]=ID; //联动学号
	Name=name[i][20]; Name=name[i+1][20]; name[i+1][20]=Name; //联动姓名 
    } 
    
    //确定学号并输出 
	while(account_get!=account[i])
	    i++;
	if(account_get==account[i])
	{
		e=i; 
	    printf("学号\t\t姓名\t\t信管导论\t微积分\t英语\t总分\n");
	    printf("%lld\t\t%s\t\t",account[e],name[e]);
	    for(j=0;j<3;j++)
	       printf("%d\t",score[e][j]);
     	printf("%d\t%d",score[e][3],rank[e]);            
        printf("\n");	
	}                                                    
}

void analyse()                                       
{
	//班级每科分数段、最值和平均分显示  
	printf("\n班级各科分数段、最值、平均分:\n"); 
    #define break1 60
    #define break2 70
    #define break3 80
    #define break4 90 
      //先进行每科成绩的分段
    int m,n;//行和列 
    int section1[5][3]={{0,0,0}}; //各科各分数段的数量 
	for(m=0;m<num;m++)
	{
		for(n=0;n<3;n++)
		   if(score[m][n]<break1) section1[4][n]++;
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
		if(account[m]=0)
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
    printf("成绩分数段、最值、平均值如下：\n");
	printf("分数段\t\t信管导论\t微积分\t英语\t\n");
	for(m=0;m<5;m++)
	{
		printf("%s\t",section2[m]);
		for(n=0;n<5;n++) 
		   printf("\t%d",section[0][n]);
	    printf("\n"); 
	}
	printf("最高分\t\t%d\t%d\t%d\n",max(score2[0]),max(score2[1]),max(score2[2]));
	printf("最低分\t\t%d\t%d\t%d\n",min(score2[0]),min(score2[1]),min(score2[2]));
	printf("平均分\t\t%d\t%d\t%d\n",average(score2[0]),average(score2[1]),average(score2[2]));
	int j;
	for(j=0;j<3;j++)
	    printf("%d\t",score[e][j]);
	printf("\n");
	
	//根据该生的分数排名给出一些建议
	char subject[6][10]={"信管导论","微积分","通用英语","专业技能","数理基础","语言方面"}; //三个学科 
	 for(n=0;n<3;n++)
	{
		if(score[e][n]<break1)  
		    printf("对于%c"
			       "你的分数处于%c段，不及格，你的%c还需要夯实基础\n",subject[n][10],section2[4][10],subject[n+3][10]);
		else if(score[e][n]<break2)
		 printf("对于%c"
			       "你的分数处于%c段，你的%c还需要加把劲\n",subject[n][10],section2[4][10],subject[n+3][10]);  	
		else if(score[e][n]<break3)  
		 printf("对于%c"
			       "你的分数处于%c段，你的%c还需要加油\n",subject[n][10],section2[4][10],subject[n+3][10]);
		else if(score[e][n]<break4)	
		 printf("对于%c"
			       "你的分数处于%c段，你的%c还需要继续冲刺\n",subject[n][10],section2[4][10],subject[n+3][10]);
		else  
		 printf("对于%c"
			       "你的分数处于%c段，你的%c还需要继续保持\n",subject[n][10],section2[4][10],subject[n+3][10]);
    }

 } 

void appeal()
{
	
}

void goal() //如果内容较少，就不单独用函数 
{
	printf("请写下您的成绩目标（短期、长期）：\n"); //emm我觉得要用文件，下次进来的时候还可以看到之前写的目标 
}

void s_news()
{
	
}

void t_news()
{
	
}

void s_test()
{
	
}
void s_summary()
{
	
}
