/*	06_07truth.c
 *  2025-01-10
 *  modified by Andy Hsu
 * 
 *  what values are true?
 */
#include <stdio.h>
int main(void)
{
    int n = 3;

    while(n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n = -3;
    while(n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);

    return 0;
}