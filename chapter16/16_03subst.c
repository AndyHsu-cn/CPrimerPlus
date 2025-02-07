/*	16_03subst.c
 *  2025-02-06
 *  modified by Andy Hsu
 * 
 *  substitute in string 
 */
#include <stdio.h>
#define PSQR(X)     printf("The square of "#X" is %d.\n", ((X) * (X)))
int main(void)
{
    int y = 5;

    PSQR(y);
    PSQR(2 + 4);

    return 0;
}