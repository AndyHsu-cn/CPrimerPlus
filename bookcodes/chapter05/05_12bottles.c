/*************************************************************
 * File   : 05_12bottles.c                                   *
 * Date   : 2024-06-18                                       *
 * Purpose: computers can be accomplished lyricists          * 
 *************************************************************/
#include <stdio.h>
#define MAX 100
int main(void)
{
	int count = MAX + 1;

	while(--count > 0)
	{
		printf("%d bottles of spring water on the wall, "
		       "%d bottles of spring water!\n", count, count);
		printf("Take one down and pass it around,\n");
		printf("%d bottles of spring water.\n\n", count - 1);
	}

	return 0;
}
