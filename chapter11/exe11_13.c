/*	exe11_13.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a power-law program that works on a command-line basis. The first
 *  command-line argument should be the type double number to be raised to a
 *  certain power, and the second argument should be the integer power.
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    double factor = 1.0;
    int times;
    double n;
    int exp;

    if(argc == 3)
    {
        n = atof(argv[1]);
        exp = atoi(argv[2]);
        for(times = 1; times <= exp; times++)
            factor *= n;
        printf("%f to the power of %d is %f.\n", n, exp, factor);
    }else
        printf("Usage: %s double int.\n", argv[0]); 
       
    return 0;
}