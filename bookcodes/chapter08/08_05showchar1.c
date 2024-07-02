/*************************************************************
 * File   : 08_05showchar1.c                                 *
 * Date   : 2024-07-02                                       *
 * Purpose: program with a BIG I/O problem                   *
 *************************************************************/
#include <stdio.h>
void display(char cr, int rows, int cols);
int main(void)
{
	int ch;
	int rows, cols;
	
	printf("Enter a character and two integers;\n");
	while((ch = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		display(ch, rows, cols);
		printf("Enter another character and two integers;\n");
		printf("Enter a new line to quit.\n");
	}
	printf("Bye!\n");

	return 0;
}

void display(char cr, int rows, int cols)
{
	int row, col;

	for(row = 1; row <= rows; row++)
	{
		for(col = 1; col <= cols; col++)
			putchar(cr);
		putchar('\n');
	}
}
