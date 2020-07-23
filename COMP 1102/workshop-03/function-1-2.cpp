#include <iostream>
#include <string>
void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){
    std::cout<<"Report Card"<<' ';
    for(int i =0;i < 4;i++){
        std::cout<<courses[i]<<' ';
    }
    std::cout<<std::endl;

    for(int j = 0;j < nstudents;j++){
        std::cout<<students[j]<<' ';
        for(int k = 0 ;k < 4;k++){
            std::cout<<report_card[j][k]<<' ';
        }
        std::cout<<std::endl;
    }


}