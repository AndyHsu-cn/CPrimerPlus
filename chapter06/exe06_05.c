/*	exe06_05.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  Write a program that prints a table with each line giving an integer, its square,
 *  and its cube. Ask the user to input the lower and upper limits for the table. Use a
 *  for loop.
 */
#include <stdio.h>
int main(void)
{
    int lower, upper;
    int ind;

    printf("Enter lower and upper limits for the table:\n");
    scanf("%d %d", &lower, &upper);
    printf("%5s %10s %15s\n", "num", "square", "cube");
    for(ind = lower; ind <= upper; ind++)
        printf("%5d %10d %15d\n", ind, ind * ind, ind * ind * ind);

    return 0;
}