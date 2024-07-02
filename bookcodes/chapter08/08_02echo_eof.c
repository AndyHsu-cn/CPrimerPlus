/*************************************************************
 * File   : 08_02echo_eof.c                                  *
 * Date   : 2024-06-30                                       *
 * Purpose: repeats input to end of file                     *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	int ch;

	while((ch = getchar()) != EOF)
		putchar(ch);

	return 0;
}
