#include <iostream>
#include <string>

int* readNumbers(int n){
    int* array = new int[n];
    for(int i = 0; i < n;i++){
        std::cin>>array[i];
    }
    return array;
}

void grades(int* gradepoints,int length){
    std::string level;
    for(int i = 0;i < length; i++){
        switch (gradepoints[i])
        {
        case 1:
            level = "Fail";
            break;
        case 2:
            level = "Pass";
            break;
        case 3:
            level = "Credit";
            break;
        case 4:
            level = "Distinction";
            break;
        case 5:
            level = "Higher Distinction";
            break;
        }
        std::cout<<i<<" "<<gradepoints[i]<<" "<<level<<std::endl;
    }
}
