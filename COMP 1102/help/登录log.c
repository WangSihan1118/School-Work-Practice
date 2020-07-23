#include <stdio.h>
void registerUser()
{   
    typedef struct
    {
        char name[10];
        char password[10];
    } User;
    
    char name[10];
    char password[10];
    User user;

    const char* filename = "user.txt";
    FILE *fw = fopen(filename,"a+");

    //Set name
    printf("Please enter your name:");
    scanf("%s",name);
    strcpy(user.name , name);

    //Set password
    printf("Please enter your password:");
    scanf("%s",password);
    strcpy(user.password, password);

    fwrite(&user, sizeof(user) , 1, fw);
    fclose(fw);
}

void loginUser(){
    //check exist


}

int main()
{
    typedef struct
    {
        char name[10];
        char password[10];
    } User;

    registerUser();
    return 0;
}
