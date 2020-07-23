#include <iostream>
// function to ...
int sumtwo(int array[], int secondarray[], int n)
{
	if(n < 0){
		return 0;
	}else{
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += array[i] + secondarray[i];
		}
		return sum;
	}
}
