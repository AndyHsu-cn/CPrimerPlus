/*************************************************************
 * File   : 06_18.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int DUNBARS_NUMBER = 150;
	int friends = 5, weeks = 0;

	printf("Week |Friends\n");
	printf("_____|_______\n");
	do
	{
		weeks++;
		friends -= weeks;
		friends *= 2;
		printf("%4d |%7d\n", weeks, friends);
	}while(friends <= DUNBARS_NUMBER);

	return 0;
}
