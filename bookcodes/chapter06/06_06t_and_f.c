/*************************************************************
 * File   : 06_06t_and_f.c                                   *
 * Date   : 2024-06-21                                       *
 * Purpose: true and false value in C                        *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int true_val, false_val;

	true_val = (10 > 2);		// value of a true relationship
	false_val = (10 == 2);		// value of a false relationship
	printf("true = %d; false = %d\n", true_val, false_val);

	return 0;
}
