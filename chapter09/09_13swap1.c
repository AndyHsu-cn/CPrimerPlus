/*	09_13swap1.c
 *  2025-01-23
 *  modified by Andy Hsu
 * 
 *  first attempt at a swapping function
 */
#include <stdio.h>
void interchange(int x, int y);
int main(void)
{
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void interchange(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}