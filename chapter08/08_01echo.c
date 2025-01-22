/*	08_01echo.c
 *  2025-01-20
 *  modified by Andy Hsu
 * 
 *  repeats input
 */
#include <stdio.h>
int main(void)
{
    char ch;

    while((ch = getchar()) != '#')
        putchar(ch);

    return 0;
}