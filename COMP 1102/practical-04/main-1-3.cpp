#include <iostream>

extern void cpyia(int old_array [],int new_array [],int length);

int main(int arg, char** argv){
    int array1[3] = {1,2,3};
    int *array2 = new int[3];
    cpyia(array1,array2,3);
    for(int i = 0; i < 3; i++){
        std::cout<<array2[i]<<std::endl;
    }
    return 0;
}