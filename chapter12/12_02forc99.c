/*	12_02forc99.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  new C99 block rules
 */
#include <stdio.h>
int main(void)
{
    int n = 10;

    printf("Initially, n = %d\n", n);
    for(int n = 1; n < 3; n++)
        printf("loop 1: n = %d\n", n);
    printf("After loop 1, n = %d\n", n);
    for(int n = 1; n < 3; n++)
    {
        printf("loop 2: n = %d\n", n);
        int n = 30;
        printf("loop 2: n = %d\n", n);
        n++;
    }
    printf("After loop 1, n = %d\n", n);

    return 0;
}