/*	09_15swap3.c
 *  2025-01-23
 *  modified by Andy Hsu
 * 
 *  using pointers to make swapping work 
 */
#include <stdio.h>
void interchange(int * px, int * py);
int main(void)
{
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void interchange(int * px, int * py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}