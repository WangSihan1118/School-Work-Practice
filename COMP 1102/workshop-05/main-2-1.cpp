#include <iostream>
extern
int * readNumbers();
void hexDigits(int * numbers,int length);

int main(int arg,char** argv){
    int *ptr = readNumbers();
    hexDigits(ptr,10);
    delete ptr;
    return 0;
}