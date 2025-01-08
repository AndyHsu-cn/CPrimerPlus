/*	05_10add_one.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  incrementing: prefix and postfix
 */
#include <stdio.h>
int main(void)
{
    int ultra = 0, super = 0;

    while(ultra < 5)
    {
        ++ultra;
        super++;
        printf("ultra = %d, super = %d\n", ultra, super);
    }

    return 0;
}