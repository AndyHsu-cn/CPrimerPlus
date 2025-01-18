/*	06_14zeno.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  finds the sum of the first few terms
 */
#include <stdio.h>
int main(void)
{
    int t_ct;               // term index
    double time, x;
    int limit;              // term total

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for(time = 0.0, x = 1.0, t_ct = 1; t_ct <= limit; t_ct++, x *= 2.0)
    {
        time += 1.0 / x;
        printf("time = %f when times = %d.\n", time, t_ct);
    }

    return 0;
}