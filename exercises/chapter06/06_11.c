/*************************************************************
 * File   : 06_11.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int MAX_SIZE = 8;
	int array[MAX_SIZE];
	int i;

	printf("Enter %d integers:\n", MAX_SIZE);
	for(i = 0; i < MAX_SIZE; i++)
		scanf("%d", &array[i]);
	for(i = MAX_SIZE - 1; i >= 0; i--)
		printf("%4d ", array[i]);
	printf("\n");
	
	return 0;
}
