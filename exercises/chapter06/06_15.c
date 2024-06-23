/*************************************************************
 * File   : 06_15.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
int main(void)
{
	const int MAX_SIZE = 255;
	char line[MAX_SIZE];
	int i = 0;

	printf("Enter original line: ");
	while(scanf("%c", &line[i]) == 1 && line[i] != '\n')
		i++;
	printf("Reverse line: ");
	for(i--; i >= 0; i--)
		printf("%c", line[i]);
	printf("\n");

	return 0;
}
