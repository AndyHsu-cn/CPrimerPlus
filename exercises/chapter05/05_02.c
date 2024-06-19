/*************************************************************
 * File   : 05_02.c                                          *
 * Date   : 2024-06-19                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int start_num;
	int i = 0;

	printf("Enter a start integer: ");
	scanf("%d", &start_num);
	while(i <= 10)
	{
		printf("%d\t", start_num + i);
		i++;
	}
	printf("\n");

	return 0;
}
