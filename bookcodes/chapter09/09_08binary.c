/*************************************************************
 * File   : 09_08binary.c                                    *
 * Date   : 2024-07-07                                       *
 * Purpose: prints integer in binary form                    *
 *************************************************************/
#include <stdio.h>
void to_binary(unsigned long n);
int main(void)
{
	unsigned long number;

	printf("Enter an integer (qu to quit):\n");
	while(scanf("%lu", &number) == 1)
	{
		printf("Binary equivalent: ");
		to_binary(number);
		printf("\n");
		printf("Enter an integer (qu to quit):\n");
	}

	return 0;
}

void to_binary(unsigned long n)
{
	int r;

	r = n % 2;
	if(n >= 2)
		to_binary(n / 2);
	putchar(r == 0? '0': '1');
	
	return;

} 
