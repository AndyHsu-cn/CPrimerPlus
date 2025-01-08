/*	05_13addemup.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  four kinds of statements
 */
#include <stdio.h>
int main(void)
{
    int count, sum;             // declaration statement

    count = 0;                  // assignment statement
    sum = 0;
    while(count++ < 20)
        sum = sum + count;      // while statement
    printf("sum = %d\n", sum);  // function statement

    return 0;
}