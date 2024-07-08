/*************************************************************
 * File   : 09_03.c                                          *
 * Date   : 2024-07-08                                       *
 *************************************************************/
#include <stdio.h>
void printgrid(char ch, unsigned cols, unsigned rows);
int main(void)
{
	char ch;
	unsigned int cols, rows;

	printf("Enter a character, number of rows and number of cols: ");
	while(scanf("%c %u %u", &ch, &cols, &rows) == 3)
	{
		printgrid(ch, cols, rows);
		printf("Enter a character, number of rows and number of cols: ");
		while(getchar() != '\n')
			;
	}
	printf("Bye.\n");

	return 0;
}

void printgrid(char ch, unsigned cols, unsigned rows)
{
	unsigned i, j;

	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
			putchar(ch);
		putchar('\n');
	}
}
