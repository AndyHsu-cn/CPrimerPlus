/*	07_02cypher1.c
 *  2025-01-18
 *  modified by Andy Hsu
 * 
 *  alters input, preserving spaces
 */
#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;

    ch = getchar();
    while(ch != '\n')
    {
        if(ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch);                // print the newline

    return 0;
}