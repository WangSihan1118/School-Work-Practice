#include <iostream>

extern
int * readNumbers();
void printNumbers(int * numbers,int length);

int main(int arg,char** argv){
    int *ptr = readNumbers();
    printNumbers(ptr,10);
    delete ptr;
    return 0;
}