/*	exe04_06.c
 *  2024-01-06
 *  modified by Andy Hsu
 * 
 *  Write a program that sets a type double variable to 1.0/3.0 and a type float
 *  variable to 1.0/3.0. Display each result three times—once showing four digits to
 *  the right of the decimal, once showing 12 digits to the right of the decimal, and
 *  once showing 16 digits to the right of the decimal. Also have the program include
 *  float.h and display the values of FLT_DIG and DBL_DIG. Are the displayed values
 *  of 1.0/3.0 consistent with these values?
 */
#include <stdio.h>
#include <float.h>
int main(void)
{
    float f = 1.0 / 3.0;
    double g = 1.0 / 3.0;

    printf("%2d digits: f = %-20.4f g = %-20.4f\n", 4, f, g);
    printf("%2d digits: f = %-20.12f g = %-20.12f\n", 12, f, g);
    printf("%2d digits: f = %-20.16f g = %-20.16f\n", 16, f, g);
    printf("FLT_DIG = %d\nDBL_DIG = %d\n", FLT_DIG, DBL_DIG);

    return 0;
}