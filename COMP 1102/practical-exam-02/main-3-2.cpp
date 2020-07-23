#include <iostream>

extern int* readNumbers(int n);
void printNumbers(int *numbers, int length);
int* negateArray (int *numbers,int length);

int main(){
    int* array1 = readNumbers(5);
    int* negatearray = negateArray(array1,5);
    printNumbers(negatearray,5);
    delete array1;
    delete negatearray;
    return 0;
}