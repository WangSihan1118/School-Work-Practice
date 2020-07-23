#include <iostream>

int* reverseArray(int array[], int length)
{   int *reverse_array = new int[length];
    for(int i = 0, j = (length - 1) - i; i < length; ++i){
        reverse_array[i] = array[j];
    }
    return reverse_array;
}

int main()
{
    int array[3] = {1,2,3};
    int *r = reverseArray(array,3);
    std::cout<<*r<<std::endl;
    return 0;
}