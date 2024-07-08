/*************************************************************
 * File   : 09_13swap1.c                                     *
 * Date   : 2024-07-08                                       *
 * Purpose: first attempt at a swapping funtion              *
 *************************************************************/
#include <stdio.h>
void interchange(int u, int v);
int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(x, y);
	printf("Now x = %d and y = %d.\n", x, y);	

	return 0;
}

void interchange(int u, int v)
{
	int temp;

	temp = u;
	u = v;
	v = temp;
}
