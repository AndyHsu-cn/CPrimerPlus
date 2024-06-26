/*************************************************************
 * File   : 05_01shoes1.c                                    *
 * Date   : 2024-06-16                                       *
 * Purpose: converts a shoe size to inches                   *
 *************************************************************/
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("Shoe size (men's)    foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);

	return 0;
}
