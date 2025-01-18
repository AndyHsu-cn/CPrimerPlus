/*	exe06_16.c
 *  2025-01-17
 *  modified by Andy Hsu
 * 
 *  Chuckie Lucky won a million dollars, which he places in an account that earns 8%
 *  a year. On the last day of each year, Chuckie withdraws $100,000. Write a
 *  program that finds out how many years it takes for Chuckie to empty his account.
 */
#include <stdio.h>
int main(void)
{
    const double ORIGINAL = 100.0;
    const double INTERSET = 0.08;
    const double WITHDRAW = 10.0 ;
    double balance = ORIGINAL;
    int year = 0;

    while((balance = balance*(1.0 + INTERSET) - WITHDRAW) > 0)
        year++;
    printf("It takes %d years for Chuckie to empty his account.\n", year);

    return 0;
}