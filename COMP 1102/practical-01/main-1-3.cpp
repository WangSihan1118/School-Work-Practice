#include <iostream>
#include <stdlib.h>

extern int count(int*,int,int);

int main(int argc,char **argv)
{
	int array[6] = {1,1,2,3,4,5};
	count(array,6,1);
	return 0 ;
}

