/*************************************************************
 * File   : 05_01.c                                          *
 * Date   : 2024-06-19                                       *
 *************************************************************/
#include <stdio.h>
const int M_PER_H = 60;
int main(void)
{
	int minutes;

	printf("Enter an amount of time in minutes: ");
	scanf("%d", &minutes);
	while(minutes > 0)
	{
		printf("%d minutes is %d hour(s) and %d minute(s).\n", 
			minutes, minutes / M_PER_H, minutes % M_PER_H);
		printf("Enter an amount of time in minutes: ");
		scanf("%d", &minutes);
	}		

	return 0;
}
