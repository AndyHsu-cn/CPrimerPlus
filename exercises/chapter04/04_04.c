/*************************************************************
 * File   : 04_04.c                                          *
 * Date   : 2024-06-16                                       *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	const float INCHES_PER_FEET = 12;
	float height;
	char name[20];

	printf("What is your name?: ");
	scanf("%s", name);
	printf("What is your height in inches?: ");
	scanf("%f", &height);
	printf("%s, you are %.3f feet tall.\n",
		name, height / INCHES_PER_FEET);

	return 0;
}
