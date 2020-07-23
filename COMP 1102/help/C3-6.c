/*编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净
收入。做如下假设：

a. 基本工资可以在工资等级菜单中选择
b. 加班（超过 40 小时） = 1.5 倍的时间
c. 税率：前 300 美元为 15%，
        续 150 美元为 20%，
        494 余下的为 25%

使用 switch 完成工资等级选择。 运行程序后，显示的菜单应该类似这样：
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr 2) $9.33/hr
3) $10.00/hr 4) $11.20/hr
5) quit
*****************************************************************
如果选择 1～4 其中的一个数字，程序应该询问用户工作的小时数。 程序要通过循环运行，
除非用户输入 5。如果输入 1～5 以外的数字，程序应提醒用户输入正确的选项，然后再重复
显示菜单提示用户输入。使用#define 创建符号常量表示各工资等级和税率。*/

#include <stdio.h>
//工资等级
#define S1 8.75
#define S2 9.33
#define S3 10.00
#define S4 11.20
//税率
#define R1 0.15
#define R2 0.20
#define R3 0.25

void getSalary(){
//初始化变量
int salary_level;
float hour=0, salary=0, tax=0,net_income=0;

//Start
printf("*****************************************************************\n"
        "Enter the number corresponding to the desired pay rate or action:\n"
        "1) $8.75/hr 2) $9.33/hr\n"
        "3) $10.00/hr 4) $11.20/hr\n"
        "5) quit\n"
        "*****************************************************************\n");
printf("please choose your class");

//读取工资等级
scanf("%d",&salary_level);

//如果工资等级不属于1到4,重新读取.
while(salary_level >= 5 || salary_level < 1){
    if(salary_level == 5){
        //如果等于5,结束
        return;
    }else{
        //重新读取工资等级
        printf("please rechoose your class, make sure it is a int from 1 to 5");
        scanf("%d",&salary_level);
    }
}

    /*
    符合条件,下一步
    读取时间
    */
    printf("plese enter your work time");
    scanf("%f",&hour); 

    //判断加班
    //b. 加班（超过 40 小时） = 1.5 倍的时间
    if(hour > 40){
        hour = 40 + (hour - 40)*1.5;
    }else{
        hour = hour;
    }

    //利用switch计算工资
    switch(salary_level){
        case 1 : 
        salary = hour * S1;
        break;

        case 2 : 
        salary = hour * S2;
        break;

        case 3 : 
        salary = hour * S3;
        break;

        case 4 : 
        salary = hour * S4;
        break;
    }

    //扣税
    /*税率：前 300 美元为 15%，
        续 150 美元为 20%，
        494 余下的为 25%
    */

   //一,二阶段税率分界线
    int first_tax_level = 300;
    int second_tax_level = 450;

    if(salary <= first_tax_level){
        //净收入 = 工资(1-税率)
        net_income = salary*(1-R1);
    }else if(salary > first_tax_level && salary <= second_tax_level){
        //净收入 = 一阶段工资(1-一阶税率) + 二阶段工资工资(1-二阶税率)
        //净收入 = 一阶段最大值*(1 -一阶税率) + 二阶段工资工资(1-二阶税率)
        net_income = first_tax_level*(1-R1) + (salary - first_tax_level)*(1-R2);
    }else{
        net_income=(first_tax_level*(1-R1)) + ((second_tax_level-first_tax_level)*(1-R2)) + (salary-second_tax_level)*(1-R3);
    }

    tax = salary - net_income;

    printf("So,your salary is $%.2f,your tax is $%.2f and your net income is $%.2f",salary,tax,net_income);
}

int main()
{
  getSalary();
  return 0; 
 } 
