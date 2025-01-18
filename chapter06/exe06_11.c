/*	exe06_11.c
 *  2025-01-17
 *  modified by Andy Hsu
 * 
 *  Consider these two infinite series:
 *  1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
 *  1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
 *  Write a program that evaluates running totals of these two series up to some limit
 *  of number of terms. Have the user enter the limit interactively. Look at the
 *  running totals after 20 terms, 100 terms, 500 terms. Does either series appear to
 *  be converging to some value? Hint: –1 times itself an odd number of times is –1,
 *  and –1 times itself an even number of times is 1.
 */
#include <stdio.h>
#define STOP 0
int main(void)
{
    int terms, ind;
    int flag = 1;
    double series1, series2;

    printf("Enter terms: ");
    scanf("%d", &terms);
    while(terms > STOP)
    {
        for(ind = 1, series1 = series2 = 0.0f; ind <= terms; ind++, flag = -flag)
        {
            series1 += 1.0 / ind;
            series2 += flag * 1.0 / ind;
        }
        printf("series1 = %f\n", series1);
        printf("series2 = %f\n", series2);
        printf("Enter next terms: ");
        scanf("%d", &terms);
    }
    printf("Done\n");
 
    return 0;
}