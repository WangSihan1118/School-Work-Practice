#include <iostream>
// function to ...
int count_even(int number)
{
	if(number < 1){
		return 0;
	}else{
		int count = 0;
		for(int i = 1; i <= number; i++){
			if(i % 2 == 0){
				count++;
			}
		}
		return count;
	}
}
