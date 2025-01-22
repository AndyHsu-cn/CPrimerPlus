/*	08_02echo_eof.c
 *  2025-01-20
 *  modified by Andy Hsu
 * 
 *  repeats input to end of file
 */
#include <stdio.h>
#include <limits.h>
int main(void)
{
    int ch;

    while((ch = getchar()) != EOF)
        putchar(ch);

    return 0;
}