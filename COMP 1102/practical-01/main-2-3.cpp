#include <iostream>
#include <stdlib.h>

extern void twofivenine(int*,int);

int main(int argc,char **argv)
{
	int array[5] ={2,3,5,7,9};  
	twofivenine(array,5);
	return 0 ;
}
