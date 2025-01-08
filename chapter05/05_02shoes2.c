/*	05_02shoes2.c
 *  2025-01-07
 *  modified by Andy Hsu
 * 
 *  calculates foot lengths for several sizes
 */
#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
    double shoe, foot;

    printf("%20s %11s\n", "Shoe size (men's)", "foot length");
    shoe = 3.0;
    while(shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%20.1f %11.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, wear it.\n");
    
    return 0;
}