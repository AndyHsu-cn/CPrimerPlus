/*	04_07width.c
 *  2025-01-02
 *  modified by Andy Hsu
 * 
 *  the effect of the field width modifier on printing an integer
 */
#include <stdio.h>
#define PAGES 931
int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}