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

void hexDigits(int * numbers,int length){
    char hex;
    for(int i = 0; i < length; i++){
        if(*(numbers + i)>9){
            switch (*(numbers + i))
            {
            case 10:
                hex = 'A';
                break;

            case 11:
                hex = 'B';
                break;

            case 12:
                hex = 'C';
                break;

            case 13:
                hex = 'D';
                break;

            case 14:
                hex = 'E';
                break;

            case 15:
                hex = 'F';
                break;
            }
            std::cout<<i<<" "<<*(numbers + i)<<" "<<hex<<std::endl;
        }else{
            std::cout<<i<<" "<<*(numbers + i)<<" "<<*(numbers + i)<<std::endl;
        }
    }
}