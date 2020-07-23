#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include "Assist.c"
//#include "Student.h"

long long account[10]={2020160101001,2020160101002,2020160101003,2020160101004,2020160101005,2020160101006,2020160101007,2020160101008,2020160101009,2020160101010};
char name[10][10]={"赵 翼","钱 尔","孙 散","李 思","周 雾","吴 陆","郑 琪","王 霸","冯 酒","陈 识"};
char password[10][10]={"101001","101002","101003","101004","101005","101006","101007","101008","101009","101010"};
int score[10][3]={{92,85,82},{76,77,73},{72,68,69},{84,82,85},{66,79,63},{97,88,97},{62,71,66},{90,76,89},{87,85,88},{56,62,57}};
        
struct Student studentList[10] = {{2020160101001,"赵 翼","101001",92,85,82},
{2020160101002,"钱 尔","101002",76,77,73}, {2020160101003,"孙 散","101003",72,68,69}, {2020160101004,"李 思","101004",84,82,85},
{2020160101005,"周 雾","101005",66,79,63}, {2020160101006,"吴 陆","101006",97,88,97}, {2020160101007,"郑 琪","101007",62,71,66},
{2020160101008,"王 霸","101008",90,76,89}, {2020160101009,"冯 酒","101009",87,85,88}, {2020160101010,"陈 识","101010",56,62,57}};

int numberOfStudent = sizeof(studentList) / sizeof(studentList[0]);


struct Student{
    long long studentId;
    char* studentName;
    char* studentPassword;
    int introGrade;
    int calculusGrade;
    int englishGrade;
};

struct Student createStudent(long long sId, char* sName, char* sPassword, int introGrade, int calculusGrade,  int englishGrade)
{
    struct Student student = {sId, sName, sPassword, introGrade, calculusGrade, englishGrade};
    return student;
}

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
    {
		printf("输入错误！！\n");
      	while(getchar()!='\n') continue;
      	s_menu();
	}
}

void s_login()
{
	long long accountId_get;
	char* password_get;
	fflush(stdin);
    printf("请输入您的学号和密码（初始密码为学号后六位）:\n");
    printf("学号：");
    scanf("%lld",&accountId_get);
    printf("密码：");
    scanf("%s",password_get);

	for(int i = 0; i < numberOfStudent; ++i)
	{
		if(studentList[i].studentId != accountId_get)
        {
            printf("账号错误！请重新输入!\n\n");
            s_login();
        }

        if(accountId_get == studentList[i].studentId && (strcmp(password_get, studentList[i].studentPassword)) == 0)
        {
            printf("登录成功！\n"); 
    	    printf("欢迎登录，%s!\n\n",name[i]) ;
    	    fflush(stdin);
    	    login_i = i;
    	    s_choice();
        }
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
}

int main(){
    
    long long account[10]={2020160101001,2020160101002,2020160101003,2020160101004,2020160101005,2020160101006,2020160101007,2020160101008,2020160101009,2020160101010};
    char name[10][10]={"赵 翼","钱 尔","孙 散","李 思","周 雾","吴 陆","郑 琪","王 霸","冯 酒","陈 识"};
    char password[10][10]={"101001","101002","101003","101004","101005","101006","101007","101008","101009","101010"};
    int score[10][3]={{92,85,82},{76,77,73},{72,68,69},{84,82,85},{66,79,63},{97,88,97},{62,71,66},{90,76,89},{87,85,88},{56,62,57}};
    printf( "Student amount : %d\n", numberOfStudent);
    for(int i = 0; i < 10; ++i)
    {
        struct Student student = createStudent(account[i], name[i], password[i], score[i][0], score[i][1], score[i][2]);
        studentList[i] = student;
    }

    welcome()
    
    return 0;
}
