#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

void welcome(void);//��ӭ���� 
void t_menu(void);//��ʦ�Ĳ˵� 
void s_menu(void);//ѧ���Ĳ˵� 
void t_login(void);//��ʦ��¼ 
int s_login();//ѧ����¼ 
void t_choice(void);//��ʦѡ����� 
void s_choice(void);//ѧ��ѡ����� 
void bye(void);//�ټ����� 
void s_password(void);//ѧ���޸��������

void t_grade();
void insert();//���ѧ����Ϣ
void del();//ɾ��ѧ����Ϣ  
void search();//���Ҹ��˳ɼ�  
void total();//��ѯ����ɼ�
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

int num=10;//��������Ч���ָ����������� 
int s_num;//ѧ�������� 
int i_margin=0;
long long account_get;
char password_get[15];
const char t_account[10]="admin";
const char t_password[10]="admin";
char  t_account_get[10];
char  t_password_get[10];
long long account[20]={2020160101001,2020160101002,2020160101003,2020160101004,2020160101005,2020160101006,2020160101007,2020160101008,2020160101009,2020160101010};
char name[20][20]={"����","Ǯ��","��ɢ","��˼","����","��½","֣��","����","���","��ʶ"};
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
	printf("\n ��ӭʹ�õ��ӿƴ�ѧ���ɼ�����ϵͳ \n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	
	printf("��ѡ���������:\n");
	printf("[A]:��ʦ\t [B]:ѧ��\t[C]�˳�\n");
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
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
		case 'C':
		case 'c':fflush(stdin);
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
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("��лʹ�õ��ӿƴ�ѧ���ɼ�����ϵͳ\n");
	printf("       by��幣���诣�С��       \n");
    for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");//������Ҫ��������ע�� 
}

void t_menu(void)
{
    char c_action_chioce;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("��ѡ��\n"); 
	printf("[A]��¼\t [B]����\t [C]�˳�\t\n");
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
      printf("������󣡣�\n");
      while(getchar()!='\n')continue;
      t_menu();
}

void s_menu(void)
{

	char c_action_chioce;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("��ѡ��\n"); 
	printf("[A]��¼\t [B]����\t [C]�˳�\t\n ") ;
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
      printf("������󣡣�\n");
      while(getchar()!='\n')continue;
      s_menu();
}

void t_choice(void)
{
	char c_t_choice;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("\n");
	printf("��ѡ��: \n");
	printf("[A]ѧ���ɼ� \t[B]�µ���Ϣ \t [C]���� \t [D]�˳� \t\n");
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
		default:printf("������󣡣�\n");
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
	printf("��ѡ��: \n");
	printf("[A]�ҵĿ��� \t[B]�ҵĳɼ� \t[C]ѧҵ�ܽ� \t[D]�޸����� \t [E]���� \t[E]�˳� \t\n");
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
		default:printf("������󣡣�\n");
                while(getchar()!='\n')continue;
                s_choice() ;
                break;
		         
	}
}



void t_login(void)
{
	printf("�����������˺ź�����\n");
    printf("�˺ţ�");
    scanf("%s",t_account_get);
    printf("���룺");
    scanf("%s",t_password_get);
    
    if((strcmp(t_account,t_account))==0&&(strcmp(t_password,t_password_get))==0)
    {
    	printf("��ӭ��������Ա");
    	printf("\n") ;
    	fflush(stdin);
    	t_choice();
	}
	else
	{
		printf("��¼���󣡣���");
		printf("\n") ;
		fflush(stdin);
		system("cls");
        t_menu();
	}
 } 
 
void s_password (void)
{
	char c;
	printf("��ȷ��Ҫ�޸�������(y or n)\n");
	while((scanf("%c",&c) )==1)
	{
		switch(c)
		{
			case'Y':
			case'y': printf("����������������(����С��ʮλ)\n");
	                 scanf("%s",password[s_login()]);
	                 break;
	        case'N':
	        case'n':s_choice();
	                break;
	        default:printf("��������ȷ��ѡ��!\n");
	                scanf("%c",&c);
	                break;
		}
	

	}
	
}

