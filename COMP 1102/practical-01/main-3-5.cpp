#include <iostream>
#include <stdlib.h>

extern double sumeven(double array[], int n);

int main(int argc,char **argv)
{
	
	double array[5] = {1.1,2.2,3.3,4.4,5.5};
	sumeven(array,5);
	return 0 ;
}

