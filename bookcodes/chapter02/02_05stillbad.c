/*************************************************************
 * File   : 02_05stillbad.c                                  *
 * Date   : 2024-06-06                                       *
 * Purpose: a program with its synatax errors fixed          *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	// int n, int n2, int n3;	
	int n, n2, n3;

	/* this program has a semantic  error */
	n = 5;
	n2 = n * n;
	// n3 = n2 * n2;
	n3 = n * n * n;
	// printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
}
