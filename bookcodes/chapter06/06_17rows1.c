/*************************************************************
 * File   : 06_17rows1.c                                     *
 * Date   : 2024-06-22                                       *
 * Purpose: uses nested loops                                *
 *************************************************************/
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
	int row;
	char ch;

	for(row = 0; row < ROWS; row++)
	{
		for(ch = 'A'; ch < ('A' + CHARS); ch++)
			printf("%c", ch);
		printf("\n");
	}	

	return 0;
}
