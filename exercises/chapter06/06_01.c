/*************************************************************
 * File   : 06_01.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int ALPHABET_LENGTH = 26;
	char alphabet_lowercase[ALPHABET_LENGTH];
	int i;

	for(i = 0; i < ALPHABET_LENGTH; i++)
		alphabet_lowercase[i] = 'a' + i;
	printf("The lowercase letters of the the alphabet are:\n");
	for(i = 0; i < ALPHABET_LENGTH; i++)
		printf("%c ", alphabet_lowercase[i]);
	printf("\n");

	return 0;
}
