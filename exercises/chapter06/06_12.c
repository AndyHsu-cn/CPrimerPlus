/*************************************************************
 * File   : 06_12.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	long limit;
	double series1, series2;
	int sign = 1;
	long i;

	printf("Enter a number of terms to sum: ");
	while(scanf("%ld", &limit) == 1 && limit > 0)
	{
		series1 = 0.0, series2 = 0.0;
		for(i = 1; i <= limit; i++)
		{
			series1 += 1.0 / i;
			series2 += (1.0 / i) * sign;
			sign = -sign;
		}
		printf("%ldth partial sum for series1 is: %.5f.\n",
			limit, series1);
		printf("%ldth partial sum for series2 is: %.5f.\n",
			limit, series2);
		printf("Enter next number of terms to sum: ");
	}
	printf("Done!\n");

	return 0;
}
