/*7(C3-10.C).

Enter the operation of your choice:
a. add s. subtract
m. multiply d. divide
q. quit
a 
Enter first number: 22 .4
Enter second number: one
one is not an number.
Please enter a number, such as 2.5, -1.78E8, or 3: 1
22.4 + 1 = 23.4

Enter the operation of your choice:
a. add s. subtract
m. multiply d. divide
q. quit
d 
Enter first number: 18.4
Enter second number: 0
Enter a number other than 0: 0.2
18.4 / 0.2 = 92

Enter the operation of your choice:
a. add s. subtract
m. multiply d. divide
q. quit
q 
Bye*/ 

#include <stdio.h>
#include <stdlib.h>

char menu()
{
	char local_ch ;

    do{
		printf("Enter the operation of your choice:\n"
			"a. add      s. subtract\n"
			"m. multiply d. divide\n"
			"q. quit\n");

		scanf("%c",&local_ch);
     
		if ( local_ch == 'a' || local_ch =='s' || local_ch == 'm' || local_ch == 'd')
		{
			return local_ch;
		}

	}while(local_ch != 'q');
	exit(0);
}

float readNumber1()
{
	float num1;
	char  mis;
	printf("Enter first number:");

    while(scanf("%f",&num1) != 1)
    {
		while(mis=getchar()!='\n')
		putchar(mis);
		printf(" is not an number.\nPlease enter a number, such as 2.5, -1.78E8, or 3:");
		scanf("%f",&num1);
	}
   return num1;
}

float readNumber2()
{
	float num2;
	char  mis;
	printf("Enter second number:");

    while(scanf("%f",&num2) != 1)
    {
		while(mis=getchar()!='\n')
		putchar(mis);
		printf(" is not an number.\nPlease enter a number, such as 2.5, -1.78E8, or 3:");
		scanf("%f",&num2);
	}
   return num2;
}

void add(float num1,float num2)
{
	float sum = num1 + num2;
	printf("%.1f+%.1f=%.1f",num1,num2,sum);
}

void subtract(float num1,float num2)
{
	float difference = num1 - num2;
	printf("%.1f-%.1f=%.1f",num1,num2,difference);
}

void multiply(float num1,float num2)
{
	float product = num1 * num2;
	printf("%.1f*%.1f=%.1f",num1,num2,product);
}
void divide(float num1,float num2)
{
	if(num2 == 0)
	{
		printf("Enter a number other than 0:");
		scanf("%f",&num2);
	}

	float quotient = num1/num2;
	printf("%.1f/%.1f=%.1f",num1,num2,quotient);
}

int main()
{	
	char global_ch = menu();
	float num1 = readNumber1();
	float num2 = readNumber2();

    switch(global_ch)
    {
    case 'a' : 
		add(num1,num2);
		break;

   	case 's' : 
	   subtract(num1,num2);
		break;

   	case 'm' : 
		multiply(num1,num2);
		break;

   	case 'd' : 
	   	divide(num1,num2); 
		break;
	}
	
	return 0;
}