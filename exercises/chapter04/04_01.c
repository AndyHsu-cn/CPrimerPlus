/*************************************************************
 * File   : 04_01.c                                          *
 * Date   : 2024-06-16                                       *
 *************************************************************/
#include <stdio.h>

int main(void)
{
	char first_name[20];
	char last_name[20];

	printf("Enter your first and last name (eg: Steven Jobs): ");
	scanf("%s %s", first_name, last_name);
	printf("%s, %s\n", last_name, first_name);

	return 0;
}
