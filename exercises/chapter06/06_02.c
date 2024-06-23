/*************************************************************
 * File   : 06_02.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int ROWS = 5;
	const char CHAR = '$'; 
	int i, j;

	for(i = 1; i <= ROWS; i++)
	{
		for(j = 1; j <= i; j++)
			printf("%c", CHAR);
		printf("\n");
	}

	return 0;
}
