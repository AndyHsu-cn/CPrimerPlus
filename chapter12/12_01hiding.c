/*	12_01hiding.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  variables in blocks
 */
#include <stdio.h>
int main(void)
{
    int x = 30;

    printf("x in outer block: %d\n", x);
    {
        int x = 77;
        printf("x in inner block: %d\n", x);
    }
    printf("x in outer block: %d\n", x);
    while(x++ < 33)
    {
        int x = 100;
        x++;
        printf("x in while loop: %d\n", x);
    }
    printf("x in outer block: %d\n", x);

    return 0;
}