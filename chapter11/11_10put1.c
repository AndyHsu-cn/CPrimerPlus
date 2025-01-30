/*	11_10put1.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  prints a string without adding \n 
 */
#include <stdio.h>
void put1(const char * string)
{
    while(*string != '\0')
        putchar(*string++);
}