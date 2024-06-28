/*************************************************************
 * File   : 07_03cypher2.c                                   *
 * Date   : 2024-06-26                                       *
 * Purpose: alters input, preserving non-letters             *
 *************************************************************/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	
	while((ch = getchar()) != '\n')
	{
		if(isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);			// print the newline

	return 0;
}
