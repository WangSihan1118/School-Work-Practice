#include <stdlib.h>
#include <iostream> 
#include <string>

void print_as_binary(std::string decimal_number){

    int number = std::stoi(decimal_number,nullptr,10);
    
    int binary[16];
    int index = 0;
    while(number >= 2){
        binary[index] = number % 2;
        number /= 2;
    }

    for(int j = index - 1;j >= 0 ;j--){
        std::cout<<binary[j]<<std::endl;
    }

}