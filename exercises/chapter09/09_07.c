/*************************************************************
 * File   : 09_07.c                                          *
 * Date   : 2024-07-08                                       *
 *************************************************************/
#include <stdio.h>
#include <ctype.h>
int letter_location(char ch);
int main(void)
{
	char ch;
	int location;
	
	printf("Enter a letter: ");
	while((ch = getchar()) != EOF)
	{
		if((location = letter_location(ch)) == -1)
			printf("%c is not a letter.\n", ch);
		else
			printf("%c is a letter, location = %d.\n", ch, location);
		printf("Enter a letter: ");
		while(getchar() != '\n')
			;
	}
	printf("Bye.\n");

	return 0;
}

int letter_location(char ch)
{
	if(isalpha(ch))
		return (tolower(ch) - 'a' + 1);
	else
		return -1;
}
