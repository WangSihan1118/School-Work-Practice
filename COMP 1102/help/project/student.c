/*student.c*/

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


 
void s_menu(void)
{

	char c_action_chioce;
	printLine();
	printf("\n");
	printf("��ѡ��\n"); 
	printf("[A]��¼\t\t [R]����\t [Q]�˳�\t\n") ;
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
      printf("������󣡣�\n");
      while(getchar()!='\n')continue;
      s_menu();
}

void s_choice(void)
{
	char c_s_choice;
	printLine();
	printf("\n");
	printf("��ѡ��: \n");
	printf("[A]�ҵĿ��� \t[B]�ҵĳɼ� \n[C]ѧҵ�ܽ� \t[D]�޸����� \n[R]���� \t[Q]�˳�\n");
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

		default:printf("������󣡣�\n");
                while(getchar()!='\n')continue;
                s_choice() ;
                break;	         
	}
}


void s_password (void)
{
	char c;
	printf("��ȷ��Ҫ�޸�������(y or n)\n");
	while((scanf("%c",&c) ) == 1)
	{
		switch(c)
		{
			case'Y':
			case'y': fflush(stdin);
			         printf("����������������(����С��ʮλ)\n");
	                 scanf("%s",password[login_i]);
	                 fflush(stdin);
	                 system("cls");
	                 s_login();
	                 break;
			
	        case'N':
	        case'n':fflush(stdin);
			        s_choice();
	                break;

	        default:printf("��������ȷ��ѡ��!\n");
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
    printf("����������ѧ�ź����루��ʼ����Ϊѧ�ź���λ��:\n");
    printf("ѧ�ţ�");
    scanf("%lld",&account_get);
    printf("���룺");
    scanf("%s",password_get) ;
    
    while(account_get != account[i])
    {
    	i++;
    	if(i >= num)
    	{
    		i = 0;
    		printf("�˺Ŵ�������������!\n\n");
            s_login();
		}
	}

    if(account_get == account[i] && (strcmp(password_get, password[i])) == 0)
    {
    	printf("��¼�ɹ���\n"); 
    	printf("��ӭ��¼��%s!\n\n",name[i]) ;
    	fflush(stdin);
    	login_i = i;
    	s_choice();
	}

    else
    {
    	printf("�������!���������룡\n\n");
    	s_login();
	}	
}

void s_grade()
{
	char ch;
	int e; //ƥ�䵽������ѧ�� 
	printf("�����ҵĳɼ�ģ����ѡ��:\n"
	       " A)�ɼ���ѯ          B)�ɼ�����\n"
		   " C)�ɼ�����          D)�ҵ�Ŀ��\n" 
		   " R)����              Q)�˳� \n");
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
		          printf("�밴�˵���ȷ����!\n");
		          s_grade();
				  break; 
	}
} 

void s_total()                                     
{
	//���������ʾ
	printf("�ҵĸ��Ƴɼ����ܳɼ���������:\n"); 
	//�ȸ����ֽܷ������� 
	int i,j,k,t,t1,t2,t3; //��ʱ����
	long long ID;//��ʱ����
	char Name[1][10]={"����"};//��ʱ����
	int rank[50] = {1,2,3,4,5,6,7,8,9,10}; //���� 
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
        score[j+1][2]=t2; score[j+1][3]=t3; //����������Ŀ�ɼ� 
        ID = account[j]; account[j]=account[j+1]; account[j+1]=ID; //����ѧ��
	    for(k=0;k<10;k++)
		  { 
		    Name[0][k]=name[j][k]; 
		    name[j][k]=name[j+1][k];
		    name[j+1][k]=Name[0][k]; //�������� 
	      }
        } 
      }
    }
    
    //ȷ��ѧ�Ų���� 
	while(account_get! = account[i])
	    i++;

	if(account_get == account[i])
	{ 
	    printf("ѧ ��\t\t\t�� ��\t\t�� ��\t΢����\tӢ ��\t�� ��\t������\n");
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
	//�༶ÿ�Ʒ����Ρ���ֵ��ƽ������ʾ  
	printf("\n(һ)�༶���Ʒ����Ρ���ֵ��ƽ����:\n"); 
	#define break1 60
    #define break2 70
    #define break3 80
    #define break4 90 
    //�Ƚ���ÿ�Ƴɼ��ķֶ�
    int m,n;//�к��� 
    int section1[5][3]={{0,0,0}};//ÿ�������ε����� 
	for(int m = 0; m < num; m++)
	{
		for(int n=0; n < 3; n++)
		   if(score[m][n] < break1) section1[4][n]++;
		   else if(score[m][n] < break2) section1[3][n]++;
		   else if(score[m][n] < break3) section1[2][n]++;
		   else if(score[m][n] < break4) section1[1][n]++;
		   else section1[0][n]++; 
	} 
	  //���п�Ŀ�ɼ�����  
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
	  
     //���
	char section2[5][10]={">=90","80-89","70-79","60-69","<60"}; 
	printf("������\t\t�� ��\t΢����\tӢ ��\t\n");
	for(m=0;m<5;m++)
	{
		printf("%s\t ",section2[m]);
		for(n=0;n<3;n++) 
		   printf("\t %2d",section1[m][n]);
	    printf("\n"); 
	}
	printf("��߷�\t\t %d\t %d\t %d\n",max1(score2[0]),max1(score2[1]),max1(score2[2]));
	printf("��ͷ�\t\t %d\t %d\t %d\n",min1(score2[0]),min1(score2[1]),min1(score2[2]));
	printf("ƽ����\t\t %d\t %d\t %d\n",average(score2[0]),average(score2[1]),average(score2[2]));
	int j;
	printf("��ķ���\t"); 
	for(j=0;j<3;j++)
	    printf(" %d\t",score[e][j]);
	printf("\n");
	
	//ƥ��ѧ�� 
	int i=0;
	while(account_get!=account[i])
	    i++;
	if(account_get==account[i])
		e=i; 
		
	//���ݸ����ķ�����������һЩ����
	printf("\n(��)�Աȷ������ṩѧϰ���飺\n");
	char subject[6][10]={"�Źܵ���","΢����","ͨ��Ӣ��","רҵ����","�������","���Է���"}; //����ѧ�� 
	 for(n=0;n<3;n++)
	{
		if(score[e][n]<break1)  
		    printf("����%s,\n"
			       "��ķ�������%s�Σ����%s����Ҫ��ʵ����!\n",subject[n],section2[4],subject[n+3]);
		else if(score[e][n]<break2)
		 printf("����%s\n,"
			       "��ķ�������%s�Σ����%s����Ҫ�ӰѾ�!\n",subject[n],section2[3],subject[n+3]);  	
		else if(score[e][n]<break3)  
		 printf("����%s\n,"
			       "��ķ�������%s�Σ����%s����Ҫ����!\n",subject[n],section2[2],subject[n+3]);
		else if(score[e][n]<break4)	
		 printf("����%s\n,"
			       "��ķ�������%s�Σ����%s����Ҫ�������!\n",subject[n],section2[1],subject[n+3]);
		else  
		 printf("����%s,\n"
			       "��ķ�������%s�Σ����%s����Ҫ��������!\n",subject[n],section2[0],subject[n+3]);
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
	printf("���ĳɼ�Ŀ��(����W��д���޸�/����R������һҳ��)��\n");  
    printf("%s\n",text_goal);//��ӡ��֮ǰд��Ŀ��
	scanf("%c",&ch);
    if(ch=='w' || ch=='W')
	{
		fflush(stdin);
		printf("���������Ŀ��:\n");
		scanf("%s",text_goal);
		printf("��д���޸ģ��ɹ���\n");
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
		printf("�������(w/r)\n\n");
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
