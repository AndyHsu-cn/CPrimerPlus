/*************************************************************
 * File   : 03_08badcount.c                                  *
 * Date   : 2024-06-13                                       *
 * Purpose: incorrect argument counts                        *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);		// to many arguments
	printf("%d %d %d\n", n);	// to few arguments
	printf("%d %d\n", f, g);	// wrong kind of values

	return 0;	
}
