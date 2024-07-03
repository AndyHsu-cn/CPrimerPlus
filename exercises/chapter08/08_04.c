/*************************************************************
 * File   : 08_04.c                                          *
 * Date   : 2024-07-03                                       *
 *************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main(void)
{
	int ch;
	bool in_word = false;
	int letter_cnt = 0, word_cnt = 0;

	while((ch = getchar()) != EOF)
	{
		if(isalpha(ch))
		{
			letter_cnt++;
			if(!in_word)
			{
				in_word = true;
				word_cnt++;
			}
		}else
			in_word = false;
	}
	printf("Average letters per word: %.2f\n", (double)letter_cnt / word_cnt);

	return 0;
}
