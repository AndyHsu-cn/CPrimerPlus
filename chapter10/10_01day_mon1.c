/*	10_01day_mon1.c
 *  2025-01-24
 *  modified by Andy Hsu
 * 
 *  prints the days for each month
 */
#include <stdio.h>
#define MONTHS 12
int main(void)
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for(index = 0; index < MONTHS; index++)
        printf("Month %d has %2d days.\n", index + 1, days[index]);

    return 0;
}