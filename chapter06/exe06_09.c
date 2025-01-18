/*	exe06_09.c
 *  2025-01-17
 *  modified by Andy Hsu
 * 
 *  Write a program that requests lower and upper integer limits, calculates the sum
 *  of all the integer squares from the square of the lower limit to the square of the
 *  upper limit, and displays the answer. The program should then continue to
 *  prompt for limits and display answers until the user enters an upper limit that is
 *  equal to or less than the lower limit. A sample run should look something like
 *  this:

    Enter lower and upper integer limits: 5 9
    The sums of the squares from 25 to 81 is 255
    Enter next set of limits: 3 25
    The sums of the squares from 9 to 625 is 5520
    Enter next set of limits: 5 5
    Done

 */
#include <stdio.h>
long square_sum(long lower, long upper);
int main(void)
{
    long lower, upper;

    printf("Enter lower and upper integer limits: ");
    while(scanf("%ld %ld", &lower, &upper)==2 && lower!=upper)
    {
        printf("The sums of the squares from %ld to %ld is %ld\n", 
                lower*lower, upper*upper, square_sum(lower, upper));
        printf("Enter next set of limits: ");
    }
    printf("Done\n");

    return 0;
}

long square_sum(long lower, long upper)
{
    long ind;
    long ret = 0;

    for(ind = lower; ind <= upper; ind++)
        ret += ind * ind;

    return ret;
}