#include <iostream>
void print_sevens(int * nums,int length){
    for(int i = 0; i < length; i++){
        int num = *(nums + i);
        if(num % 7 == 0){
            std::cout<<num<<std::endl;
        }
    }
}
