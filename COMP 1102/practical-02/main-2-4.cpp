#include <iostream>
#include <stdlib.h>

extern 
int sum_min_and_max(int*, int);   
int max_integer(int*, int);  
int min_integer(int*, int);
   
int main(int argc,char **argv)
{
    int array [5] = {1,2,3,2,1};
    sum_min_and_max(array,5);
    return 0 ;
}