/*	exe09_04.c
 *  2025-01-23
 *  modified by Andy Hsu
 * 
 *  The harmonic mean of two numbers is obtained by taking the inverses of the two
 *  numbers, averaging them, and taking the inverse of the result. Write a function
 *  that takes two double arguments and returns the harmonic mean of the two
 *  numbers.
 */
#include <stdio.h>
double harmonic_mean(double a, double b);
int main(void)
{
    double a = 2.0, b = 4.0;

    printf("harmonic mean of %f and %f is %f.\n", a, b, harmonic_mean(a, b));

    return 0;
}

double harmonic_mean(double a, double b)
{
    return 1 / ((1/a + 1/b) / 2);
}