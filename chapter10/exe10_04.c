/*	exe10_04.c
 *  2025-01-25
 *  modified by Andy Hsu
 * 
 *  Write a function that returns the index of the largest value stored in an array-ofdouble.
 *  Test the function in a simple program.
 */
#include <stdio.h>
int max_arr_index(double arr[], int n);
int main(void)
{
    double arr[5] = {3.3, 4.4, 5.5, 8.8, 4.4};
    
    printf("Max value of arr index is %d\n", max_arr_index(arr, 5));

    return 0;
}

int max_arr_index(double arr[], int n)
{
    int max_index = 0;
    int ind;

    for(ind = 1; ind < n; ind++)
        if(arr[ind] > arr[max_index])
            max_index = ind;

    return max_index;
}