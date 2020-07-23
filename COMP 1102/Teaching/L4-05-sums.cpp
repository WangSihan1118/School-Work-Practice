#include <stdio.h>

// sum n elements from array a
int sum1dAA(int n,int a[])
{
	int sum = 0,i ;

	for ( i = 0 ; i < n ; i++ ) sum += a[i] ;
	return sum ;
}

// sum n elements pointed to by a
int sum1dPA(int n,int *a)
{
	int sum = 0,i ;

	for ( i = 0 ; i < n ; i++ ) sum += a[i] ;
	return sum ;
}

// sum n elements pointed to by a
int sum1dPP(int n,int *a)
{
	int sum = 0 ;
	while ( n-- > 0 ) sum += *a++ ;
	return sum ;
}

// sum all n x 2 elements from array a
// the [2] is needed so we know the size of each element of a
int sum2dAA(int n,int a[][2])
{
	int sum = 0 ;
	int i,j ;

	for ( i = 0 ; i < n ; i++ )
	{
		for ( j = 0 ; j < 2 ; j++ )
		{
			sum += a[i][j] ;
		}
	}
	return sum ;
}

// sum all n x 2 elements from array a
// param a is an array of size 2, each element is an int *
// a[0] is a pointer to an int, a[1] is a pointer to an int
int sum2dPA(int n,int *a[2])
{
	int sum = 0 ;
	int i,j ;

	for ( i = 0 ; i < n ; i++ )
	{
		// assume j is 0 or 1 ?
		for ( j = 0 ; j < 2 ; j++ )
		{
			sum += a[i][j] ;
		}
	}
	return sum ;
}

// sum all n x 2 elements from array a
// param a is a pointer to an array 2 ints,
// a+1 points to the next array of 2 ints
int sum2dQA(int n,int (*a)[2])
{
	int sum = 0 ;
	int i,j ;

	for ( i = 0 ; i < n ; i++ )
	{
		for ( j = 0 ; j < 2 ; j++ )
		{
			sum += a[i][j] ;
		}
	}
	return sum ;
}

// sum all n x n2 elements from array a
// param a is an array of pointers to int
// we need to pass in the size of the second dimension
int sum2dPP(int n,int **a,int n2)
{
	int sum = 0 ;
	int i,j ;

	for ( i = 0 ; i < n ; i++ )
	{
		for ( j = 0 ; j < n2 ; j++ )
		{
			sum += a[i][j] ;
		}
	}
	return sum ;
}

int main()
{
	int a1[] = {1,2,3} ;
	int a2[] = {1,2,3} ;
	int a3[] = {1,2,3} ;
	int aa1[][2] = {{1,2},{3,4}} ;
	int aa20[] = {1,2} ;
	int aa21[] = {3,4} ;
	int *aa2[] = {aa20,aa21} ;
	int aa3[][2] = {{1,2},{3,4}} ;

	printf("sum of a1 is %d\n",sum1dAA(4,a1)) ;
	printf("sum of a2 is %d\n",sum1dPA(10,a2)) ;
	printf("sum of a3 is %d\n",sum1dPP(1,a3)) ;
	printf("sum of aa1 is %d\n",sum2dAA(2,aa1)) ;
	printf("sum of aa2 is %d\n",sum2dPA(2,aa2)) ;
	printf("sum of aa3 is %d\n",sum2dQA(2,aa3)) ;
	printf("sum of aa4 is %d\n",sum2dPP(2,aa2,2)) ;
}
