/*	11_11put2.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  prints a string and counts characters 
 */
#include <stdio.h>
int put2(const char * string)
{
    int count = 0;

    while(*string)
    {
        putchar(*string);
        count++;
    }
    putchar('\n');

    return count;
}