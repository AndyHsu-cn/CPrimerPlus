/*************************************************************
 * File   : 07_06.c                                          *
 * Date   : 2024-06-29                                       *
 *************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '#'
int main(void)
{
	char ch;
	int ei_cnt = 0;
	bool e_flag = false;

	printf("This program reads input and counts the number of times the "
	       "sequence 'ei' occurs (case insensitive).\n");
	printf("Enter input (%c to quit):\n", STOP);
	while(scanf("%c", &ch) == 1 && ch != STOP)
	{
		ch = tolower(ch);
		if(ch == 'e')
			e_flag = true;
		else if(ch == 'i')
		{
			if(e_flag)
				ei_cnt++;
			e_flag = false;
		}else
			e_flag = false;
	}
	printf("The sequence 'ei' occurs %d times.\n", ei_cnt);	

	return 0;
}
