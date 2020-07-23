#include <iostream>

int* readNumbers(int n){
    int* array = new int[n];
    for(int i = 0; i < n;i++){
        std::cin>>array[i];
    }
    return array;
}

void printNumbers(int *numbers, int length){
    for(int i = 0;i < length; i++){
        std::cout<<i<<" "<<numbers[i]<<std::endl;
    }
}
