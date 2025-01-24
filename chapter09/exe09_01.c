/*	exe09_01.c
 *  2025-01-23
 *  modified by Andy Hsu
 * 
 *  Devise a function called min(x,y) that returns the smaller of two double values.
 *  Test the function with a simple driver.
 */
#include <stdio.h>
double min(double x, double y);
int main(void)
{
    double x = 10.0, y = 5.0;

    printf("The smaller of %f and %f is %f.\n", x, y, min(x, y));

    return 0;
}

double min(double x, double y)
{
    return (x < y? x: y);
}