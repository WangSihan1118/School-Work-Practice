/*teacher.c */

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
	printf("��ѡ��\n"); 
	printf("[A]��¼\t\t [R]����\t [Q]�˳�\t\n");
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
      printf("������󣡣�\n");
      t_menu();
}

void t_choice(void)
{
	fflush(stdin);
	char c_t_choice;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("��ѡ��: \n");
	printf("[A]ѧ���ɼ� \t[B]�µ���Ϣ \n[R]���� \t[Q]�˳� \t\n");
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
		default:printf("������󣡣�\n");
                t_choice();
                break;
	}
}

void t_login(void)
{
	fflush(stdin);
	printf("�����������˺ź�����\n");
    printf("�˺ţ�");
    scanf("%s",t_account_get);
    printf("���룺");
    scanf("%s",t_password_get);
    
    if((strcmp(t_account_get,t_account))==0&&(strcmp(t_password,t_password_get))==0)
    {
    	printf("��ӭ��������Ա!");
    	printf("\n") ;
    	fflush(stdin);
    	t_choice();
	}
	else
	{
		printf("��¼���󣡣���");
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
	printf("����ѧ���ɼ�ģ����ѡ��:\n"
	       " A)���ѧ����Ϣ      B)ɾ��ѧ����Ϣ\n"
		   " C)��ѯѧ�����˳ɼ�  D)��ѯѧ������ɼ�\n" 
		   " R)����              Q)�˳� \n");
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
		          printf("�밴�˵����룡\n");
		          t_grade(); 
		          break;
	}	 
	 
} 

void t_insert()
{
	long long x;
	printf("������ѧ��ѧ�ţ���ʽΪ20201601010**:\n");
	scanf("%lld",&x);
	//����ѧ�ų�����Χ���Ѵ���ʱ 
	if (x<0 || x>2020160101050) //Ԥ����50��
	{
		printf("������Ϣ���Ϸ�!\n");
		printf("\n");
        system("pause");
	    fflush(stdin);
		return;
	} 
	for(int i = 0; i < num;i++)
	{
		if(account[i] != 0 && account[i] == x)
	    {
	    	printf("��ѧ���Ѵ���!\n");
	    	printf("\n");
            system("pause");
	        fflush(stdin);
	    	return;
		}
	}
	//��������������ɼ� 
	account[num] = x;
	printf("����ѧ��������\n"); 
	scanf("%s",&name[num]);
	printf("�����뵼�۳ɼ���\n");
	scanf("%d",&score[num][0]); 
	printf("������΢���ֳɼ���\n");
	scanf("%d",&score[num][1]); 
	printf("������Ӣ��ɼ���\n");
	scanf("%d",&score[num][2]); 
	num++; 
	s_num++;
	printf("\n��ӳɹ���\n");
	
	printf("\n");
    system("pause");
	fflush(stdin);
}

void t_del()
{
	int i;
	long long x; 
	printf("������Ҫɾ����ѧ��ѧ�ţ�\n");
	scanf("%lld",&x);
	if (x<0 || x>2020160101050)
	{
		printf("�������ѧ����Ϣ������!\n");
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
		printf("�������ѧ����Ϣ������");
		printf("\n");
        system("pause");
	    fflush(stdin);
		return; 
	}
	else
	{
		account[i]=0;
		s_num--;
		printf("ɾ���ɹ���\n");
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
	printf("������Ҫ��ѯ��ѧ��ѧ�ţ�\n");
	scanf("%lld",&x);
	if (x<=0 || x>2020160101050)
	{
		printf("�������ѧ����Ϣ������!\n");
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
    	printf("�������ѧ����Ϣ�����ڣ�\n");
    	printf("\n");
        system("pause");
	    fflush(stdin);
    	return;
	}
	else
	{
		printf("ѧ ��\t\t\t�� ��\t\t�� ��\t΢����\tӢ ��\t�� ��\n");
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
	printf("----------------------------ѧ������ɼ�������һ��ÿλѧ���ĸ��Ƴɼ����ܳɼ���������-----------------------------\n"
	       "                                            �������༶���Ʒ����Ρ���ֵ��ƽ����\n"); 
	//�ܷ���ʾ
	printf("\n��һ��ÿλѧ���ĸ��Ƴɼ����ܳɼ���������:\n");
	  //�ȸ����ֽܷ������� 
	int i,j,k,t,t1,t2,t3; //��ʱ����
	long long ID;//��ʱ����
	char Name[1][10]={"����"};//��ʱ����
	int rank[50]={1,2,3,4,5,6,7,8,9,10}; //���� 
	
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
          score[i+1][2]=t2; score[i+1][3]=t3; //����������Ŀ�ɼ� 
          ID=account[i]; account[i]=account[i+1]; account[i+1]=ID; //����ѧ��
	      for(k=0;k<10;k++)
		  { 
		    Name[0][k]=name[i][k]; 
		    name[i][k]=name[i+1][k];
		    name[i+1][k]=Name[0][k]; //�������� 
	      }
        } 
      }
    }
	printf("����%d��ѧ��������ɼ����£�\n\n",s_num);
	printf("ѧ ��\t\t\t�� ��\t\t�� ��\t\t΢����\t\tӢ ��\t\t�� ��\t\t������\n");
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
    
    //ÿ�Ʒ����Ρ���ֵ��ƽ������ʾ
	printf("\n\n���������Ʒ����Ρ���ֵ��ƽ����:\n");
	#define break1 60
    #define break2 70
    #define break3 80
    #define break4 90 
      //�Ƚ���ÿ�Ƴɼ��ķֶ�
    int m,n;//�к��� 
    int section1[5][3]={{0,0,0}};//ÿ�������ε����� 
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

      //�����
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
