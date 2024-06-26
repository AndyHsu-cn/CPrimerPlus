/*************************************************************
 * File   : 03_07typesize.c                                  *
 * Date   : 2024-06-13                                       *
 * Purpose: prints out type sizes                            *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", 
		sizeof(long long));
	printf("Type double has a size of %zd bytes.\n", sizeof(double));
	printf("Type long double has a size of %zd bytes.\n",
		sizeof(long double));

	return 0;	
}
