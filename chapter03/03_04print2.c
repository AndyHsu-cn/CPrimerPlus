/*	03_04print2.c
 *  2024-12-28
 *  modified by Andy Hsu
 * 
 *  more printf() properties
 */
#include <stdio.h>
int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);                 // change %d to %hd
    printf("verybig = %lld and not %d\n", verybig, verybig);     // change %ld to %d 

    return 0;
}