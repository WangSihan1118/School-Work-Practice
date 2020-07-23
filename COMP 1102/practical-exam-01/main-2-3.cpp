
#include <iostream>
#include <stdlib.h>

extern 
bool is_a_palindrome(int[], int);
int sum_elements(int[], int);
int sum_if_a_palindrome(int[], int);

int main(int argc,char **argv)
{
    int array [5] = {1,2,3,2,1};
    sum_if_a_palindrome(array,5);
    return 0;
}