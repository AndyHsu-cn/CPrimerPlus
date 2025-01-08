/*	05_01shoes1.c
 *  2025-01-07
 *  modified by Andy Hsu
 * 
 *  converts a shoe size to inches
 */
#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("%20s %11s\n", "Shoe size (men's)", "foot length");
    printf("%20.1f %11.2f inches\n", shoe, foot);

    return 0;
}