/*************************************************************
 * File   : 04_07width.c                                     *
 * Date   : 2024-06-14                                       *
 * Purpose: field widths                                     *
 *************************************************************/
#include <stdio.h>
#define PAGES 959

int main(void)
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);

	return 0;
}
