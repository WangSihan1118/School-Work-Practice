#include <iostream>
#include <stdlib.h>

extern void passorfail(char grade);

int main(int argc,char **argv)
{
	passorfail('A');
	return 0 ;
}

