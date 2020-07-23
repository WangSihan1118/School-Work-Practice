#include <iostream>
#include <stdlib.h>

int max_integer(int integers[], int length){
    int max = 0;
    for(int i = 0; i < length-1;i++){
        if(integers[i] < integers[i+1]){
            max = integers[i+1];
        }
    }
    return max;
}

int min_integer(int integers[], int length){
    int min = 0;
    for(int i = 0; i < length-1;i++){
        if(integers[i] < integers[i+1]){
            min = integers[i+1];
        }
    }
    return min;
}
int sum_min_and_max(int integers[], int length){
    if(length <= 0){
        return -1;
    }else{
        int max = max_integer(integers,length);
        int min = min_integer(integers,length);
        int sum = max + min;
        return sum;
    }
}