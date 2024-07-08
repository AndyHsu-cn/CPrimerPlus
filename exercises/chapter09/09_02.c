/*************************************************************
 * File   : 09_02.c                                          *
 * Date   : 2024-07-08                                       *
 *************************************************************/
#include <stdio.h>
void chline(char ch, unsigned i, unsigned j);
int main(void)
{
	char ch;
	unsigned int i, j;

	printf("Enter a character and two integers: ");
	while(scanf("%c %u %u", &ch, &i, &j) == 3)
	{
		chline(ch, i, j);
		printf("\n");
		printf("Enter a character and two integers: ");
		while(getchar() != '\n')
			;
	}
	printf("Bye.\n");

	return 0;
}

void chline(char ch, unsigned i, unsigned j)
{
	unsigned col;

	for(col = 1; col < i; col++)
		putchar(' ');
	for(;col <= j; col++)
		putchar(ch);
}
