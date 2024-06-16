/*************************************************************
 * File   : 04_15input.c                                     *
 * Date   : 2024-06-15                                       *
 * Purpose: when to use &                                    *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	int age;
	float assets;
	char pet[30];

	printf("Enter your age, assets, and favourite pet.\n");
	scanf("%d %f", &age, &assets);		// use the & here
	scanf("%s", pet);			// no & for char array
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}
