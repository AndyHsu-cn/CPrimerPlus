/*************************************************************
 * File   : 06_10.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
long sum_of_squares(long lower, long upper);
int main(void)
{
	long lower, upper;

	printf("Enter lower and upper integer limits: ");
	while(scanf("%ld %ld", &lower, &upper) == 2 && lower < upper)
	{
		printf("The sum of the squares from %ld to %ld is "
		   "%ld.\n", lower, upper, sum_of_squares(lower, upper));
		printf("Enter next set of limits: ");	
	}
	printf("Done!\n");
	
	return 0;
}

long sum_of_squares(long lower, long upper)
{
	long sum = 0L;

	for(long i = lower; i <= upper; i++)
		sum += i * i;
	
	return sum;
}
