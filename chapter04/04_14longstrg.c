/*	04_14longstrg.c
 *  2025-01-03
 *  modified by Andy Hsu
 * 
 *  three ways to print long strings
 */
#include <stdio.h>
int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");

    printf("Here's another way to print a \
long string.\n");

    printf("Here's the newest way to print a "
           "long string.\n");                       // ANSI C

    return 0;
}