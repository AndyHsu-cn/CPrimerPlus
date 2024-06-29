/*************************************************************
 * File   : 07_09.c                                          *
 * Date   : 2024-06-29                                       *
 *************************************************************/
#include <stdio.h>
#include <stdbool.h>
bool is_prime(int i);
int main(void)
{
	int limit;
	int i;	

	printf("Primes: this program prints all primes less than or equal "
	       "to any positive integer.\n");
	printf("Enter a positive: ");
	while(scanf("%d", &limit) != 1 || limit < 1)
	{
		while(getchar() != '\n')
			continue;
	}
	for(i = 2; i <= limit; i++)
	{
		if(is_prime(i))
			printf("%d is prime.\n", i);
	}

	return 0;
}

bool is_prime(int n)
{
	bool is_prime = true;
	int j;

	for(j = 2; j * j <= n; j++)
	{
		if(n % j == 0)
		{
			is_prime = false;
			break; 
		}

	}
	return is_prime;
}
