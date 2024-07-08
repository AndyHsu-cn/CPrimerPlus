/*************************************************************
 * File   : 09_11.c                                          *
 * Date   : 2024-07-08                                       *
 *************************************************************/
#include <stdio.h>
long fibonacci(long n);
int main(void)
{
	long n;

	printf("Test fibonacci() function.\n");
	printf("Enter an integer: ");
	while(scanf("%ld", &n) == 1)
	{
		if(n < 1)
			printf("Error, n must be a positive integer.\n");
		else
			printf("fibonacci #%ld = %ld.\n", n, fibonacci(n));
		printf("Enter an integer: ");
	}
	printf("Bye.\n");
	
	return 0;
}

long fibonacci(long n)
{
	long fib_1 = 1, fib_2 = 1;
	long fib_ret = 1;
	long index;
	
	for(index = 3; index <= n; ++index)
	{
		fib_ret = fib_1 + fib_2;
		fib_1 = fib_2;
		fib_2 = fib_ret;
	}
	
	return fib_ret;
}
