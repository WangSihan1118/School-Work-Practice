#include <iostream>

int count(int array[],int n){
	int count = 0;
	for(int i = 0; i < n; i++){
		int num = array[i];
		if (num % 2 == 0){
			count++;
		}
	}
	return count;
}
