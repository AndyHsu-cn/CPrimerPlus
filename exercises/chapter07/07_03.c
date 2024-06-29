/*************************************************************
 * File   : 07_03.c                                          *
 * Date   : 2024-06-29                                       *
 *************************************************************/
#include <stdio.h>
#define STOP 0
int main(void)
{
	int even_cnt = 0, odd_cnt = 0, even_sum = 0, odd_sum = 0;
	int input;

	printf("Enter integers (0 to quit):\n");
	while(scanf("%d", &input) == 1 && input != STOP)
	{
		if(input % 2 == 0)
		{
			even_cnt++;
			even_sum += input;
		}else{
			odd_cnt++;
			odd_sum += input;
		}
	}
	printf("Number of even integers: %d, ", even_cnt);
	printf("Average value of even integers: %.2f\n", (float)even_sum / even_cnt);
	printf("Number of odd integers: %d, ", odd_cnt);
	printf("Average value of odd integers: %.2f\n", (float)odd_sum / odd_cnt);

	return 0;
}
