/*************************************************************
 * File   : 05_02shoes2.c                                    *
 * Date   : 2024-06-16                                       *
 * Purpose: calculates foot lengths for several sizes        *
 *************************************************************/
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("Shoe size (men's)    foot length\n");
	shoe = 3.0;
	while(shoe < 18.5)
	{	
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1;
	}
	printf("If the shoe fits, wear it.\n");

	return 0;
}
