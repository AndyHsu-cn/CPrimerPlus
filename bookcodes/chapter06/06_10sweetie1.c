/*************************************************************
 * File   : 06_10sweetie1.c                                  *
 * Date   : 2024-06-21                                       *
 * Purpose: a counting loop                                  *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int NUMBER = 22;
	int count = 1;

	while(count <= NUMBER)
	{
		printf("Be my Valentine!\n");
		count++;
	}

	return 0;
}
