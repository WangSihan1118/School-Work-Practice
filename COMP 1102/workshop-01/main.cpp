#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
//extern int count(int[], int);

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

int main() {
    int array0[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array0, 5) << std::endl;
    int array1[5] = {2,4,6,8,10};
    std::cout << "The number is: " << count(array1, 5) << std::endl;
    int array2[5] = {1,3,5,7,9};
    std::cout << "The number is: " << count(array2, 5) << std::endl;
    return 0;
}
