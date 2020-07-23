#include <iostream>

extern int* readNumbers(int);
void printNumbers(int*, int);
bool equalsArray (int*,int*,int);

int main(){
    int* array1 = readNumbers(3);
    int* array2 = readNumbers(3);
    bool equal1 = equalsArray(array1,array2,3);
    delete array1;
    delete array2;
    return 0;
}