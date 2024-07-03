/*************************************************************
 * File   : 08_01.c                                          *
 * Date   : 2024-07-03                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int count = 0;

	printf("Enter input:\n");
	while(getchar() != EOF)
		count++;
	printf("Character count: %d\n", count);

	return 0;
}
