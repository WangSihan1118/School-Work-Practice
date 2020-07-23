#include <iostream>
#include <stdlib.h>

int diagonal(int array[4][4]){
    int sum = 0;
    for(int i = 0;i < 4;i++){
        for (int j = 0; j < 4;j++){
            sum += array[i][j];
        }
    }
    return sum;
}

int main(int argc,char **argv)
{
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    diagonal(array);
    return 0 ;
}