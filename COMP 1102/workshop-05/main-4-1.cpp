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
