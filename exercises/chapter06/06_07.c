/*************************************************************
 * File   : 06_07.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
#include <string.h>
int main(void)
{
	const int MAX_SIZE = 30;
	char word[MAX_SIZE];
	int i;
	
	printf("Enter a string: ");
	scanf("%s", word);
	for(i = strlen(word) - 1; i >= 0; i--)
		printf("%c", word[i]);
	printf("\n");

	return 0;
}
