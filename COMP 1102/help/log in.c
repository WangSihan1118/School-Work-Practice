#include <stdio.h>
#include <stdlib.h>
#include <string.h>    
#define USER_MAX 20


	
int main()
{
	typedef struct
    {
        char name[10];
        char password[10];
    } User;
//����һ������û��Ľṹ��
 
User list[USER_MAX];
//����һ��ȫ�����飬������User,��С��USER_MAX
 
 const char* filename = "user.txt";
 
	system("cls");
    char name[10];
    char password[10];
    User user;
    User lg;
    
    int i;

    printf("enter your name:");
    scanf("%s",name);
    strcpy(user.name , name);
 
    //�ж�ע����û��Ƿ��Ѵ���
    for(i=0; i<USER_MAX; i++)
    {
        if(0==strcmp(list[i].name ,name))
        {
            printf("���˺��Ѵ���");
            return 0;
        }
    }
 
    printf("enter your password:");
    scanf("%s",password);
    strcpy(user.password , password);
    FILE *fw = fopen(filename,"a+");
    fprintf(fw,u.name);
    fprintf(fw,"\t");
    fprintf(fw,u.password);
    fprintf(fw,"\n");
    


    printf("����������û���:");
    scanf("%s",name);
    strcpy(lg.name , name);
    printf("�������������:");
    scanf("%s",password);
    strcpy(lg.password,password);
    if(1 == exist(u))
        {
            printf("��¼�ɹ���\n");
            printf("��ӭ��������Ա��\n") ;
            return 0;
        }
    else
        {
            printf("��¼ʧ�ܣ�");
            return 0;
        }

}	
	
