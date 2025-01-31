/*	12_10r_drive1.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  various storage classes
 *  produces random numbers uses ANSI C portable algorithm
 *  complie with 12_09s_and_r.c
 */
#include <stdio.h>
extern int rand1(void);
extern int srand1(unsigned int x);
int main(void)
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while(scanf("%u", &seed) == 1)
    {
        srand1(seed);
        for(count = 0; count < 5; count++)
        printf("%hd\n", rand1());
        printf("Please enter next choice for seed.\n");
    }
    printf("Done\n");

    return 0;
}