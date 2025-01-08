/*	05_03golf.c
 *  2025-01-07
 *  modified by Andy Hsu
 * 
 *  golf tournament scorecard
 */
#include <stdio.h>
int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("                 cheeta   tarzan     jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    return 0;
}