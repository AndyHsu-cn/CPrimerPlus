/*	02_05stillbad.c
 *  2024-12-28
 *  modified by Andy Hsu
 * 
 *  a program with its syntax errors fixed
 */
#include <stdio.h>
int main(void)
{
    int n, n2, n3;
    /* this program has several errors*/
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
    return 0;
}