/*************************************************************
 * File   : 08_02.c                                          *
 * Date   : 2024-07-03                                       *
 *************************************************************/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch;
	int char_cnt = 0;	

	while((ch = getchar()) != EOF)
	{
		if(iscntrl(ch))
			printf("^%c: %d", ch + 64, ch);
		else{
			if(ch == '\n')
				printf("\\n: %d", ch);
			else if(ch == '\t')
				printf("\\t: %d", ch);
			else
				printf("%c: %d", ch, ch);
		}
		char_cnt++;
		if(char_cnt % 10 == 0)
			putchar('\n');
		else
			putchar(' ');
	}
	printf("\n");

	return 0;
}
