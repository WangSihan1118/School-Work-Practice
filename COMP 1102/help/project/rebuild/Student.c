#include "Student.h"

struct Student studentList[10] = {{2020160101001,"赵 翼","101001",92,85,82},
{2020160101002,"钱 尔","101002",76,77,73}, {2020160101003,"孙 散","101003",72,68,69}, {2020160101004,"李 思","101004",84,82,85},
{2020160101005,"周 雾","101005",66,79,63}, {2020160101006,"吴 陆","101006",97,88,97}, {2020160101007,"郑 琪","101007",62,71,66},
{2020160101008,"王 霸","101008",90,76,89}, {2020160101009,"冯 酒","101009",87,85,88}, {2020160101010,"陈 识","101010",56,62,57}};
struct Student studentList[10];
int user_index;
int numberOfStudent = sizeof(studentList) / sizeof(studentList[0]);

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
    	    printf("欢迎登录，%s!\n\n",studentList[i].studentName) ;
    	    fflush(stdin);
    	    user_index = i;
    	    s_choice();
        }
	}
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

void s_test()
{
	
	
	printf("\n");
    system("pause");
	fflush(stdin);
}

void s_grade()
{
	char ch;//匹配到该生的学号 
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

int s_totalGrades(struct Student s)
{

}

void s_resorted()
{
	studen
}