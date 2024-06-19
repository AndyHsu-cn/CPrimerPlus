/*************************************************************
 * File   : 05_08sizeof.c                                    *
 * Date   : 2024-06-18                                       *
 * Purpose: uses sizeof operator                             * 
 *************************************************************/
#include <stdio.h>

int main(void)
{
	int n = 0;
	size_t int_size;

	int_size = sizeof(int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
		n, sizeof(n), int_size);

	return 0;
}
