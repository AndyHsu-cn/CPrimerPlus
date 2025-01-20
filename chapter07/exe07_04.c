/*	exe07_04.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *  Using if else statements, write a program that reads input up to #, replaces
 *  each period with an exclamation mark, replaces each exclamation mark initially
 *  present with two exclamation marks, and reports at the end the number of
 *  substitutions it has made.
 */
#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int times = 0;

    while((ch = getchar()) != STOP)
    {
        if(ch == '.')
        {
            putchar('!');
            times++;
        }else if(ch == '!')
        {
            putchar('!');
            putchar('!');
            times++;
        }else
            putchar(ch);
    }
    printf("substitute %d times\n", times);

    return 0;
}