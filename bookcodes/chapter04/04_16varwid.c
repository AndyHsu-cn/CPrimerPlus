/*************************************************************
 * File   : 04_16varwid.c                                    *
 * Date   : 2024-06-16                                       *
 * Purpose: uses variable-width output field                 *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");
	scanf("%u", &width);
	printf("The number is: %*d\n", width, number);
	printf("Now enter a width and a precision:\n");
	scanf("%u %u", &width, &precision);
	printf("weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");

	return 0;
}
