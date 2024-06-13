/*************************************************************
 * File   : 03_07.c                                          *
 * Date   : 2024-06-13                                       *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	double CM_PER_INCH = 2.54;
	double height;

	printf("Enter your height (in inches): ");
	scanf("%lf", &height);
	printf("You are %f centimeters tall.\n", height * CM_PER_INCH);
		
	return 0;
}
