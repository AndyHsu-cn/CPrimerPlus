/*************************************************************
 * File   : 03_02print1.c                                    *
 * Date   : 2024-06-10                                       *
 * Purpose: display some properties of printf()              *
 *************************************************************/
#include <stdio.h>

int main(void)
{	
	int ten = 10;
	int two = 2;

	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n", ten);
	
	return 0;
}
