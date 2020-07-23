#include <iostream>
extern
int* readNumbers();
bool equalsArray(int *numbers1,int *numbers2,int length);
int * reverseArray(int * numbers1,int length);

int main(int arg, char** argv){
    int *arr1 = readNumbers();
    int *reverseArr1 = reverseArray(arr1,10);
    equalsArray(arr1,reverseArr1,10);
    delete arr1,reverseArr1;
    return 0;
}