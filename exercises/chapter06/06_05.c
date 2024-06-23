/*************************************************************
 * File   : 06_05.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
#include <ctype.h>
void print_spaces(int num);
int main(void)
{
	int i, j;
	char ch;
	int rows;	

	do
	{
		printf("Enter an uppercase letter: ");
		scanf("%c", &ch);
	}while(!isupper(ch));	
	
	rows = ch - 'A' + 1;
	for(i = 1; i <= rows; i++)
	{
		print_spaces(rows - i);
		for(j = 1; j <= i; j++)
			printf("%c", 'A' + j - 1);
		for(j = j - 2; j > 0; j--)
			printf("%c", 'A' + j - 1);
		printf("\n");
	
	}

	return 0;
}

void print_spaces(int num)
{
	for(int i = 1; i <= num; i++)
		printf("%c", ' ');
}
