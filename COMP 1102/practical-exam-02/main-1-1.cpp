#include <iostream>

extern int* readNumbers(int);
extern void printNumbers(int *, int);

int main(){
    int *num = readNumbers(3);
    printNumbers(num,3);
    delete num;
    return 0;
}