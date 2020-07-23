#include <iostream>

int * readNumbers(){
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

void printNumbers(int * numbers,int length){
    for(int i = 0; i < length; i++){
        std::cout<<i<<" "<<*(numbers + i)<<std::endl;
    }
}
