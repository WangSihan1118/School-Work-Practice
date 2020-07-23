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

bool equalsArray (int* A, int* B, int length){
    if(length < 1){
        return false;
    }else{
        for(int i = 0; i < length;i++){
            if(A[i] != B[i]){
                //std::cout<<"false"<<std::endl;
                return false;
            }
        }
        //std::cout<<"true"<<std::endl;
        return true;
    }
}