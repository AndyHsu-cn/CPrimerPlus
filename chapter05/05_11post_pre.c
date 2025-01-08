/*	05_11post_pre.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  postfix vs prefix
 */
#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int aplus, plusb;

    aplus = a++;        // postfix 
    plusb = ++b;        // prefix
    printf("a aplus     b plusb\n");
    printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);

    return 0;
}