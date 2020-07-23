#include <iostream>
// function to ...
bool fanarray(int array[], int n)
{
	if(n < 1){
		return false;
	}
	
	if(n%2 == 0){
		//even number situation
		for(int i = 0;i < n;i++){
			if(array[i] != array[n-1-i]){
				return false;
			}//palindrome identify
		}
		
		int mid = n/2;	
		for(int i = 0;i < mid-1;i++){
			if(array[i] > array[i+1]){
				return false;
			}
		}
		return true;
	}else{
		//odd number situation
		for(int i = 0;i < n;i++){
			if(array[i] != array[n-1-i]){
				return false;
			}//palindrome identify
		}
		
		int mid = n/2;	
		for(int i = 0;i < mid;i++){
			if(array[i] > array[i+1]){
				return false;	
			}
		}
		return true;
		}
}
