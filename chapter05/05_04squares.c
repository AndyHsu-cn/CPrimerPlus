/*	05_04squares.c
 *  2025-01-07
 *  modified by Andy Hsu
 * 
 *  produces a table of first 20 squares
 */
#include <stdio.h>
int main(void)
{
    int num = 1;

    while(num < 21)
    {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }

    return 0;
}