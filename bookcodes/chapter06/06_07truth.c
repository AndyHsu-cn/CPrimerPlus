/*************************************************************
 * File   : 06_07truth.c                                     *
 * Date   : 2024-06-21                                       *
 * Purpose: what values are true                             *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int n = 3;

	while(n)
		printf("%2d is true\n", n--);
	printf("%2d is false\n", n);
	
	n = -3;
	while(n)
		printf("%2d is true\n", n++);
	printf("%2d is false\n", n);

	return 0;
}
