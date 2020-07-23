#include <iostream>
// function to ...
double sumeven(double array[], int n)
{
	if(n < 1){
		return 0;
	}else{
		double sum = 0;
	
		for(int i = 0; i < n; i += 2){
			sum += array[i];
		}
		return sum;
	}
	
}
