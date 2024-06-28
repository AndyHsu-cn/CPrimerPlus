/*************************************************************
 * File   : 07_07wordcnt.c                                   *
 * Date   : 2024-06-28                                       *
 * Purpose: counts characters, words, false                  *
 *************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '|'
int main(void)
{
	char c;			// current character
	char prev;		// previous character read
	long n_chars = 0L;
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0;	// number of partial lines
	bool inword = false;

	printf("Enter text to be analyzed (| to terminate):\n");
	prev = '\n';
	while((c = getchar()) != STOP)
	{
		n_chars++;
		if(c == '\n')
			n_lines++;
		if(!isspace(c) && !inword)
		{
			n_words++;
			inword = true;
		}
		if(isspace(c) && inword)
			inword = false;
		prev = c;
	}
	if(prev != '\n')
		p_lines = 1;
	printf("characters = %ld, words = %d, lines = %d, ",
		n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);


	return 0;
}
