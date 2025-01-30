/*	11_02quotes.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  strings as pointers
 */
#include <stdio.h>
int main(void)
{
    printf("%s, %p, %c\n", "we", "are", *"space farers");

    return 0;
}