int s_login(void)
{
	int i=0;
    printf("����������ѧ�ź����루��ʼ����Ϊѧ�ź���λ��\n");
    printf("ѧ�ţ�");
    scanf("%lld",&account_get);
    printf("���룺");
    scanf("%s",password_get) ;
    
    while(account_get!=account[i])
    {
    	i++;
    	if(i>=num)
    	{
    		i=0;
    		printf("�˺Ŵ���\n");
    		printf("ѧ�ţ�");
            scanf("%s",account_get);
		}
	}
    if(account_get==account[i])
    {
    	printf("��¼�ɹ���\n"); 
    	printf("��ӭ��¼��%s\n",name[i]) ;
    	fflush(stdin);
    	s_choice();
    	return i;
	}
    else
    {
    	printf("�������\n");
    	s_login();
	}
	
	return i;
}

////////////////////////////////////////////////////////////////////////////

void t_grade()
{
	char ch;
	for(i_margin=0;i_margin<50;i_margin++) printf("-");
	printf("����ѧ���ɼ�ģ����ѡ��:"
	       " A)���ѧ����Ϣ      B)ɾ��ѧ����Ϣ"
		   " C)��ѯѧ�����˳ɼ�  D)��ѯѧ������ɼ�" 
		   " R)����              Q)�˳� ");
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
		case 'q': printf("��ӭ�´�ʹ�ã���");
		          return ;
		default:  printf("�밴�˵�����");
		          t_grade(); 
	}	 
	 
} 

//���ѧ����Ϣ
void insert()
{
	long long x;
	printf("������ѧ��ѧ�ţ���ʽΪ20201601010**:");
	scanf("%lld",&x);
	//����ѧ�ų�����Χ���Ѵ���ʱ 
	if (x<0 || x>2020160101050) //Ԥ����50��?
	{
		printf("������Ϣ���Ϸ�!\n");
		return;
	} 
	for(int i=0;i<num;i++)
	{
		if(account[i]!=0 && account[i]==x)
	    {
	    	printf("��ѧ���Ѵ���!\n");
	    	return;
		}
	}
	//��������������ɼ� 
	printf("����ѧ��������"); 
	scanf("%s,&name[num]");
	printf("�������Źܵ��۳ɼ���");
	scanf("%d,%score[num][0]"); 
	printf("������΢���ֳɼ���");
	scanf("%d,%score[num][1]"); 
	printf("������Ӣ��ɼ���");
	scanf("%d,%score[num][2]"); 
	num++; 
	s_num++;
	printf("��ӳɹ���\n"); 
}

//ɾ��ѧ����Ϣ
void del()
{
	int i; 
	printf("������Ҫɾ����ѧ��ѧ�ţ�");
	scanf("%lld,&x");
	if (i<0 || i>2020160101050)
	{
		printf("�������ѧ����Ϣ������!\n");
		return;
	}
	else
	{
		account[i]=0;
		s_num--;
		printf("ɾ���ɹ���\n");
	} 
 } 
 
//���Ҹ��˳ɼ� 
void search()
{
	long long x;
	printf("������Ҫ��ѯ��ѧ��ѧ�ţ�");
	scanf("%lld,%x");
	if (x<0 || x>2020160101050)
	{
		printf("�������ѧ����Ϣ������!\n");
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
    	printf("�������ѧ�������ڣ�\n");
    	return;
	}
	else
	{
		score[i][3]=score[i][0]+score[i][1]+score[i][2]; 
		printf("ѧ��\t\t����\t\t�Źܵ���\t΢����\tӢ��\t�ܷ�\n");
		printf("%d\t\t",account[i]);
		printf("%s\t\t",name[i]);
		for(int j=0;j<4;j++)
		   printf("%d\t",score[i][j]); 
		printf("\n");
	}
 }
 
