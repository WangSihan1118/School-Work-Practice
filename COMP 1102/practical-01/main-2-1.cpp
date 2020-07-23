#include <iostream>
#include <stdlib.h>

extern int minimum(int*,int);

int main(int argc,char **argv)
{
	int array[5] = {1,3,5,7,9};
	minimum(array,5);
	return 0 ;
}
