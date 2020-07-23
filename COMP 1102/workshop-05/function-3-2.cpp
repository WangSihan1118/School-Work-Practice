#include <iostream>

int* readNumbers(){
    int n = 0;
    int *num = new int[10];
    int tem;
    while (n < 10){
        std::cin>>tem;
        num[n] = tem;
        n++;
    }
    return num;
}

bool equalsArray(int *numbers1,int *numbers2,int length){
    for(int i = 0;i < length; i++){
        if(*(numbers1 + i) != *(numbers2 + i)){
            std::cout<<"false"<<std::endl;
            return false;
        }
    }
    std::cout<<"true"<<std::endl;
    return true;
}

int * reverseArray(int * numbers1,int length){
    int *rev = new int[length];
    for(int i = 0; i < length; i++){
            *(rev + length - 1 - i) = *(numbers1 + i);
    }
    return rev;
}
