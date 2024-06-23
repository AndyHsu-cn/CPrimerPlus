/*************************************************************
 * File   : 06_12for_cube.c                                  *
 * Date   : 2024-06-22                                       *
 * Purpose: using a for loop to make a table of cubes        *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int num;

	printf("    n   n cubed\n");
	for(num = 1; num <= 6; num++)
		printf("%5d %5d\n", num, num * num * num);

	return 0;
}
