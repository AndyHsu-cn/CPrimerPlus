/*************************************************************
 * File   : 06_11sweetie2.c                                  *
 * Date   : 2024-06-22                                       *
 * Purpose: a counting loop using for                        *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int NUMBER = 22;
	int count;

	for(count = 1; count <= NUMBER; count++)
		printf("Be my Valentine!\n");

	return 0;
}
