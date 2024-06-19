/*************************************************************
 * File   : 05_03.c                                          *
 * Date   : 2024-06-19                                       *
 *************************************************************/
#include <stdio.h>
const int D_PER_W = 7;			// days in one week
int main(void)
{
	int days;

	printf("Enter a number of days (enter 0 to quit): ");
	scanf("%d", &days);
	while(days > 0)
	{
		printf("%d days is %d week(s) and %d day(s).\n", 
			days, days / D_PER_W, days % D_PER_W);
		printf("Enter a number of days (enter 0 to quit): ");
		scanf("%d", &days);
	}		

	return 0;
}
