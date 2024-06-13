/*************************************************************
 * File   : 03_03bases.c                                     *
 * Date   : 2024-06-10                                       *
 * Purpose: prints 100 in decimal, octal, and hex            *
 *************************************************************/
#include <stdio.h>

int main(void)
{	
	int x = 100;

	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
	
	return 0;
}