//��ѯ����ɼ�
void total()
{
	printf("-------------ѧ������ɼ�������һ��ÿλѧ���ĸ��Ƴɼ����ܳɼ���������-------------\n"
	       "                             �������༶���Ʒ����Ρ���ֵ��ƽ����"); 
	//�ܷ���ʾ
	printf("��һ��ÿλѧ���ĸ��Ƴɼ����ܳɼ���������:\n");
	  //�ȸ����ֽܷ������� 
	int i,j,t,t1,t2,t3; //��ʱ����
	long long ID;//��ʱ����
	char Name;//��ʱ����
	int rank[50]={1,2,3,4,5,6,7,8,9,10}; //���� 
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
    score[i+1][2]=t2; score[i+1][3]=t3; //����������Ŀ�ɼ� 
    ID=account[i]; account[i]=account[i+1]; account[i+1]=ID; //����ѧ��
	Name=name[i][20]; Name=name[i+1][20]; name[i+1][20]=Name; //�������� 
    } 
	printf("����%d��ѧ��������ɼ����£�\n",s_num);
	printf("ѧ��\t\t����\t\t�Źܵ���\t΢����\tӢ��\t�ܷ�\t������\n");
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
    
    //ÿ�Ʒ����Ρ���ֵ��ƽ������ʾ
	printf("\n���������Ʒ����Ρ���ֵ��ƽ����:\n"); 
    #define break1 60
    #define break2 70
    #define break3 80
    #define break4 90 
      //�Ƚ���ÿ�Ƴɼ��ķֶ�
    int m,n;//�к��� 
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
	  //���п�Ŀ�ɼ����� 
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
	  
     //�����
	char section2[5][10]={">=90","80-89","70-79","60-69","<60"}; 
    printf("�ɼ������Ρ���ֵ��ƽ��ֵ���£�\n");
	printf("������\t\t�Źܵ���\t΢����\tӢ��\t\n");
	for(m=0;m<5;m++)
	{
		printf("%s\t",section2[m]);
		for(n=0;n<5;n++) 
		   printf("\t%d",section[0][n]);
	    printf("\n"); 
	}
	printf("��߷�\t\t%d\t%d\t%d\n",max(score2[0]),max(score2[1]),max(score2[2]));
	printf("��ͷ�\t\t%d\t%d\t%d\n",min(score2[0]),min(score2[1]),min(score2[2]));
	printf("ƽ����\t\t%d\t%d\t%d\n",average(score2[0]),average(score2[1]),average(score2[2]));  
    return; 
 } 
//�������ֵ 
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
//������Сֵ
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
//����ƽ��ֵ 
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
	int e; //ƥ�䵽������ѧ�� 
	printf("�����ҵĳɼ�ģ����ѡ��:"
	       " A)�ɼ���ѯ          B)�ɼ�����"
		   " C)�ɼ�����          D)�ҵ�Ŀ��" 
		   " R)����              Q)�˳� ");
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
		case 'q': printf("��ӭ�´�ʹ�ã���");
		          return ;
		default:  printf("�밴�˵���ȷ����!\n");
		          return; 
	}
} 

int e;
void s_total()                                     
{
	//���������ʾ
	printf("�ҵĸ��Ƴɼ����ܳɼ���������:\n"); 
	  //�ȸ����ֽܷ������� 
	int i,j,t,t1,t2,t3; //��ʱ����
	long long ID;//��ʱ����
	char Name;//��ʱ����
	int rank[50]={1,2,3,4,5,6,7,8,9,10}; //���� 
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
    score[i+1][2]=t2; score[i+1][3]=t3; //����������Ŀ�ɼ� 
    ID=account[i]; account[i]=account[i+1]; account[i+1]=ID; //����ѧ��
	Name=name[i][20]; Name=name[i+1][20]; name[i+1][20]=Name; //�������� 
    } 
    
    //ȷ��ѧ�Ų���� 
	while(account_get!=account[i])
	    i++;
	if(account_get==account[i])
	{
		e=i; 
	    printf("ѧ��\t\t����\t\t�Źܵ���\t΢����\tӢ��\t�ܷ�\n");
	    printf("%lld\t\t%s\t\t",account[e],name[e]);
	    for(j=0;j<3;j++)
	       printf("%d\t",score[e][j]);
     	printf("%d\t%d",score[e][3],rank[e]);            
        printf("\n");	
	}                                                    
}

