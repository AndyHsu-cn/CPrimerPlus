/*	exe16_02.c
 *  2025-02-07
 *  modified by Andy Hsu
 * 
 *  The harmonic mean of two numbers is obtained by taking the inverses of the two
 *  numbers, averaging them, and taking the inverse of the result. Use a #define
 *  directive to define a macro "function" that performs this operation. Write a simple
 *  program that tests the macro.
 */
#include <stdio.h>
#define HARMONIC(X,Y)       (1/(((1/(X)) + (1/(Y)))/2))
int main(void)
{
    double a, b;

    puts("Input two numbers: ");
    while(scanf("%lf %lf", &a, &b) == 2)
    {
        if(a == 0 || b == 0 || a == -b)
        {
            puts("values should not be 0 or opposite-number, try another pair:");
            continue;
        }
        printf("The harmonic mean of %.2f and %.2f is %.2f.\n", a, b, HARMONIC(a, b));
    }
    puts("Bye.");

    return 0;
}