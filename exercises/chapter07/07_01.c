/*************************************************************
 * File   : 07_01.c                                          *
 * Date   : 2024-06-28                                       *
 *************************************************************/
#include <stdio.h>
#define STOP '#'
int main(void)
{
	char ch;
	int spaces, new_lines, others;
	
	spaces = new_lines = others = 0;
	printf("Enter input (%c to stop):\n", STOP);
	while((ch = getchar()) != STOP)
	{
		if(ch == ' ')
			spaces++;
		else if(ch == '\n')
			new_lines++;
		else
			others++;
	}
	printf("\n");
	printf("Character Count:\n");
	printf("________________\n");
	printf("Space: %d\n"
	       "Newlines: %d\n"
	       "Others: %d\n", spaces, new_lines, others);

	return 0;
}
