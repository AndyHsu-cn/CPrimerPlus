/*************************************************************
 * File   : 06_13.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int MAX_SIZE = 8;
	long powers_of_2[MAX_SIZE];
	long power = 1L;
	int i;

	for(i = 0; i < MAX_SIZE; i++)
	{
		power *= 2L;
		powers_of_2[i] = power;
	}
	printf("Powers of 2:\n");
	i = 0;
	do
	{	
		printf("%4ld ", powers_of_2[i]);
		i++;
	}while(i < MAX_SIZE);
	printf("\n");

	return 0;
}
