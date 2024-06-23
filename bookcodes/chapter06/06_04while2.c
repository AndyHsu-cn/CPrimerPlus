/*************************************************************
 * File   : 06_04while2.c                                    *
 * Date   : 2024-06-21                                       *
 * Purpose: watch your semicolons                            *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int n = 0;

	while(n++ < 3);
		printf("n is %d\n", n);
	printf("That's all this program does.\n");
	
	return 0;
}
