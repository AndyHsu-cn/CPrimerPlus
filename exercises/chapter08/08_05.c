/*************************************************************
 * File   : 08_05.c                                          *
 * Date   : 2024-07-03                                       *
 *************************************************************/
#include <stdio.h>
#define UPPER_BOUND 100
#define LOWER_BOUND 0
int main(void)
{
	int upper = UPPER_BOUND;
	int lower = LOWER_BOUND;
	int guess = (upper + lower) / 2;
	int ch;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\na h if it is too high and a l if it is too low..\n");
	printf("Uh...is your number %d?\n", guess);
	while((ch = getchar()) != 'y')
	{
		if(ch == 'h')
			upper = guess - 1;
		else if(ch == 'l')
			lower = guess + 1;
		else
		{
			printf("Invalid input, Try again.\n");
			continue;
		}	
		guess = (upper + lower) / 2;	
		printf("Well, then, is it %d?\n", guess);
		while(getchar() != '\n')
			continue;
	}
	printf("I knew I could do it!\n");

	return 0;
}
