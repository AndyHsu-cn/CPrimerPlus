/*	07_03cypher3.c
 *  2025-01-18
 *  modified by Andy Hsu
 * 
 *  alters input, preserving non-letters
 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    while((ch = getchar()) != '\n')
    {
        if(isalpha(ch))
            putchar(ch + 1);
        else
            putchar(ch);
    }
    putchar(ch);                // print the newline

    return 0;
}