/*************************************************************
 * File   : 09_14swap2.c                                     *
 * Date   : 2024-07-08                                       *
 * Purpose: researching 09_13swap1.c                         *
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

	printf("Originally u = %d and v = %d.\n", u, v);
	temp = u;
	u = v;
	v = temp;
	printf("Now u = %d and v = %d.\n", u, v);
}
