/*************************************************************
 * File   : 04_03.c                                          *
 * Date   : 2024-06-16                                       *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	float num;

	printf("Enter a number: ");
	scanf("%f", &num);
	printf("The input is %.1f or %.1e\n", num, num);
	printf("The input is %+.3f or %.3E\n", num, num);		

	return 0;
}
