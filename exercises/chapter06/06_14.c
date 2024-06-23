/*************************************************************
 * File   : 06_14.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int SIZE = 8;
	int array[SIZE], cumulative_sum[SIZE];
	int i;

	printf("Enter %d integers:\n", SIZE);
	for(i = 0; i < SIZE; i++)
	{
		scanf("%d", &array[i]);
		if(i == 0)
			cumulative_sum[i] = array[i];
		else
			cumulative_sum[i] = cumulative_sum[i-1] + array[i];
	}
	printf("\n");
	printf("      Integers: ");
	for(i = 0; i < SIZE; i++)
		printf("%6d ", array[i]);
	printf("\n");
	printf("Cumulative sum: ");
	for(i = 0; i < SIZE; i++)
		printf("%6d ", cumulative_sum[i]);
	printf("\n");

	return 0;
}
