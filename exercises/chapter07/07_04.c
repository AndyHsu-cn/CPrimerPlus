/*************************************************************
 * File   : 07_04.c                                          *
 * Date   : 2024-06-29                                       *
 *************************************************************/
#include <stdio.h>
#define STOP '#'
int main(void)
{
	char ch;

	printf("Enter input (%c to quit):\n", STOP);
	while(scanf("%c", &ch) == 1 && ch != STOP)
	{
		if(ch == '.')
			printf("!");
		else if(ch == '!')
			printf("!!");
		else
			printf("%c", ch);
	}
	printf("\n");	

	return 0;
}
