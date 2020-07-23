#include <stdio.h>
#include <windows.h>

void welcome(void);//ok
void t_menu(void);//ok
void s_menu(void);//ok
void t_register(void);
void t_login(void);
int s_login();//ok
void t_choice(void);//ok
void s_choice(void);//ok
void bye(void);//ok
void t_grade(void);
void t_news(void);
void s_test(void);
void s_grade(void);
void s_summary(void);
void s_password(void);//ok 



int i_margin=0;
char account_get[15];
char password_get[15];
char account[20][15] = {"2020160101001","2020160101002","2020160101003","2020160101004","2020160101005","2020160101006","2020160101007","2020160101008","2020160101009","2020160101010"};
char name[20][20] = {"","Ǯ","ɢ","˼","","½","֣","","","ʶ"};
char password[20][10] = {"101001","101002","101003","101004","101005","101006","101007","101008","101009","101010"};

void welcome(void)
{
	char c_user_choice;
	for(;i_margin<20;i_margin++) printf("-");
	printf("\n");
	printf("\n ӭʹõӿƴϵͳ \n");
	for(;i_margin<20;i_margin++) printf("-");
	printf("\n");
	
	printf("ѡ:\n");
	printf("[A]:ʦ\t [B]:\t[C]˳\n");
	scanf("%c",&c_user_choice);
	switch(c_user_choice)
	{
		
		case 'A':
		case 'a':system("cls");
		         printf("ӭʦ¼ҳ\n");
		         t_menu();
		         break;
		case 'B':
		case 'b':system("cls");
		         printf("ӭ¼ҳ\n");
		         s_menu();
		         break;
		case 'C':
		case 'c':bye();
		         break;
		         
		default:  printf("󣡣\n");
                  while(getchar()!='\n')continue;
                  welcome();
                  break;
	}
}
void bye(void)
{
	for(;i_margin<20;i_margin++) printf("-");
	printf("\n");
	printf("лʹõӿƴϵͳ\n");
	printf("       by幣诣С       \n");
    for(;i_margin<20;i_margin++) printf("-");
	printf("\n");//Ҫע 
}

void t_menu(void)
{
    char c_action_chioce;
	for(;i_margin<20;i_margin++) printf("-");
	printf("\n");
	printf("ѡ\n"); 
	printf("[A]ע\t  [B]¼\t [C]\t [D]˳\t\n") ;
	for(;i_margin<20;i_margin++) printf("-");
	printf("\n");
	scanf("%c",&c_action_chioce);
	
    if(c_action_chioce=='A'||c_action_chioce=='a')
       {
       	system("cls");
		t_register();
	   }
    
     else if(c_action_chioce=='B'||c_action_chioce=='b')
    {
    	system("cls");
		t_login() ;
	}
	
    else if(c_action_chioce=='C'||c_action_chioce=='c')
        {
        	system("cls");
		    welcome(); 
		}
        
    else if(c_action_chioce=='D'||c_action_chioce=='d')
        {
        	bye();
		}
   
    else
      printf("󣡣\n");
      while(getchar()!='\n')continue;
      t_menu();
}

void s_menu(void)
{

	char c_action_chioce;
	for(;i_margin<20;i_margin++) printf("-");
	printf("\n");
	printf("ѡ\n"); 
	printf("[A]¼\t [B]\t [C]˳\t\n ") ;
	for(;i_margin<20;i_margin++) printf("-");
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
      printf("󣡣\n");
      while(getchar()!='\n')continue;
      s_menu();
}

void t_choice(void)
{
	char c_t_choice;
	for(;i_margin<20;i_margin++) printf("-");
	printf("\n");
	printf("ѡ: \n");
	printf("[A] \t[B] \t [C] \t [D]˳ \t\n");
	for(;i_margin<20;i_margin++) printf("-");
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
		default:printf("󣡣\n");
                while(getchar()!='\n')continue;
                t_choice() ;
                break;
	}
}

void s_choice(void)
{
	char c_s_choice;
	for(;i_margin<20;i_margin++) printf("-");
	printf("\n");
	printf("ѡ: \n");
	printf("[A] \t[B] \t[C]ܽ \t[D]޸ \t [E] \t[E]˳ \t\n");
	for(;i_margin<20;i_margin++) printf("-");
	printf("\n");
	scanf("%c",&c_s_choice);
    switch(c_s_choice)
	{
		
		case 'A':
		case 'a':system("cls");
		         s_test(); 
		         break;
		case 'B':
		case 'b':system("cls");
		         s_grade();
		         break;
		case 'C':
		case 'c':system("cls");
		         s_summary();
		         break;
		case 'D':
		case 'd':system("cls");
		         s_password();
		         break;
		case 'E':
		case 'e':system("cls");
		         s_login();
		         break;
		case 'F':
		case 'f':system("cls");
		         bye();
		         break;
		default:printf("\n");
                while(getchar()!='\n')continue;
                s_choice() ;
                break;
		         
	}
}



void t_register(void)
{
	
}
void t_login(void)
{
	
 } 
 
void s_password (void)
{
	char c;
	printf("ȷҪ޸(y or n)\n");
	while((scanf("%c",&c) )==1)
	{
		switch(c)
		{
			case'Y':
			case'y': printf("\n");
	                 scanf("%s",password[s_login]) ;
	                 break;
	        case'N':
	        case'n':s_choice();
	                break;
	        default:printf("\n");
	                scanf("%c",&c);
	                break;
		}
	

	}
	
}

int s_login(void)
{
	int i=1;
    printf("\n");
    printf("");
    scanf("%s",account_get);
    printf("룺");
    scanf("%s",password_get) ;
    
    while((strcmp(account[i], account_get))!=0)
    {
    	i++;
    	if(i>=NUM)
    	{
    		i=0;
    		printf("˺Ŵ\n");
    		printf("");
            scanf("%s",account_get);
		}
	}
    if((strcmp(account[i], account_get))==0)
    {
    	printf("¼ɹ\n"); 
    	printf("ӭ¼%s\n",name[i]) ;
    	return i;
    	s_choice();
	}
    else
    {
    	printf("\n");
    	s_login();
	}
}

