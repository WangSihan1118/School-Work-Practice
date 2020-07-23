#include <iostream>
extern
int* readNumbers();
bool equalsArray(int *numbers1,int *numbers2,int length);

int main(int arg,char** argv){
    int *arr1 = readNumbers();
    int *arr2 = readNumbers();
    equalsArray(arr1,arr2,10);
    delete arr1,arr2;
    return 0;
}