/*************************************************************
 * File   : 06_16.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const double DEIRDE_PRINCIPLE = 100.0;
	const double DAPHNE_PRINCIPLE = 100.0;
	const double DEIRDE_INTEREST = 0.05;
	const double DAPHNE_INTEREST = 0.10;
	double deirdre_balanced = DEIRDE_PRINCIPLE;
	double daphne_balanced = DAPHNE_PRINCIPLE;
	int years = 0;

	while(deirdre_balanced <= daphne_balanced)
	{
		deirdre_balanced *= (1.0 + DEIRDE_INTEREST);
		daphne_balanced += DAPHNE_INTEREST * DAPHNE_PRINCIPLE;
		years++;
	}
	printf("After %d years, Daphne's investment is worth $%.2f and "
	       "Deirdre's investment is worth $%.2f.\n", years, 
		daphne_balanced, deirdre_balanced);

	return 0;
}
