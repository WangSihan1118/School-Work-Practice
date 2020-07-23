#include <iostream>

//extern void cpyda(double* old_array ,double* new_array ,int length);

void cpyda(double* old_array ,double* new_array ,int length){
    for(int i = 0; i < length; i++){
        *(new_array + i) = *(old_array + i);
    }
}

int main(int arg, char** argv){
    double array1[3] = {1.5,2.5,3.5};
    double *array2 = new double[3];
    cpyda(array1,array2,3);
    return 0;
}