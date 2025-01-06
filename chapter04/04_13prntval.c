/*	04_13prntval.c
 *  2025-01-03
 *  modified by Andy Hsu
 * 
 *  finding printf()'s return value
 */
#include <stdio.h>
int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);

    return 0;
}