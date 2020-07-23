#include <iostream>
#include <stdlib.h>

extern void ascending(int array[], int n);

int main(int argc,char **argv)
{
	int array[5] ={1,3,5,7,9}; 
	ascending(array,5);
	return 0 ;
}
