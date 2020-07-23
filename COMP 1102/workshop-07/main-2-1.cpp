#include <iostream>

int* readNumbers(){
    int* array = new int[10];
    for(int i = 0; i < 10;i++){
        std::cin>>*(array + i);
    }
    return array;
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

int main(){
    int *num = readNumbers();
    hexDigits(num,10);
    delete num;
    return 0;
}
