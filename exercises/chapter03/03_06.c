/*************************************************************
 * File   : 03_06.c                                          *
 * Date   : 2024-06-13                                       *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	double H2O_MASS = 3.0e-23;
	double GRAMS_H2O_PER_QUART = 950;
	double quarts;

	printf("Enter an amount of water (in quarts): ");
	scanf("%lf", &quarts);
	printf("There are %f molecules in %f quarts of water.\n",
		quarts * GRAMS_H2O_PER_QUART / H2O_MASS, quarts);

	return 0;
}
