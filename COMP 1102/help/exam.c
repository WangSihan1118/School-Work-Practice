/*#include <stdio.h>
void main()
{
    int a, b;
    printf("请输入两个整数:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d\n",b);
    else
    printf("%d\n",a);
}*/

/*#include <stdio.h>
void main()
{
    int i  =  1;
    int sum  =  0;
    while (i < =  100)
    {
        if(i % 3  ==  0&&i % 4  ==  0)
        {
            sum + =  i;
            i++;
        }else{
            i++;
        }
    }
    printf("%d\n", sum); 
}*/

#include <stdio.h>
int main()
{
int red, black, blue;
for (red  =  0; red <= 3; red++)
    for (black = 0; black <= 4; black++)
        for (blue = 0; blue <= 5; blue++)
            if (red + black + blue == 4 && black > 0)
            printf ("红球拿%d个zhi 黑球拿%d个 蓝球拿%d个\n", red, black, blue);
}

/*#include <stdio.h>
int main()
{
    int n;
    printf("请输入月份数:\n");
    scanf("%d",&n);
    char* month[12]  =  {"January", "February", "March", "April", "May", "June", "July"
"August", "September", "October", "November", "December"};
    n  =  n - 1;
    char* m  =  month[n];
    printf("%s",m);
}*/

int main()
{
    question3();
    return 0;
}