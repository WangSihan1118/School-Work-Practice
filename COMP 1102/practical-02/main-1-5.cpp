#include <iostream>
#include <stdlib.h>
extern int print_summed_matrices(int[3][3],int[3][3]);
int main(int argc,char **argv)
{
    int array1[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int array2[3][3] = {{1,2,3},{1,2,3},{1,2,3}};

    print_summed_matrices(array1,array2);
    return 0 ;
}