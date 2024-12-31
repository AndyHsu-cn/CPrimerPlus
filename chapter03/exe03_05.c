/*	exe03_05.c
 *  2024-12-31
 *  modified by Andy Hsu
 * 
 *  There are approximately 3.156 x 107 seconds in a year. Write a program that
 *  requests your age in years and then displays the equivalent number of seconds
 */
#include <stdio.h>
int main(void)
{
    const double SECONDS_PER_YEAR = 3.156e7;
    int age_year;
    double age_seconds;

    printf("Input your age in years: ");
    scanf("%d", &age_year);
    age_seconds = SECONDS_PER_YEAR * age_year;
    printf("The equivalent number of seconds is %e.\n", age_seconds);

    return 0;
}