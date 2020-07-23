#include <iostream>
#include <stdlib.h>
extern void print_scaled_matrix(int[3][3],int);
int main(int argc,char **argv)
{
    int array[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    print_scaled_matrix(array,3);
    return 0 ;
}