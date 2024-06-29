/*************************************************************
 * File   : 07_05.c                                          *
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
		switch(ch)
		{
			case '.': printf("!");
				break;
			case '!': printf("!!");
				break;
			default: printf("%c", ch);
				break;
		}
	}
	printf("\n");	

	return 0;
}
