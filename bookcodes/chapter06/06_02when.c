/*************************************************************
 * File   : 06_02when.c                                      *
 * Date   : 2024-06-21                                       *
 * Purpose: when a loop quits                                *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int n = 5;

	while(n < 7)
	{
		printf("n = %d\n", n);
		n++;
		printf("Now n = %d\n", n);
	}
	printf("The loop has finished.\n");
	
	return 0;
}
