/*************************************************************
 * File   : 04_02.c                                          *
 * Date   : 2024-06-16                                       *
 *************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[20];

	printf("Enter your name: ");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", strlen(name) + 3, name);
		
	return 0;
}
