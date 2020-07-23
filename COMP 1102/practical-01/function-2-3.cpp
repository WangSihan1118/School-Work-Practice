#include <iostream>

void twofivenine(int array[], int n){
	if(n < 1){
		std::cout<<"2:0;5:0;9:0;"<<std::endl;
	}else{
		int num_twos = 0;
		int num_fives = 0;
		int num_nines = 0;
		for(int i = 0;i < n;i++){
			int num = array[i];
			switch (num)
			{
			case 2:
				num_twos++;
				break;
			case 5:
				num_fives++;
				break;
			case 9:
				num_nines++;
				break;
			}
		}
		std::cout<<"2:"<<num_twos<<";"<<"5:"<<num_fives<<";"<<"9:"<<num_nines<<";"<<std::endl;
	}
}
