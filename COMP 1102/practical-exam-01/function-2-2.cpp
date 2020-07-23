
#include <cmath>
int binary_to_number(int binary_digits[], int number_of_digits){
    int p = 0;
    int sum = 0;
    for(int i = number_of_digits; i >= 0; i--){
        int power = pow(2,p);
        sum += binary_digits[i] * power;
        p++;
    }
    return sum;
}
