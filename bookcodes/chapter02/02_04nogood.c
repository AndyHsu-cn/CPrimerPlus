/*************************************************************
 * File   : 02_04nogood.c                                    *
 * Date   : 2024-06-06                                       *
 * Purpose: a program with errors                            *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	// int n, int n2, int n3;	
	int n, n2, n3;

	/* this program has several errors */
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	// printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
}
