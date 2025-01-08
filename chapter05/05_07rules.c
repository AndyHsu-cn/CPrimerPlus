/*	05_07rules.c
 *  2025-01-07
 *  modified by Andy Hsu
 * 
 *  precedence test
 */
#include <stdio.h>
int main(void)
{
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d\n", top);

    return 0;
}