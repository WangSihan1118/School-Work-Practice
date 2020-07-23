#include <iostream>
#include <stdlib.h>

extern int sumtwo(int*,int*,int);

int main(int argc,char **argv)
{
	int array1[5] = {1,3,5,7,9};
	int array2[5] = {2,4,6,8,10};
	sumtwo(array1,array2,5);
	return 0 ;
}
