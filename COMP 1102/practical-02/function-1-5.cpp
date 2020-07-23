#include <iostream>
#include <stdlib.h>

void print_summed_matrices(int array1[3][3],int array2[3][3]){
    int sum_matrix[3][3];
    for(int i = 0;i < 3;i++){
        for (int j = 0; j < 3;j++){
            sum_matrix[i][j] = array1[i][j] + array2[i][j];
        }
    }
    std::cout<<sum_matrix<<std::endl;
}