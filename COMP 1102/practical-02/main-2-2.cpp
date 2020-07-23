#include <iostream>
#include <stdlib.h>
#include <cmath>

int binary_to_number(int binary_digits[], int number_of_digits){
    int sum = 0;
    int power = 0;
    for(number_of_digits - 1; number_of_digits >= 0;number_of_digits--){
        int p = pow(2,power);
        sum += (binary_digits[number_of_digits])*p;
        power++;
    }
}

int main(int argc,char **argv)
{
    int array[3] = {1,0,1};
    binary_to_number(array,3);
    return 0 ;
}