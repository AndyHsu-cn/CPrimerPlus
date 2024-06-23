/*************************************************************
 * File   : 06_06.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	long upper = 0, lower = 1;
	int item_num;

	printf("This program prints a table of integers with their "
	       "squares and cubes.\n");
	do
	{
		printf("Enter lower and upper integers limits"
		       " (in that order ):");
		if(scanf("%ld%ld", &lower, &upper) != 2)
		{
			while(getchar() != '\n')
				;
		}
	}while(lower > upper);
	printf("\n");
	printf("Integer       |Square        |Cube          \n");
	printf("______________|______________|______________\n");
	for(long i = lower; i <= upper; i++)
		printf("%-14ld|%-14ld|%-14ld\n", i, i * i, i * i * i);
	printf("\n");
	
	return 0;
}
