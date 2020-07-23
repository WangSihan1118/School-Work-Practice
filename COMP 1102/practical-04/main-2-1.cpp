#include <iostream>

extern void print_sevens(int * nums,int length);

int main(int arg, char** argv){
    int array1[5] = {1,7,2,14,21};
    print_sevens(array1,5);
    return 0;
}