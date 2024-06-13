/*************************************************************
 * File   : 03_05.c                                          *
 * Date   : 2024-06-13                                       *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	unsigned int SECONDS_PER_YEAR = 31560000;
	unsigned int age;

	printf("What is your age (in year): ");
	scanf("%u", &age);
	printf("You are %u seconds old!\n", SECONDS_PER_YEAR * age);

	return 0;
}
