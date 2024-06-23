/*************************************************************
 * File   : 06_13postage.c                                   *
 * Date   : 2024-06-22                                       *
 * Purpose: first-class postage rates                        *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int FIRST_OZ = 46;		// 2013rate
	const int NEXT_OZ = 20;			// 2013rate
	int ounces, cost;

	printf(" ounces  cost\n");
	for(ounces = 1, cost = FIRST_OZ; ounces <= 16;
			ounces++, cost += NEXT_OZ)
		printf("%5d   $%4.2f\n", ounces, cost / 100.0);

	return 0;
}
