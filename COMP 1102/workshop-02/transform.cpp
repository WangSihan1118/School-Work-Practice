#include <iostream>
int transform(int number){

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


int main(int decimal)
{
    transform(decimal);
    return 0 ;
}