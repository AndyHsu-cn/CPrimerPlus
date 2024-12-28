/*	exe02_03.c
 *  2024-12-28
 *  modified by Andy Hsu
 * 
 *  Write a program that converts your age in years to days and displays both values.
 *  At this point, don't worry about fractional years and leap years.
 */
#include <stdio.h>
int main(void)
{
    int year = 20;

    printf("Year = %d, Days = %d\n", year, year * 365);

    return 0;
}