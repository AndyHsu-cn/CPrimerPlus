/*	exe10_05.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  Write a function that returns the difference between the largest and smallest
 *  elements of an array-of-double. Test the function in a simple program.
 */
#include <stdio.h>
double largest_diff(const double ar[], int n);
int main(void)
{
    double ar[] = {10, 20, 30, 5, 15, 25};

    printf("difference between the largest and smallest elements of an array is %f\n", largest_diff(ar, 6));

    return 0;
}

double largest_diff(const double ar[], int n)
{
    double max, min;
    int ind;

    for(ind = 1, max = min = ar[0]; ind < n; ind++)
    {
        if(ar[ind] > max)
            max = ar[ind];
        if(ar[ind] < min)
            min = ar[ind];
    }

    return (max - min);
}