/*************************************************************
 * File   : 05_07rules.c                                     *
 * Date   : 2024-06-18                                       *
 * Purpose: precedence test                                  * 
 *************************************************************/
#include <stdio.h>

int main(void)
{
	int top, score;

	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
	printf("top = %d, score = %d\n", top, score);

	return 0;
}
