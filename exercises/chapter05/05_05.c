/*************************************************************
 * File   : 05_05.c                                          *
 * Date   : 2024-06-19                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int count, sum, max_count;	// declaration statement

	count = 0;			// assignment statement
	sum = 0;
	printf("How many integers would you like to sum? ");
	scanf("%d", &max_count);
	while(count++ < max_count)	// while statement
		sum = sum + count;
	printf("sum = %d\n", sum);	// function statement

	return 0;			// return statement
}
