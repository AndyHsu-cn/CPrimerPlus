/*************************************************************
 * File   : 02_03two_func.c                                  *
 * Date   : 2024-06-06                                       *
 * Purpose: a program using two functions in one file        *
 *************************************************************/
void butler(void);
#include <stdio.h>

int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes, Bring me some tea and writeable DVDs.\n");	

	return 0;
}
void butler(void)
{
	printf("You rang, sir?\n");
}
