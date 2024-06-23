/*************************************************************
 * File   : 06_03while1.c                                    *
 * Date   : 2024-06-21                                       *
 * Purpose: bad coding creates an infinite loop              *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int n = 0;

	while(n < 3)
		printf("n = %d\n", n);
		n++;
	printf("That's all this program does\n");
	
	return 0;
}