void analyse()                                       
{
	//�༶ÿ�Ʒ����Ρ���ֵ��ƽ������ʾ  
	printf("\n�༶���Ʒ����Ρ���ֵ��ƽ����:\n"); 
    #define break1 60
    #define break2 70
    #define break3 80
    #define break4 90 
      //�Ƚ���ÿ�Ƴɼ��ķֶ�
    int m,n;//�к��� 
    int section1[5][3]={{0,0,0}}; //���Ƹ������ε����� 
	for(m=0;m<num;m++)
	{
		for(n=0;n<3;n++)
		   if(score[m][n]<break1) section1[4][n]++;
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
	  
     //���
	char section2[5][10]={">=90","80-89","70-79","60-69","<60"}; 
    printf("�ɼ������Ρ���ֵ��ƽ��ֵ���£�\n");
	printf("������\t\t�Źܵ���\t΢����\tӢ��\t\n");
	for(m=0;m<5;m++)
	{
		printf("%s\t",section2[m]);
		for(n=0;n<5;n++) 
		   printf("\t%d",section[0][n]);
	    printf("\n"); 
	}
	printf("��߷�\t\t%d\t%d\t%d\n",max(score2[0]),max(score2[1]),max(score2[2]));
	printf("��ͷ�\t\t%d\t%d\t%d\n",min(score2[0]),min(score2[1]),min(score2[2]));
	printf("ƽ����\t\t%d\t%d\t%d\n",average(score2[0]),average(score2[1]),average(score2[2]));
	int j;
	for(j=0;j<3;j++)
	    printf("%d\t",score[e][j]);
	printf("\n");
	
	//���ݸ����ķ�����������һЩ����
	char subject[6][10]={"�Źܵ���","΢����","ͨ��Ӣ��","רҵ����","�������","���Է���"}; //����ѧ�� 
	 for(n=0;n<3;n++)
	{
		if(score[e][n]<break1)  
		    printf("����%c"
			       "��ķ�������%c�Σ����������%c����Ҫ��ʵ����\n",subject[n][10],section2[4][10],subject[n+3][10]);
		else if(score[e][n]<break2)
		 printf("����%c"
			       "��ķ�������%c�Σ����%c����Ҫ�ӰѾ�\n",subject[n][10],section2[4][10],subject[n+3][10]);  	
		else if(score[e][n]<break3)  
		 printf("����%c"
			       "��ķ�������%c�Σ����%c����Ҫ����\n",subject[n][10],section2[4][10],subject[n+3][10]);
		else if(score[e][n]<break4)	
		 printf("����%c"
			       "��ķ�������%c�Σ����%c����Ҫ�������\n",subject[n][10],section2[4][10],subject[n+3][10]);
		else  
		 printf("����%c"
			       "��ķ�������%c�Σ����%c����Ҫ��������\n",subject[n][10],section2[4][10],subject[n+3][10]);
    }

 } 

void appeal()
{
	
}

void goal() //������ݽ��٣��Ͳ������ú��� 
{
	printf("��д�����ĳɼ�Ŀ�꣨���ڡ����ڣ���\n"); //emm�Ҿ���Ҫ���ļ����´ν�����ʱ�򻹿��Կ���֮ǰд��Ŀ�� 
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
