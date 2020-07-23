#include <iostream>

int size_of_array_arr(){
    int *arr = new int[3];
    int size = sizeof(arr);
    std::cout<<size<<std::endl;
    return size;
}