/*************************************************************
 * File   : 06_17.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const double WINNINGS = 1000000.0;
	const float INTEREST = 0.08;
	const double SPENDING = 100000.0;
	int years = 0;
	double balanced = WINNINGS;

	while(balanced > 0)
	{
		balanced *= (1.0f + INTEREST);
		balanced -= SPENDING;
		years++;
	}
	printf("After %d years, Chuckie is in the red with a balance of "
	       "$%.2f USD.\n", years, balanced);

	return 0;
}
