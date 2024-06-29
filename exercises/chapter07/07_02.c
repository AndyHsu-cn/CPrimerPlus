/*************************************************************
 * File   : 07_02.c                                          *
 * Date   : 2024-06-29                                       *
 *************************************************************/
#include <stdio.h>
#define STOP '#'
int main(void)
{
	char ch;
	int count = 0;
	
	printf("ASCII Character Codes\n");
	printf("Enter input (%c to stop):\n", STOP);
	while((ch = getchar()) != STOP)
	{
		switch(ch)
		{
			case ' ': printf("%4s: %-3d ", " " , ch);
				break;
			case '\t': printf("%4s: %-3d ", "\\t", ch);
				break;
			case '\n': printf("%4s: %-3d ", "\\n", ch);
				break;
			default: printf("%4c: %-3d ", ch, ch);
		}
		count++;
		if(count % 8 == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}
