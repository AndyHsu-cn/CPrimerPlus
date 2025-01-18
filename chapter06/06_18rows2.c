/*	06_18rows2.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  using dependent nested loops
 */
#include <stdio.h>
int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for ( row = 0; row < ROWS; row++)
    {
        for ( ch = ('A' + row); ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}