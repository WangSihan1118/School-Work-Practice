#include <iostream>

double average(int array[], int n)
{	if(n < 1){
		return 0;
	}else{
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += array[i];
		}
		double average = (double)sum / (double)n;
		return average;
	}
}
