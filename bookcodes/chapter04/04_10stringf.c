/*************************************************************
 * File   : 04_10stringf.c                                   *
 * Date   : 2024-06-14                                       *
 * Purpose: string formatting                                *
 *************************************************************/
#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void)
{
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
	
	return 0;
}
