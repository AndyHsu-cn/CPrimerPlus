/*************************************************************
 * File   : 04_06.c                                          *
 * Date   : 2024-06-16                                       *
 *************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_name[20];
	char last_name[20];

	printf("Enter your first and last name: ");
	scanf("%s %s", first_name, last_name);
	printf("%s %s\n", first_name, last_name);
	printf("%*zd %*zd\n", (int)strlen(first_name), strlen(first_name),
		(int)strlen(last_name), strlen(last_name));	
	printf("%s %s\n", first_name, last_name);
	printf("%-*zd %-*zd\n", (int)strlen(first_name), strlen(first_name),
		(int)strlen(last_name), strlen(last_name));	

	return 0;
}
