/*************************************************************
 * File   : 08_01echo.c                                      *
 * Date   : 2024-06-30                                       *
 * Purpose: repeats input                                    *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	char ch;

	while((ch = getchar()) != '#')
		putchar(ch);

	return 0;
}
