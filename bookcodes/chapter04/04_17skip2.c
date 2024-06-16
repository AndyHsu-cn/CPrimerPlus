/*************************************************************
 * File   : 04_17skip2.c                                     *
 * Date   : 2024-06-16                                       *
 * Purpose: skips over first two integers of input           *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	return 0;
}
