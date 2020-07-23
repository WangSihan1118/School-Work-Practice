#include <iostream>
#include <string>

extern int* readNumbers(int);
void grades(int*,int);

int main(){
    int* garray = readNumbers(5);
    grades(garray,5);
    delete garray;
    return 0;
}
