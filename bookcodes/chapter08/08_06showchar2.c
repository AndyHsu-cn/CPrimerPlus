/*************************************************************
 * File   : 08_06showchar2.c                                 *
 * Date   : 2024-07-02                                       *
 * Purpose: prints characters in rows and columns            *
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
		if(scanf("%d %d", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		while(getchar() != '\n')
			continue;
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
